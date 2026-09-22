#include <bits/stdc++.h>
using namespace std;
 int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a[n] , Totalsum=0 , Half=0 , cnt=0 , sum1=0;
for (int i = 0 ; i<n ; i++){
        cin >> a[i];
        Totalsum+=a[i];
        }
Half = Totalsum/2;
sort(a,a+n);
for (int i = n-1 ; i>=0 ; i--){
            sum1+=a[i];
            cnt++;
            if(sum1>Half){
            break;}
            }
cout << cnt;
}
