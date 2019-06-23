#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,y,i;
    while(cin>>x>>y){
        if(x>y){
            for(i=y;i>=0;i--){
                if(x%i==0&&y%i==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
        else if(x<y){
            for(i=x;i>=0;i--){
                if(x%i==0&&y%i==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
        else{
            cout<<x<<"\n";
        }
    }
    return 0;
}
