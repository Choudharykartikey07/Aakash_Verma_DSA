//https://www.codechef.com/submit/WORDLE?tab=statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int i,j;
    	string S;
    	string T;
    	string M;
    	cin>>S>>T;
    	for(i=0; i<S.length();i++){
    	    if(T[i]==S[i]){
    	        M += "G";
    	    }
    	    else{
    	        M += "B";
    	    }
    	}
    	cout<<M<<endl;
    	t--;
    	
    	
	}
	return 0;
}
