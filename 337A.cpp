#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
cin >> n >> m;
vector<int> f(m);
for(int i = 0 ; i<m ; i++){
    cin >> f[i];
    }
sort(f.begin(),f.end());
cout << f[n-1]-f[0];
}
