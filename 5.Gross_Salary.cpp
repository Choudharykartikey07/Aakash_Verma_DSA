//https://www.codechef.com/submit/FLOW011?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t>0){
	    double basic_salary,gross_salary,hra,da;
	    cin>>basic_salary;
	    if(basic_salary<1500){
	        hra = (10 * basic_salary) / 100;
	        da = (90 * basic_salary) / 100;
	        gross_salary = basic_salary + hra + da;
	    }
	    else{
	        hra = 500;
	        da = (98 * basic_salary) / 100;
	        gross_salary = hra + da + basic_salary;
	    }
	    cout<<setprecision(2)<<fixed<<gross_salary<<endl;
	    
	    
	    t--;
	}
	return 0;
}
