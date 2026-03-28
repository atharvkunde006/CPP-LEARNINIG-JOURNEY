#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int main(){
    cout<<"The Sum is:"<<sum(5,6)<<endl;
    cout<<"The Sum is:"<<sum(5,3,4)<<endl;
    return 0;
}