#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,m;
long long minstep=9223372036854775807;
cin >> n >> m;
for (int i = n ;i>=0 ;i--){
    for(int j =0  ; j<=n ; j+=2){
        if (i+j==n){
            if((i+j/2)%m==0){
                if (i+j/2<minstep) minstep=i+j/2;
            }
        }
    }
}
if (minstep==9223372036854775807){ cout << -1;}
else{cout << minstep;}
}
