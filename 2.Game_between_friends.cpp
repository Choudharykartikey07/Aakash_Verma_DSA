//https://www.codechef.com/problems/FRGAME
#include<iostream>
using namespace std;
int main(){
    int t,maximum;
    cin>>t;
    while(t>0){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>=b)
        {
            b += c;
        }
        else{
            a+=c;
        }
        if(a>=b){
            b+=d;
        }
        else
        {
            a+=d;
        }
        maximum = max(a,b);
        if(maximum == a){
            cout<<"N"<<endl;
        }
        else
        {
            cout<<"S"<<endl;
        }
        t--;
        
        
    }
    return 0;
}
