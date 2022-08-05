//https://www.codechef.com/problems/LAZYCHF
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,minimum;
	
	cin>>t;
	while(t>0)
	{
	    int x,m,d;
	    cin>>x>>m>>d;
	    minimum=min(x*m, x+d);
	    t -=1;
	    cout<<minimum<<endl;
	    
	    
	}
	
	return 0;
}
