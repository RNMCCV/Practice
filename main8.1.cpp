#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string s;
	ifstream fin("file1.txt");
	if (!fin.is_open()){
		cout<<"Couldn't open the file."<<endl;
		system("pause");
		return 1;
	}
	while (!fin.eof()){
		fin>>s;
		cout<<s<<endl;
	}
	fin.close();
	cout<<endl;
	system("pause");
	return 0;
}
