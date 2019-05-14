#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double a,b;
    char zn;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter the operation '+,-,*,/': ";
    cin>>zn;
    switch(zn){

        case '+':{
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
            break;
        }

        case'-':{
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        }

        case'*':{
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        }

        case'/':{
            if(b!=0){
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            break;
            }
        }

        default:
            cout<<"Error."<<endl;
            break;
    }
    system("pause");
    return 0;
}
