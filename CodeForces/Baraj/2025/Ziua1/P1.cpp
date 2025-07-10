#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

string r(string s){
      string a = "";
      for(long long i = s.size() - 1; i >= 0; i--){
            a += s[i];
      }

      return a;
}

string dtob(long long n){
      if(n == 0){
            return "0";
      } else{
            string ans = "";
            while(n > 1){
                  if(n % 2 == 0)
                        ans += '0';
                  else
                        ans += '1';

                  n /= 2;
            }

            ans += '1';
            return r(ans);
      }
}

long long btod(string a){
      long long ans = 1;

      long long cnt = 0;
      for(long long i = 0; i < a.size(); i++){
            if(a[i] == '1')
                  cnt++;
      }

      if(cnt == 0)
            return 0;
      else{
            long long j = 1;
            while(j < a.size()){
                  if(a[j] == '0'){
                        ans *= 2;
                  } else{
                        ans *= 2;
                        ans += 1;
                  }

                  j++;
            }

            return ans;
      }
}

string add(string a, string b){
      if(a.size() > b.size()){
            string s = r(b);
            for(long long i = 0; i < a.size() - b.size(); i++){
                  s += '0';
            }
            b = r(s);
      } else if(a.size() < b.size()){
            string s = r(a);
            for(long long i = 0; i < b.size() - a.size(); i++){
                  s += '0';
            }
            a = r(s);
      }

      string ans = "";
      long long cnt = 0;
      for(long long i = 0; i < a.size(); i++){
            if(a[i] == b[i]){
                  if(cnt > 0){
                        ans += '0';
                  }
            } else{
                  ans += '1';
                  cnt++;
            }
      }

      if(ans == "")
            return "0";
      else
            return ans;
}

int main(){
      long long n;
      cin >> n;

      set<pair<long long, long long>> ans;
      for(long long i = 0; 2 * i <= n; i++){
            for(long long j = i; j <= n - i; j++){
                  if(i == 0 && j == 0){
                        ans.insert({0, 0});
                        //ans.push_back({0, 0});
                  } else{
                        ans.insert({btod(add(dtob(i), dtob(j))), i + j});
                        //ans.push_back({btod(add(dtob(i), dtob(j))), i + j});
                  }
            }
      }

      cout << ans.size() % 1000000007;

      return 0;
}
