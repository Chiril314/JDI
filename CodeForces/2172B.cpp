#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Event{
    long long pos;
    int type;
    double value;
};

bool cmp(Event a, Event b){
    if(a.pos != b.pos)
        return a.pos < b.pos;
    
    return a.type < b.type;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    long long l;
    double x, y;

    cin >> n >> m >> l >> x >> y;

    vector<long long> s(n), t(n);
    for(int i = 0; i < n; i++)
        cin >> s[i] >> t[i];

    vector<long long> p(m);
    for(int i = 0; i < m; i++)
        cin >> p[i];

    vector<Event> events;
    events.reserve(2 * n + m);

    for(int i = 0; i < n; i++){
        double v1 = (t[i] - s[i]) / x + (l - t[i]) / y;

        Event a;
        a.pos = s[i];
        a.type = 0;
        a.value = v1;
        events.push_back(a);

        Event b;
        b.pos = t[i];
        b.type = 2;
        b.value = v1;
        events.push_back(b);
    }

    for(int i = 0; i < m; i++){
        Event q;
        q.pos = p[i];
        q.type = 1;
        q.value = i;
        events.push_back(q);
    }

    sort(events.begin(), events.end(), cmp);

    priority_queue<double, vector<double>, greater<double>> act;
    priority_queue<double, vector<double>, greater<double>> rmv;

    vector<double> ans(m);
    for(int i = 0; i < int(events.size()); i++)
        if(events[i].type == 0)
            act.push(events[i].value);
        else if(events[i].type == 2)
            rmv.push(events[i].value);
        else{
            while(!act.empty() && !rmv.empty() && act.top() == rmv.top()){
                act.pop();
                rmv.pop();
            }

            int index = int(events[i].value);
            double b = (l - p[index]) / y;

            if(!act.empty() && act.top() < b)
                b = act.top();

            ans[index] = b;
        }
    
    cout << fixed << setprecision(10);
    for(int i = 0; i < m; i++)
        cout << ans[i] << endl;

    return 0;
}