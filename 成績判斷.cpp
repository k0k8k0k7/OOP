#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x>100||x<0)
        cout<<"error\n";
    else if(x>=90)
        cout<<"A\n";
    else if(x>=80)
        cout<<"B\n";
    else if(x>=70)
        cout<<"C\n";
    else if(x>=60)
        cout<<"D\n";
    else if(x>=0)
        cout<<"E\n";
    return 0;
}
