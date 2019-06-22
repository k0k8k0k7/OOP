#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,sum,c=0;
    cin>>x;
    while(x>=10){
        x=x-10;
        c++;
    }
    cout<<"NT10="<<c<<"\n";
    c=0;
    while(x>=5){
        x=x-5;
        c++;
    }
    cout<<"NT5="<<c<<"\n";
    cout<<"NT1="<<x<<"\n";
    return 0;
}
