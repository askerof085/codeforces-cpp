#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
string s;
cin >> n ;
string herf ="";
int cnt=0,maks=1;
vector<string>v(n);
for (int i = 0 ; i<n; i++ ){
    cin >> v[i];
}
for (int i=0 ; i<n ;i++){
    cnt=count(v.begin(),v.end(),v[i]);
    if (cnt>maks) maks=cnt, herf=v[i];
}
cout << herf;
}
