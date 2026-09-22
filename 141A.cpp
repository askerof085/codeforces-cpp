#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
string a,b,c,ab;
cin >> a >> b >> c;
ab= a+b;
sort(ab.begin(),ab.end());
sort(c.begin(),c.end());
if(ab==c) cout << "YES";
else cout << "NO";
}
