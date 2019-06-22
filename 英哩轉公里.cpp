#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double x,sum;
    while(cin>>x){
        sum = x*1.6;
        sum=sum*10+0.5;
        sum=floor(sum);
        sum = sum/10;
        cout<<fixed<<setprecision(1)<<sum<<"\n";
    }
    return 0;
}
