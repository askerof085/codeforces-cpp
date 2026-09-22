#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
long long   n,k;
cin >> n >> k;
if (n%2==1){
    if(k > (n/2 + 1)){
        cout << (k - (n/2 + 1)) * 2;
        return 0;
            }
    else{
        cout << (k-1) * 2 +1;
        return 0;

            }
        }
else{
    if(k> (n/2)){
        cout << (k - (n/2 )) * 2;
        return 0;
        }
    else{
        cout << (k-1)*2 +1;
        return 0;
        }
    }
}
