#include<iostream>
using namespace std;
//I'm commenting and editing
//Using Loop Method
int main() {
    int n,q;
	cin>>n>>q; 
    int sum=0; //declaring and initializing
   
    int prod=1; //declaring and initializing
    for(int i=1;i<=n;i++){ 
        if (q==1){   //using if else
            sum = sum +i; 
        }  
        else { 
            prod =prod * i; 
        } 
    } 
    if (q ==1){ 
         cout<<"Sum="<<sum<<endl; 
    } 
    else if(q==2){ 
     cout<<"Product="<<prod<<endl; 
    }
    else{
        cout<<-1;
    }
}
