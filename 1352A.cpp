#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,n,cnt=0 ;
cin >> t ;
for(;t>0;t--){
        cin >> n;
        do{
        cnt++;

            }
        while(a%10!=0);
        cout << cnt << "\n";
        int bolen=10;
        for(;cnt>0;cnt--){
        cout << n%bolen << " ";
        n-=n%bolen;
        bolen=bolen*10;}
}

return 0 ;
}
