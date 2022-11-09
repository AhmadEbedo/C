
#include <iostream>

using namespace std;
int main()
{
string q1;
cout<<"What tool do you want to use?"<<endl;
cout<<"1- Calculator"<<endl<<"2- School average calculator"<<endl;
cout<<"Type the tool you want to use  :";
cin>>q1;
if (q1=="1")
{
    char op;
    double num1;
    double num2;
    cout<<"Choose * / + - %  : ";
    cin>>op;
    cout<<"\n";
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"\n";
    cout<<"Enter Number 2 : ";
    cin>>num2; 
    if (op=='+'){
    cout<<"Result is "<<num1+num2;
    }
     else if (op=='-'){
     cout<<"Result is "<<num1-num2;
     }
     else if (op=='/'){
     cout<<"Result is "<<num1/num2;
    }
     else if (op=='*'){
     cout<<"Result is "<<num1+num2;
     }
    }
    if (q1=="2"){
        double Physics;
        cout<<"Your score in Physics : "<<endl;
        cin>>Physics;
        double Physics2; 
        cout<<"Qualitative calendar in Physics : "<<endl;
        cin>>Physics2;
        double daily_exam;
        cout<<"Qualitative calendar in Dily Exam :"<<endl;
        cin>>daily_exam;
        double Physics3;
        Physics3=Physics+Physics2+daily_exam;
        
        double Arabic;
        cout<<"Your score in Arabic language : "<<endl;
        cin>>Arabic;
        double Arabic2;
        cout<<"Qualitative calendar in Arabic language : "<<endl;
        cin>>Arabic2;
        double daily_exam2;
        cout<<"Qualitative calendar in Dily Exam : "<<endl;
        cin>>daily_exam2;
        double Arabic3; 
        Arabic3=Arabic+Arabic2+daily_exam2;
        
        double Islamic;
        cout<<"Your score in Islamic education : "<<endl;
        cin>>Islamic;
        double Islamic2;
        cout<<"Qualitative calendar in Islamic education : "<<endl;
        cin>>Islamic2;
        double daily_exam3;
        cout<<"Qualitative calendar in Dily Exam : "<<endl;
        cin>>daily_exam3;
        double Islamic3; 
        Islamic3=Islamic+Islamic2+daily_exam3;
        
        double Technology;
        cout<<"Your score in Technology : "<<endl;
        cin>>Technology;
        double Technology2;
        cout<<"Qualitative calendar in Technology : "<<endl;
        cin>>Technology2;
        double daily_exam4;
        cout<<"Qualitative calendar in Dily Exam : "<<endl ;
        cin>>daily_exam4;
        double Technology3; 
        Technology3=Technology+Technology2+daily_exam4;
        
        double Einglish;
        cout<<"Your score in Einglish : "<<endl;
        cin>>Einglish;
        double Einglish2;
        cout<<"Qualitative calendar in Einglish : "<<endl;
        cin>>Einglish2;
        double daily_exam5;
        cout<<"Qualitative calendar in Dily Exam : "<<endl ;
        cin>>daily_exam5;
        double Einglish3; 
        Einglish3=Einglish+Einglish2+daily_exam5;
        
        double Chemistry;
        cout<<"Your score in Chemistry : "<<endl;
        cin>>Chemistry;
        double Chemistry2;
        cout<<"Qualitative calendar in Chemistry : "<<endl;
        cin>>Chemistry2;
        double daily_exam6;
        cout<<"Qualitative calendar in Dily Exam : "<<endl ;
        cin>>daily_exam6;
        double Chemistry3; 
        Chemistry3=Chemistry+Chemistry2+daily_exam6;
        
        double social;
        cout<<"Your score in Social Studies : "<<endl;
        cin>>social;
        double social2;
        cout<<"Qualitative calendar in Social Studies :"<<endl;
        cin>>social2;
        double daily_exam7;
        cout<<"Qualitative calendar in Dily Exam : "<<endl;
        cin>>daily_exam7;
        double social3; 
        social3=social+social2+daily_exam7;
        
        double Maths;
        cout<<"Your score in Maths : "<<endl;
        cin>>Maths;
        double Maths2;
        cout<<"Qualitative calendar in Maths : "<<endl;
        cin>>Maths2;
        double daily_exam8;
        cout<<"Qualitative calendar in Dily Exam : "<<endl;
        cin>>daily_exam8;
        double Maths3; 
        Maths3=Maths+Maths2+daily_exam8;
        
        double Biology;
        cout<<"Your score in Biology :"<<endl;
        cin>>Biology;
        double Biology2;
        cout<<"Qualitative calendar in Biology : "<<endl;
        cin>>Biology2;
        double daily_exam9;
        cout<<"Qualitative calendar in Dily Exam : "<<endl;
        cin>>daily_exam9;
        double Biology3; 
        Biology3=Biology+Biology2+daily_exam9;
        
        cout<<"1-"<<" Physics /40 : "<<Physics3<<endl;
        cout<<"2-"<<" Arabic language /40 : "<<Arabic3<<endl;
        cout<<"3-"<<" Islamic education /40 : "<<Islamic3<<endl;
        cout<<"4-"<<" Technology /40 : "<<Technology3<<endl;
        cout<<"5-"<<" Einglish /40 : "<<Einglish3<<endl;
        cout<<"6-"<<" Chemistry /40 : "<<Chemistry3<<endl;
        cout<<"7-"<<" Social Studies /40 : "<<social3<<endl;
        cout<<"8-"<<" Mathss /40 : "<<Maths3<<endl;
        cout<<"9-"<<" Biology /40 : "<<Biology3<<endl;
        
        double Result2;
        Result2 =Physics3+Arabic3+Islamic3+Technology3+Einglish3+Chemistry3+social3+Maths3+Biology3;
        
        cout<<"The Total : "<<Result2<<endl;
        
        double Result;
        Result = Result2/9;
        cout<<"Result is "<<Result<<"%"<<endl;
    }
    return 0;
}

