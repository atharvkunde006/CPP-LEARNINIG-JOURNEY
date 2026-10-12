#include<iostream>
using namespace std;
int main()
 int a,b;
 char op;
 cout<<"Enter the first Number:"<<endl;
 cin>>a;

 cout<<"Enter the oprator: "<<endl;
 cin>>op;

 cout<<"Enter the second Number:"<<endl;
 cin>>b;

 cout<<"Ans:";

 switch(op){
    case '+':
        cout<<a+b<<endl;
        break;

    case'-':
    cout<<a-b<<endl;
    break;
 
    case'*':
    cout<<a*b<<endl;
    break;

    case'/':
    cout<<a/b<<endl;
    break;


    }
 }

