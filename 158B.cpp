#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,s,c1=0,c2=0,c3=0,c=0;
cin >> n ;
for(int i = 0 ; i<n ; i++){
    cin >> s;
    if(s==4){
        c+=1;
                }
    else if(s==3){
        c3+=1;
            }
    else if(s==2){
        c2+=1;
        }
    else c1+=1;
    }
c+=c3;
if(c1>c3) c1-=c3;
else c1=0;
c+=c2/2;
c2=c2%2;
if(c2==1) c+=1,c1-=2;
while(c1>0) c+=1,c1-=4;
cout << c;
}
