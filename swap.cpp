#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=5;
    int *p1=&a;
    int *p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<a<<" "<<b<<endl;
}