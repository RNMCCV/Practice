#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

class book{
  private:
    string title;
    int pages;
  public:
    void setpages(int a){
      pages=a;
    }
    void settitle(string s){
      title=s;
    }
    void getinfo(){
      cout<<title<<" "<<pages<<" "<<"pages"<<endl;
    }
};

int main (){
  book book1, book2;
  int pages1;
  string title1;
  cout<<"Enter first book's title: ";
  cin>>title1;
  book1.settitle(title1);
  cout<<"Enter number of pages in the first book: ";
  cin>>pages1;
  book1.setpages(pages1);
  cout<<"Enter second book's title: ";
  cin>>title1;
  book2.settitle(title1);
  cout<<"Enter number of pages in the second book: ";
  cin>>pages1;
  book2.setpages(pages1);
  cout <<"\nThe books you've entered: "<<endl;
  book1.getinfo();
  book2.getinfo();
  system("pause");
  return 0;
}
