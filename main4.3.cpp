#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void set(int** A, int n, int m) {
	for (int i =0; i<n; i++)
		for (int j = 0; j < m; j++)
			A[i][j] = 10 + rand() % 41;
}

void print(int** A, int n, int m) {
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<m;j++)
			cout << A[i][j] << "  ";
	}
}

int main() {
	int n, m, **A;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<"Enter the number of cols: ";
	cin>>m;
	A=new int *[n];
	for (int i=0;i<n;i++)
        A[i]=new int [m];
	set(A, n, m);
	print(A, n, m);
	cout<<endl<<endl;
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
	system("pause");
	return 0;
}
