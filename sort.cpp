#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the size of array:"<<endl;
    for(int i=1;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    sort(arr.begin(),arr.end());
    
}