#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin >> n >> m;
vector<string>v(m+1);
for (int i = 0 ; i<n;i++){
    getline(cin, v[i]);
    }
cout << v[0] << v[1] ;
}
