#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    double area;
    area = (x+y)*z/2.0;
    cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<area<<"\n";
    return 0;
}
