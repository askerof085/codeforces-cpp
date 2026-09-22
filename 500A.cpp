#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n , t , c=1;
cin >> n >> t;
vector<int>v(n);
for (int i = 0 ; i<n-1 ; i++){
    cin >> v[i];
    }
v.insert(v.begin(),0);
while (t>c){
    c+=v[c];
    }
if (t==c) cout << "YES";
else cout << "NO";
}
