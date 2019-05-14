#include <iostream>

using namespace std;

void action(double a, double b, char act)
{
    switch (act){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Error."<<endl;
            break;
    }
}

void action(int a, double b, char act)
{
    switch (act){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Error."<<endl;
            break;
    }
}

void action(double a, int b, char act)
{
    switch (act){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Error."<<endl;
            break;
    }
}

void action(int a, int b, char act)
{
    switch (act){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Error."<<endl;
            break;
    }
}

int main(){
    int a1, b1;
    double a2, b2;
    char act;
    cout<<"Enter integer number: ";
    cin>>a1;
    cout<<"Enter integer number: ";
    cin>>b1;
    cout<<"Enter double number: ";
    cin>>a2;
    cout<<"Enter double number: ";
    cin>>b2;
    cout<<"Enter arithmetic action: ";
    cin>>act;
    cout<<"int "<<a1<<" "<<act<<" "<<"int "<<b1<<" = ";
    action(a1, b1, act);
    cout<<"double "<<a2<<" "<<act<<" "<<"int "<<b1<<" = ";
    action(a2, b1, act);
    cout<<"int "<<a1<<" "<<act<<" "<<"double "<<b2<< " = ";
    action(a1, b2, act);
    cout<<"double "<<a2<<" "<<act<<" "<<"double "<<b2<<" = ";
    action(a2, b2, act);
    system("pause");
    return 0;
}

