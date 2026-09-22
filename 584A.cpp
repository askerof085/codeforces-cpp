#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t,n;
long long p;
cin >> n >> t;
if (t == 10) {
    if (n == 1)
        cout << -1;
    else {
        cout << 1;
        for (int i = 1; i < n; i++)
            cout << 0;
        }
        return 0;
    }
cout <<t;
for(int i = 1 ; i<n; i++)
    cout << 0 ;
    return 0;
}
