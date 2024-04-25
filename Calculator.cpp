#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;

    cout<<"Enter the First Number:";
    cin>>a;

    cout<<"Enter the Second Number:";
    cin>>b;

    cout<<"Enter the Operation you want to perform :";
    cout<<"Operations Are: \n1.'+' \n2.'-' \n3.'*' \n4.'/' \n5.'%'"<<endl;
    cin>>operation;

    cout<<"Operation Selected is : "<<operation<<endl;

    switch (operation)
    {
    case '+':cout<<"Addition of two number is : "<<(a+b)<<endl;
        break;

    case '-':cout<<"Substraction of two number is :"<<(a-b)<<endl;
        break;    
    
    case '*':cout<<"Multiplication of two number is :"<<(a*b)<<endl;
        break;

    case '/':cout<<"Division of two number is :"<<(a/b)<<endl;
        break;

    case '%':cout<<"Modulus of two number is :"<<(a%b)<<endl;
        break;        
    default:
        break;
    }
    return 0;
}