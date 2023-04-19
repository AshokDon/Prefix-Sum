#print sum in range quaries 
// question link
//https://github.com/AshokDon/Prefix-Sum/edit/main/Prefixsum.cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long A[n];
        for(int i = 0 ; i < n ; i++)cin >> A[i];
        //finding prefix sum
        for(int i = 1 ; i < n ; i++){
            A[i]+=A[i-1];
        }
        int Q;
        cin >> Q;
        while(Q--){
            int l , r;
            cin >> l >> r;
            //convert to zero base index
            l--;
            r--;
            //long long sum = 0;
            if(l!=0){
                cout<<A[r]-A[l-1]<<"\n";
            }
            else{
                cout<<A[r]<<"\n";
            }
           //cout<<sum<<"\n";
        }
    }
}
