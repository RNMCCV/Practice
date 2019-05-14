#include <iostream>
#include <cstdlib>

using namespace std;

struct Animal{
	virtual ~Animal(){}
	virtual void sound()=0;
};

struct Cat:Animal {
	void sound(string s) {
		cout<<"Cat says '" <<s<<"'"<<endl;
	}
};

struct Dog:Animal{
	void sound(string s){
		cout<<"Dog says '"<<s<<"'"<<endl;
	}
};

struct Fox:Animal{
	void sound(string s){
		cout<<"Fox says '"<<s<<"'"<<endl;
	}
};

int main() {
    Cat *a;
    Dog *b;
    Fox *c;
	string sound_cat, sound_dog, sound_fox;
	cout<<"What does the cat say?"<<endl;
	cin>>sound_cat;
	cout<<"What does the dog say?" << endl;
	cin>>sound_dog;
	cout<<"What does the fox say?" << endl;
	cin>>sound_fox;
	cout << "\nLet's see, what animals say:" << endl;
	a->sound(sound_cat);
	b->sound(sound_dog);
	c->sound(sound_fox);
	cout<<endl;
	system("pause");
	return 0;
}
