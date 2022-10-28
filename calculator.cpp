#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout <<"Choose + - * / :";
    cin >>op;
    cout <<"Enter Number 1 : ";
    cin >>num1;
    cout <<"Enter Number 2 : ";
    cin >>num2;
       switch(op) {
    case '+':
        cout<<"Result is "<<num1+num2;
    break;
    case '-':
        cout<<"Result is "<<num1-num2;
   break;
    case '*':
        cout<<"Result is "<<num1*num2;
    break;
    case '/':
        cout<<"Result is "<<num1/num2;
    default :
         cout <<"Error Value";
         }
         cout<<"\n";
         cout <<"Thank you ";
         cout<<"\n";
         cout <<"By AhmadEbedo";
    return 0;
    }
