#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int x,y,x1,y1,sum,fee=0,use=0;
    while(cin>>x>>y>>x1>>y1){
    if(x>=0&&x<=23&&y>=0&&y<=59){
        sum=x*60+y;
        if(x1>=0&&x<=23&&y1>=0&&y1<=59){
            if(x1>x){
            sum=x1*60+y1-sum;
            if(sum<=120){
                fee=(floor(sum/30))*30;
            }
            else if(sum<=240){
                fee=120+(floor((sum-120)/30))*40;
            }
            else if(sum>240){
                fee=280+(floor((sum-240)/30))*60;
            }
            cout<<fee<<"\n";
            }
        }
    }
    sum=0;fee=0;use=0;
    }
    return 0;
}
