#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,a,b,c;
cin >> t ;
for(;t>0;t--){
        cin >> a >> b >> c;
        if (a+b==c || a+c==b || b+c==a){
        cout << "Yes" <<"\n";}
        else{
        cout << "No" << "\n";}}
return 0 ;
}
