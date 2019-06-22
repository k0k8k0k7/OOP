#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,t;
    cin>>a>>b>>c>>d>>e;
    t=(a*1+b*2+c*2+d*2)-(e*2);
    if(t>=45)
        cout<<"A\n";
    else if(45>t&&t>=35)
        cout<<"B\n";
    else if(35>t&&t>=25)
        cout<<"C\n";
    else if(25>t)
        cout<<"D\n";
    return 0;
}
