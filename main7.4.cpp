#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

struct Screen{
	virtual ~Screen(){}
	virtual void sinfo(int a)=0;
};

struct Keyboard{
	virtual ~Keyboard(){}
	virtual void kinfo(int a)=0;
};

struct Laptop:Screen, Keyboard{
    void brand (string s){
        cout<<"Laptop's brand: "<<s<<endl;
    }

	void kinfo(int a){
		if (a==2)
            cout<<"Keyboard doesn't work."<<endl<<endl;
        else if (a==1)
            cout<<"Keyboard works."<<endl<<endl;
        else
            cout<<"No info about keyboard."<<endl<<endl;
	}

    void sinfo(int a){
		if (a==2)
            cout<<"Screen doesn't work."<<endl;
        else if (a==1)
            cout<<"Screen works."<<endl;
        else
            cout<<"No info about screen."<<endl;
	}
};

struct Phone:Screen, Keyboard{
	    void brand (string s){
            cout<<"Phone's brand: "<<s<<endl;
    }

	void kinfo(int a){
		if (a==2)
            cout<<"Keyboard doesn't work."<<endl<<endl;
        else if (a==1)
            cout<<"Keyboard works."<<endl<<endl;
        else
            cout<<"No info about keyboard."<<endl<<endl;
	}

    void sinfo(int a){
		if (a==2)
            cout<<"Screen doesn't work."<<endl;
        else if (a==1)
            cout<<"Screen works."<<endl;
        else
            cout<<"No info about screen."<<endl;
	}
};

struct PC:Screen, Keyboard{
    void brand (string s){
        cout<<"PC's brand: "<<s<<endl;
    }

	void kinfo(int a){
		if (a==2)
            cout<<"Keyboard doesn't work."<<endl<<endl;
        else if (a==1)
            cout<<"Keyboard works."<<endl<<endl;
        else
            cout<<"No info about keyboard."<<endl<<endl;
	}

    void sinfo(int a){
		if (a==2)
            cout<<"Screen doesn't work."<<endl;
        else if (a==1)
            cout<<"Screen works."<<endl;
        else
            cout<<"No info about screen."<<endl;
	}
};

int main(){
	string s1;
	int a1,b1;
	Laptop A;
	Phone B;
	PC C;
	cout<<"Enter brand for the laptop: ";
	cin>>s1;
	cout<<"Enter the info about keyboard:\n1.Keyboard works\n2.Keyboard doesn't work.\n";
	cin>>a1;
	cout<<"Enter the info about screen:\n1.Screen works\n2.Screen doesn't work.\n";
	cin>>b1;
	A.brand(s1);
	A.sinfo(a1);
	A.kinfo(b1);
    cout<<"Enter brand for the phone: ";
	cin>>s1;
	cout<<"Enter the info about keyboard:\n1.Keyboard works\n2.Keyboard doesn't work.\n";
	cin>>a1;
	cout<<"Enter the info about screen:\n1.Screen works\n2.Screen doesn't work.\n";
	cin>>b1;
	B.brand(s1);
	B.sinfo(a1);
	B.kinfo(b1);
	cout<<"Enter brand for the PC: ";
	cin>>s1;
	cout<<"Enter the info about keyboard:\n1.Keyboard works\n2.Keyboard doesn't work.\n";
	cin>>a1;
	cout<<"Enter the info about screen:\n1.Screen works\n2.Screen doesn't work.\n";
	cin>>b1;
	C.brand(s1);
	C.sinfo(a1);
	C.kinfo(b1);
	system("pause");
	return 0;
}
