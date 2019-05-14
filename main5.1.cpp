#include <iostream>

using namespace std;

void sortarr(int *A, int A_size) {
	for (int i=0; i<A_size-1;i++)
		for(int j=A_size-2;j>=i;j--)
			if (A[j] > A[j + 1]) {
				int t = A[j];
				A[j] = A[j + 1];
				A[j + 1] = t;
			}
}

void sortarr(float *A, int A_size){
	for (int i=0;i<A_size-1;i++)
		for (int j=A_size-2;j>=i;j--)
			if (A[j]>A[j+1]){
				float t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
}

void setarr(int *Arr, int k){
    for(int i=0;i<k;i++){
        cout<<"int Arr[" << i << "] = ";
        cin>>Arr[i];
    }
    cout << endl;
}

void setarr(float *Arr, int k){
    for(int i=0;i<k;i++){
        cout<<"float Arr[" << i << "] = ";
        cin>>Arr[i];
    }
    cout << endl;
}

int main() {
	int n;
	cout<<"Enter number of elements for 1st array: ";
	cin>>n;
    int *A;
    float *B;
    A=new int[n];
    cout<<"\nEnter the elements for 1st array:" << endl;
    setarr(A,n);
    sortarr(A, n);
    cout <<"\nSorted array:" << endl;
    for (int i=0;i<n;i++)
        cout<<"int Arr["<<i<<"] = "<<A[i]<<endl;
    delete[]A;
    cout<<"\nEnter number of elements for 2nd array: ";
	cin>>n;
	B=new float[n];
	cout<<"\nEnter the elements for 2nd array:" << endl;
	setarr(B,n);
	sortarr(B,n);
	cout<<"\nSorted array:"<<endl;
    for (int i=0;i<n;i++)
        cout<<"float Arr["<<i<<"] = "<<B[i]<<endl;
    delete[]B;
	cout<<endl<<endl;
	system("pause");
	return 0;
}
