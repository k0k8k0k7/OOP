#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x,y,sum;
    while(cin>>x){
        cin>>y;
        sum=x+y;
        cout<<x<<"+"<<y<<"="<<sum<<"\n";
        sum=x*y;
        cout<<x<<"*"<<y<<"="<<sum<<"\n";
        sum=x-y;
        cout<<x<<"-"<<y<<"="<<sum<<"\n";
        if(x>=0){
            sum=x/y;
            cout<<x<<"/"<<y<<"="<<sum;
            sum=x%y;
            cout<<"..."<<sum<<"\n";
        }else{
            sum=x/y;
            cout<<x<<"/"<<y<<"="<<sum-1;
            sum=x%y;
            cout<<"..."<<sum+y<<"\n";
        }
    }
    return 0;
}
