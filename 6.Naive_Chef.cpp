//https://www.codechef.com/submit/NAICHEF?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int N,A,B;
        cin>>N>>A>>B;
        int C[2] = {0};
        int arr[N+1];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i] == A){
                C[0]++;
            }
            if(arr[i] == B){
                C[1]++;
            }
        }
        double ans =  (C[0] * C[1] * 1.0) / (N* N * 1.0);
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
	return 0;
}
