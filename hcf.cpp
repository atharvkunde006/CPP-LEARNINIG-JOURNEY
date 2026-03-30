#include<iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min (a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
        
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter a first number:"<<endl;
    cin>>a;
    int b;
    cout<<"enter the second number:"<<endl;
    cin>>b;
    cout << gcd(a,b);
}