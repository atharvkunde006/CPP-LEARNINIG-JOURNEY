#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int n=5;
   int expectedsum=n*(n+1)/2;
   int actualsum=0;
for(int i=0;i<n-1;i++){
    actualsum=actualsum+arr[i];
}
int missingvalue=expectedsum-actualsum;
cout<<"mising value:"<<missingvalue<<endl;
return 0;
}