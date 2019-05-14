#include <iostream>
#include <cstdlib>

using namespace std;

void set(int *a){
	for(int i=0;i<12;i++){
		cout<<"A["<<i<<"] = ";
		cin>>a[i];
	}
}


void replace(int *a) {
	int t;
	for(int i=1;i<12;i+=2) {
		t=a[i-1];
		a[i-1]=a[i];
		a[i]=t;
	}
}

void print(int *a) {
	for(int i=0;i<12;i++)
		cout<<a[i]<<" ";
}


int main() {
	int *A;
	A = new int[12];
	cout<<"Fill the array."<<endl;
	set(A);
	cout<<"The array:"<<endl;
	print(A);
	replace(A);
	cout<<"\nChanged array:"<<endl;
	print(A);
	cout<<endl;
	delete[]A;
	system("pause");
	return 0;
}
