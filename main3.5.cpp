#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Book{
    public:
        string title;
        int num_of_pages;
};

class library {
    private:
        int num_of_books;
        Book *book;
    public:
        library(int num_of_books2){
            num_of_books=num_of_books2;
            book=new Book[num_of_books];
        }

    void setinfo(int count){
        cout<<"Enter title of the book number "<<count+1<<": ";
        cin>>book[count].title;
        cout<<"Enter the number of pages for book "<<book[count].title<<": ";
        cin>>book[count].num_of_pages;
	}

	void getinfo(){
        cout<<"Welcome to the Library."<<endl;
        for(int i=0;i<num_of_books;i++)
            cout<<"Book "<<i+1<<" -- "<<book[i].title<<" "<<book[i].num_of_pages<<" pages."<<endl;
	}
};

int main(){
	int num_of_books1;
	cout<<"Enter the number of books: ";
	cin>>num_of_books1;
	library library1(num_of_books1);
	for(int i=0;i<num_of_books1;i++)
        library1.setinfo(i);
	library1.getinfo();
	system("pause");
	return 0;
}
