#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double triangle_high, triangle_base, triangle_area;
    cin >> triangle_high >> triangle_base;
    triangle_area = (triangle_base * triangle_high)/2.0;
    cout<<fixed<<setprecision(1)<<triangle_area<<"\n";
}
