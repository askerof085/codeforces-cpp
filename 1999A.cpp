#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,t;
cin >> t;
while(t--){
    cin >> n;
    cout << n%10 + n/10 << "\n";
    }
}
