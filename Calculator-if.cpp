#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<"Choose + - * / :";
    cin >>op;
    cout<<"\n";
    cout<<"Enter Number 1 :";
    cin >>num1;
    cout<<"\n";
    cout<<"Enter Number 2 :";
    cin >>num2;
    cout<<"\n";
    if(op=='+')
    cout<<"Result is "<<num1+num2;
    else if (op=='*')
    cout<<"Result is "<<num1*num2;
    else if (op=='/')
    cout<<"Result is "<<num1/num2;
    else if (op=='-'){
    cout<<"Result is "<<num1/num2;    }
    cout<<"\n";
    cout <<"By Ahmad Ebedo";
    return 0;
}
