#include <iostream>

using namespace std;

struct Figure{
	virtual ~Figure(){}
	virtual void area(int a,int b)=0;
};

struct Quadrangle:Figure{
	virtual ~Quadrangle(){}
	virtual void second_angle(int c)=0;
};

struct Rhombus:Quadrangle{
	void area(int a, int b){
		cout<<a*b/2<<endl;
	}

	void second_angle(int c){
		cout<<(180-c)<<endl;
	}
};

struct Rectangle:Quadrangle{
	void area(int a,int b){
		cout<<a*b<<endl;
	}

	void second_angle(int c) {
		cout<<(180-c)<<endl;
	}
};

int main() {
	Quadrangle *A[2];
	int a1,b1,c1;
	cout<<"Enter length of the two diagonals and the angle for rhombus: ";
	cin>>a1>>b1>>c1;
	A[0]= new Rhombus;
	cout<<"The area of rhombus: ";
    A[0]->area(a1,b1);
    cout<<"The second angle of rhombus: ";
    A[0]->second_angle(c1);
	cout<<"Enter length of the sides and the angle between the diagonals for rectangle: ";
	cin>>a1>>b1>>c1;
	A[1]=new Rectangle;
	cout<<"The area of rectangle: ";
	A[1]->area(a1,b1);
	cout<<"The second angle of rectangle: ";
	A[1]->second_angle(c1);
	cout<<endl;
    delete []A;
	system("pause");
	return 0;
}
