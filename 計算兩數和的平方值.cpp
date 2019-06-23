#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,y,sumx,sumy;
    while(cin>>x){
        cin>>y;
        sumx = x+y;
        sumy = sumx*sumx;
        cout<<sumy<<"\n";
    }
    return 0;
}
