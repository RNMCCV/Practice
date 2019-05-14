#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

class vector{
  private:
    double x,y;
  public:
    vector(double v_x, double v_y){
        x=v_x;
        y=v_y;
    }
    void getinfo(){
      cout<<"("<<x<<";"<<y<<")"<<endl;
    }
};

int main (){
  double x1,y1;
  cout<<"Enter 1st vector's x coord: ";
  cin>>x1;
  cout<<"Enter 1st vector's y coord: ";
  cin>>y1;
  vector a(x1,y1);
  cout<<"Enter 2nd vector's x coord: ";
  cin>>x1;
  cout<<"Enter 2nd vector's y coord: ";
  cin>>y1;
  vector b(x1,y1);
  cout<<"Vectors you've entered: "<<endl;
  a.getinfo();
  b.getinfo();
  system("pause");
  return 0;
}
