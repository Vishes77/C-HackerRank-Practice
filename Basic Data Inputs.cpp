#include <iostream>
#include<iomanip> //used for to apply setprecision.

using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<setprecision(20)<<d<<endl;
    cout<<setprecision(20)<<e;
    // setprecision(20) toatal digits to give output in total uncliding before and after the decimal point.
    return 0;
}
