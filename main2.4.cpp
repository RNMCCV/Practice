#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
        double a,x,y,t;
        cout<<"Enter a and x: ";
        cin>>a>>x;
        if (a<=x)
                y=a+log(x+a);
        else{
            if(sin(a*x)>=0)
                    y=sqrt(sin(a*x));
            else{
                cout<<"Error." << endl;
                system("pause");
                return 0;
            }
        }
        if (a<y)
            t = tan(a*x) + cos(2 * a*y);
        else{
            if (a==y)
                t=y/(a-x)+(a+x)/pow(y,2);
            else
                t=y/(a-x);
        }
	cout<<"a= "<<a<<", x= "<<x<<", y= "<<y<<", t= "<<t<<endl;
    system("pause");
    return 0;
}
