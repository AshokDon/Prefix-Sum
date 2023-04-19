//update the value in between guven l and r

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    int Q;
    cin >> Q;
    while(Q--){
        int l , r , x;
        int B[n+1]={0};
        //[1,2,0,0,0,-1,0,-2,0,0,0]
        // 0 1 2 3 4  5 6 7 8 9 10
        cin >> l >> r >> x;
        // 0 4 1
        // 1 6 2
        B[l]+=x;
        B[r+1]-=x;
        
        
    }
    for(int i = 1 ; i < n ; i++){
        B[i] = B[i-1] + B[i];
    }
    for(int i = 0 ; i < n ; i++){
        A[i]+=B[i];
    }
	return 0;
}
