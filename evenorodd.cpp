#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<"Even number"<<endl;
        }
        else{
            cout<<arr[i]<<"odd number"<<endl;
        }
    }
}