#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t,n,k;
cin >> t ;
for(;t>0;t--){
    cin >> n >> k;
    for (int i = 1 ; i<=n ; i+2){
        int say = 0;
        int cem = 0;
        cem+=i;
        say+=1;
        if (cem==n && say==k){
        cout << "YES" << "\n";
        break;}
        for (int j = 1 ; j<=n ; j+2){
            cem+=j;
            say+=1;
            if (cem==n && say==k){
            cout << "YES" << "\n";
            break;

}}}}}
