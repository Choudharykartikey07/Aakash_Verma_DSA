//https://www.codechef.com/submit/CREDITS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int X;
	    cin>>X;
	    if(X>65){
	        cout<<"Overload"<<endl;
	    }
	    else if(X<35){
	        cout<<"Underload"<<endl;
	    }
	    else{
	        cout<<"Normal"<<endl;
	    }
	    t--;
	}
	
	return 0;
}
