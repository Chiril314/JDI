#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> name;
vector<int> elo, gamesPlayed, gamesWon, gamesTied, gamesLost;
vector<double> winRate;

void Update(int w, int l, bool draw){
    int bw = elo[w], bl = elo[l];
    double ew = 1.0 / (1.0 + pow(10.0, (bl - bw) / 400.0));
    double el = 1.0 / (1.0 + pow(10.0, (bw - bl) / 400.0));

    int kw, kl;
    if(elo[w] < 1000)
        kw = 200;
    else if(elo[w] < 1400)
        kw = 150;
    else if(elo[w] < 1800)
        kw = 100;
    else
        kw = 50;

    if(draw){
        if(elo[l] < 1000)
            kl = 200;
        else if(elo[l] < 1400)
            kl = 150;
        else if(elo[l] < 1800)
            kl = 100;
        else
            kl = 50;
    } else{
        if(elo[l] < 1000)
            kl = 35;
        else if(elo[l] < 1400)
            kl = 40;
        else if(elo[l] < 1800)
            kl = 45;
        else
            kl = 50;
    }
    
    double sw, sl;
    if(draw){
        sw = 0.5;
        sl = 0.5;
    } else{
        sw = 1;
        sl = 0;
    }

    elo[w] = int(bw + (kw * (sw - ew)));
    elo[l] = int(bl + (kl * (sl - el)));

    gamesPlayed[w]++;
    gamesPlayed[l]++;
    if(draw){
        gamesTied[w]++;
        gamesTied[l]++;
    } else{
        gamesWon[w]++;
        gamesLost[l]++;

        winRate[w] = double(gamesWon[w]) / gamesPlayed[w] * 100;
        winRate[l] = double(gamesWon[l]) / gamesPlayed[l] * 100;
    }
}

int find(string check){
    for(int i = 0; i < elo.size(); i++)
        if(name[i] == check)
            return i;

    return -1;
}

int main(){
    ifstream fin("info.txt");
    ofstream fout("info.tmp");

    string line;

    getline(fin, line);
    regex header(R"(^(\d+)\s+Players:$)");
    smatch match;
    regex_match(line, match, header);
    int n = stoi(match[1]);

    regex playerStart(R"(^\s*-\s+([^:]+):\s*$)");
    regex field(R"(^\s*-\s+(.+):\s+([0-9]+(\.[0-9]+)?)\s*$)");

    for(int i = 0; i < n; i++){
        getline(fin, line);
        regex_match(line, match, playerStart);
        name.push_back(match[1]);

        getline(fin, line);
        regex_match(line, match, field);
        elo.push_back(stoi(match[2]));

        getline(fin, line);
        regex_match(line, match, field);
        gamesPlayed.push_back(stoi(match[2]));

        getline(fin, line);
        regex_match(line, match, field);
        gamesWon.push_back(stoi(match[2]));
    
        getline(fin, line);
        regex_match(line, match, field);
        gamesTied.push_back(stoi(match[2]));

        getline(fin, line);
        regex_match(line, match, field);
        gamesLost.push_back(stoi(match[2]));

        getline(fin, line);
        regex winRateField(R"(^\s*-\s+Win Rate:\s+([0-9]+(\.[0-9]+)?)(%)?\s*$)");
        if(!regex_match(line, match, winRateField)){
            cerr << "ERROR: BAD WIN RATE LINE: " << line << endl;
            return 0;
        }   
        winRate.push_back(stod(match[1]));
    }

    string player1, player2, winner;
    cin >> player1 >> player2 >> winner;
    
    int ind1 = find(player1), ind2 = find(player2);
    if(ind1 == -1){
        cout << "ERROR: INVALID NAME(PLAYER1)";
        return 0; 
    }

    if(ind2 == -1){
        cout << "ERROR: INVALID NAME(PLAYER2)";
        return 0; 
    }

    if(winner == "player1")
        Update(ind1, ind2, 0);
    else if(winner == "player2")
        Update(ind2, ind1, 0);
    else if(winner == "draw")
        Update(ind1, ind2, 1);
    else{
        cout << "ERROR: INVALID WINNER";
        return 0;
    }

    fout << n << " Players:" << endl;
    for(int i = 0; i < n; i++){
        fout << "    - " << name[i] << ':' << endl;
        fout << "        - Elo: " << elo[i] << endl;
        fout << "        - Games Played: " << gamesPlayed[i] << endl;
        fout << "        - Games Won: " << gamesWon[i] << endl;
        fout << "        - Games Tied: " << gamesTied[i] << endl;
        fout << "        - Games Lost: " << gamesLost[i] << endl;
        fout << "        - Win Rate: " << winRate[i] << '%' << endl;
    }

    fout.close();
    fin.close();

    remove("info.txt");    
    rename("info.tmp", "info.txt"); 

    return 0;
}
