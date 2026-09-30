#include <bits/stdc++.h>
using namespace std;
int main(){
cin.tie(nullptr);
ios::sync_with_stdio(false);
int t;
cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    int min_ops = k;
    int even_count = 0;
    while(n--){
        int a;
        cin >> a;
        int rem = a%k;
        if(rem==0){
            min_ops = 0;
                        }
        else{
            min_ops = min(min_ops , k - rem);
                    }
        if(a%2==0){
            even_count++;
                }
            }
        if(k==4){
            int special_ops = 2;
            if(even_count>=2) special_ops = 0;
            else if(even_count==1) special_ops = 1;
            min_ops = min(min_ops,special_ops);
        }
        cout << min_ops << "\n";
    }
}

