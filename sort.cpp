#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string arr[]={"atharv","aditya","akshay"};
sort(arr,arr+3);
cout<<"sorted words are:";
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}}