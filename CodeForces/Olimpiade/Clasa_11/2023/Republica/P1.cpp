#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a1, a2, a3, b1, b2, b3, k;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> k;

    long long ans = k;
    for(int x1 = 0; x1 <= b1; x1++){
        long long s1 = x1 * a1;
        if(s1 - k > ans)
            break;
        
        for(int x2 = 0; x2 <= b2; x2++){
            long long s12 = s1 + (x2 * a2);
            long long r = k - s12;

            long long x3 = r / a3;
            for(int d = -1; d <= 1; d++){
                long long y = x3 + d;
                if(y < 0 || y > b3)
                    continue;

                long long t = s12 + (y * a3);
                if(llabs(t - k) < ans)
                    ans = llabs(t - k);
            }
        }
    }

    for(int x1 = 0; x1 <= b1; x1++){
        long long s1 = x1 * a1;
        if(s1 - k > ans)
            break;
        
        for(int x3 = 0; x3 <= b3; x3++){
            long long s13 = s1 + (x3 * a3);
            long long r = k - s13;

            long long x2 = r / a2;
            for(int d = -1; d <= 1; d++){
                long long y = x2 + d;
                if(y < 0 || y > b2)
                    continue;

                long long t = s13 + (y * a2);
                if(llabs(t - k) < ans)
                    ans = llabs(t - k);
            }
        }
    }

    for(int x2 = 0; x2 <= b2; x2++){
        long long s2 = x2 * a2;
        if(s2 - k > ans)
            break;
        
        for(int x3 = 0; x3 <= b3; x3++){
            long long s23 = s2 + (x3 * a3);
            long long r = k - s23;

            long long x1 = r / a1;
            for(int d = -1; d <= 1; d++){
                long long y = x1 + d;
                if(y < 0 || y > b1)
                    continue;

                long long t = s23 + (y * a1);
                if(llabs(t - k) < ans)
                    ans = llabs(t - k);
            }
        }
    }

    cout << ans;

    return 0;
}