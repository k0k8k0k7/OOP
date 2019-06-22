#include<bits/stdc++.h>
using namespace std;

int main(){
    float x,xs;
    int s;
    while(cin>>x){
        cin>>s;
        if(s==1){
            xs = (x-80)*0.7;
            cout<<fixed<<setprecision(1)<<xs<<"\n";
        }
        if(s==2){
            xs = (x-70)*0.6;
            cout<<fixed<<setprecision(1)<<xs<<"\n";
        }
    }
    return 0;
}
