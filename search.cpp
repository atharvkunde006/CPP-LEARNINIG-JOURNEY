#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,5,6,7,8,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the student roll number:";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            break;
        } 
              
    }
    if(flag==true)
{
    cout<<x<<" is present";
    
}
else{
    cout<<x<<"is not present";
}
}