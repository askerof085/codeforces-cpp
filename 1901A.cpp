#include <bits/stdc++.h>
using namespace std;
int main(){
cin.tie(nullptr);
ios::sync_with_stdio(false);
int t;
cin >> t;
while(t--){
    int n,x,current_min,real_min=0;
    cin >> n >> x;
    vector<int> v(n+2);
    v[0]=0;
    v[n+1]=x;
    for(int i = 1 ; i<n+1 ; i++){
        cin >> v[i];
        current_min=v[i]-v[i-1];
        real_min=max(real_min,current_min);
        }
        real_min=max(real_min,2*(v[n+1]-v[n]));
        cout << real_min << "\n";
    }
}
