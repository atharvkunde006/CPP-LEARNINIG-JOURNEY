#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a={"Atharv"};
    transform(a.begin(),a.end(),a.begin(),::toupper);
 cout<<a;
}