#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double a,b,n,m;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    if(a>=b)
        n=pow(a-b,1.0/3.0);
    else
        n=pow(a,2)+(a-b)/sin(a*b);
    if(n==b)
        m=pow(b,2)+tan(n*a);
    else{
        if(n<b)
            m=-1*(n+a)/b+sqrt(pow(sin(a),2)-cos(n));
        else
            m=pow(b,3)+n*pow(a,2);
    }
    cout<<"a= "<<a<<", b= "<<b<<", n= "<<n<<", m= "<<m<<endl;
    system("pause");
    return 0;
}
