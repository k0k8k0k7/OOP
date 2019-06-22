#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double x;
    int c=0;
    while(cin>>x){
        x=x*100;
        c=0;
        while(x>0){
            x=x-23.8;
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
