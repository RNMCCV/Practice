#include <iostream>

using namespace std;

struct Property{
	double worth;
	Property(double worth1){
		worth=worth1;
	}
	virtual ~Property(){}
	virtual double tax()=0;

};

struct Apartment:Property{
	Apartment(double worth):Property(worth){};
	double tax(){
		return worth/1000;
	}
};

struct Car:Property{
	Car(double worth):Property(worth){};
	double tax(){
		return worth/200;
	}
};

struct CountryHouse:Property{
	CountryHouse(double worth):Property(worth){};
	double tax(){
		return worth/500;
	}
};

int main(){
	double worth2;
	Property *A[7];
    for (int i=0;i<7;i++){
        if (i<3){
            cout<<"Enter the price for apartment "<<i+1<<": ";
            cin>>worth2;
            A[i]=new Apartment(worth2);
            cout<<"The tax for apartment "<<i+1<<" is: "<<A[i]->tax()<<endl;
        }
        else if ((i>=3)&&(i<5)){
            cout<<"Enter the price for car "<<i-2<<": ";
            cin>>worth2;
            A[i]=new Car(worth2);
            cout<<"The tax for car "<<i-2<<" is: "<<A[i]->tax()<<endl;
        }
        else{
            cout<<"Enter the price for country house "<<i-4<<": ";
            cin>>worth2;
            A[i]=new CountryHouse(worth2);
            cout<<"The tax for country house "<<i-4<<" is: "<<A[i]->tax()<<endl;
        }
    }
	cout << endl;
	for (int i = 0; i < 7; i++)
		delete A[i];
	system("pause");
	return 0;
}
