#include<iostream>
using namespace std;
void star(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    star(5);
    cout<<"This are the golden stars"<<endl;
    star(4);
    cout<<"This are the silver stars"<<endl;
    star(3);
    cout<<"This are the bronze stars"<<endl;
}