#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade:"<<endl;
    cin>>grade;
    switch(grade){
        case'a':
        cout<<"Excellent!"<<endl;
        break;
        case'b':
        cout<<"Good Job!"<<endl;
        break;
        case'c':
        cout<<"You Pass!"<<endl;
        break;
        case'd':
        cout<<"Try Harder!"<<endl;
        break;
        case'e':
        cout<<"You are fell!"<<endl;
        break;
    }

    }