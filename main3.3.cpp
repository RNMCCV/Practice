#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class car{
    private:
        string mark, color;
    public:
        car(string car_mark, string car_color){
             mark = car_mark;
             color=car_color;
        }
        void getinfo(void){
            cout<<color<<" "<<mark<<endl;
        }
};

int main(){
	string mark1, color1;
	cout<<"Enter mark of the first car: ";
	cin>>mark1;
	cout<<"Enter color of the first car: ";
	cin>>color1;
	car car1(mark1,color1);
	cout<<"Enter mark of the second car: ";
	cin>>mark1;
	cout<<"Enter color of the second car: ";
	cin>>color1;
	car car2(mark1,color1);
	cout<<"Cars which you've entered: "<<endl;
	car1.getinfo();
	car2.getinfo();
	system("pause");
	return 0;
}
