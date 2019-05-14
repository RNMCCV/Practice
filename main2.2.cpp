#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double a,b,z,t;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    if (a>=b)
        z=1-2*cos(a)*sin(b);
    else
        z=sqrt(abs(pow(a,2)-pow(b,2)));
    if(z<b)
        t=pow(z+pow(a,2)*b,1.0/3.0);
    else{
        if(z==b)
            t=1-log10(z)+cos(pow(a,2)*b);
        else
            t=1/cos(z*a);
    }
    cout<<"a= "<<a<<", b= "<<b<<", z= "<<z<<", t= "<<t<<endl;
    system("pause");
    return 0;
}
