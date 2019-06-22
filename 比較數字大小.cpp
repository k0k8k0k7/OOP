#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[3];
    int i,j,tmp;
    cin>>x[0]>>x[1]>>x[2];
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(x[i]<=x[j]){
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    cout<<x[0]<<">"<<x[1]<<">"<<x[2]<<"\n";
    return 0;
}
