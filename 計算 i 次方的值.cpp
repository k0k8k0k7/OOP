#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,y=1,i;
    while(cin>>x){
        y=1;
        if(x>31){
            cout<<"Value of more than 31\n";
            continue;
        }
        y=y<<x;
        cout<<y<<"\n";
    }
    return 0;
}
