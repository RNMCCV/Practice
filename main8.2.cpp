#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout("file2.txt");
	string s;
	cout<<"Type the text. Type '|' to stop."<<endl;
	while(true){
        cin>>s;
        if(s=="|")
            break;
        fout<<s<<" ";
	}
	fout.close();
	system("pause");
	return 0;
}
