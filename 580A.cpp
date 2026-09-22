#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n,max_subs=1,current_subs=1;;
cin >> n;
vector<int> a(n);
for(int i = 0 ; i<n ; i++){
    cin >> a[i];
            }
for(int i = 0 ; i<n-1 ; i++){
    if(a[i]<=a[i+1]){
            current_subs++;
            }
    else{
        max_subs = max(current_subs,max_subs);
        current_subs=1;
        }
    }
max_subs = max(current_subs,max_subs);
    cout << max_subs;
}
