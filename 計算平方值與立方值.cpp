#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,sum;
    while(cin>>x){
        sum = x*x;
        cout<<x<<" "<<sum<<" ";
        sum = x*x*x;
        cout<<sum<<"\n";
    }
    return 0;
}
