#include <iostream>
#include <cstdlib>

using namespace std;

double* mem(int a){
	double *m;
	m = new double[a];
	return m;
}

void set(int a, double *b) {
	for (int i = 0; i < a; i++) {
		cout<<"m["<<i<<"]=";
		cin>>b[i];
	}
}

void print(int a, double *b) {
	for (int i=0;i<a;i++)
		cout<<"m["<<i<<"]="<<b[i]<<endl;
}

void free(double *b) {
	delete [] b;
}

int main(){
	int c, d;
	double *m;
	do{
		cout<<"Enter size of the array: ";
		cin>>c;
		m=mem(c);
		set(c,m);
		cout<<endl;
		print(c,m);
		free(m);
		cout<<"\nDo you wish to continue?\n1 - Yes\n2 - no"<<endl;
		cin>>d;
	} while (d==1);
	system("pause");
	return 0;
}
