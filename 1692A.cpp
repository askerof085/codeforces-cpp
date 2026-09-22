#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int a,t;
cin >> t;
while(t--){
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    a=v[0];
    sort(v.begin(),v.end());
    auto it = find(v.begin(),v.end(),a);
    cout <<3 - distance(v.begin(),it) << "\n";
    }
}
