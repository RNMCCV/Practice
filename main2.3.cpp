#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    double a, b, y, t;
	cout << "Enter a and b: ";
	cin >>a>>b;
	if (a<=b)
		y=(pow(a,2)-pow(b,2))/(pow(a,3)+pow(b,3));
	else
		y=a+log(pow(b,2));
	if (y<b)
		t=pow(sin(y),2)+1/tan(a-b);
	else{
        if (y==b)
            t=(2*y+sqrt(pow(y,2)-a))/(2*b-sqrt(pow(a,2)-y));
		else
			t=pow(abs(y*sin(a)),1.0/3.0)*(-1)+1/sqrt(y*cos(b));
	}
	cout<<"a= "<<a<<", b= "<<b<<", y= "<<y<<", t= "<<t<<endl;
	system("pause");
	return 0;
}

