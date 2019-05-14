#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class students{
  private:
    string surname;
    int number;
  public:
    void setsurname(string s){
      surname=s;
    }
    void setnumber(int a){
      number=a;
    }
    void getinfo(){
      cout<<"Number in the list "<<number<<" "<<surname<<endl;
    }
};

int main (){
  students student1, student2;
  int number1;
  string surname1;
  cout <<"Enter 1st student's surname: ";
  cin>>surname1;
  student1.setsurname(surname1);
  cout<<"Enter 1st students's number in the list: ";
  cin>>number1;
  student1.setnumber(number1);
  cout<<"Enter 2nd student's surname: ";
  cin>>surname1;
  student2.setsurname(surname1);
  cout<<"Enter 2nd student's number in the list: ";
  cin>>number1;
  student2.setnumber(number1);
  cout <<"\nStudents:" << endl;
  student1.getinfo();
  student2.getinfo();
  system("pause");
  return 0;
}
