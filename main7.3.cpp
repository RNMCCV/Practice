#include <iostream>

using namespace std;

struct Vehicle{
	virtual ~Vehicle(){}
	virtual void getinfo(string s, string b)=0;
};

struct Car:Vehicle{
	void getinfo(string s, string b){
		cout<<"Car info:\nColor: "<<s<<"\nMax speed: "<<b<<endl;
	}
};

struct Bus:Vehicle{
	void getinfo(string s, string b){
		cout<<"Bus info:\nColor: "<<s<<"\nMax speed: "<<b<<endl;
	}
};

struct Bike:Vehicle{
	void getinfo(string s, string b){
		cout<<"Bike info:\nColor "<<s<<"\nMax speed: "<<b<< endl;
	}
};

int main(){
    Vehicle *A[3];
	string s1,b1;
	cout<<"Enter the color of the car: ";
	cin>>s1;
	cout<<"Enter max speed of the car: ";
	cin>>b1;
	A[0]=new Car;
	A[0]->getinfo(s1,b1);
	cout<<"Enter the color of the bus: ";
	cin>>s1;
	cout<<"Enter max speed of the bus: ";
	cin>>b1;
	A[1]=new Bus;
	A[1]->getinfo(s1,b1);
	cout<<"Enter the color of the bike: ";
	cin>>s1;
	cout<<"Enter max speed of the bike: ";
	cin>>b1;
	A[2]=new Bike;
	A[2]->getinfo(s1,b1);
	delete []A;
	system("pause");
	return 0;
}
