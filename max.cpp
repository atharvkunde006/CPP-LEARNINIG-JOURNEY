#include<iostream>
using namespace std;
 int max(int x, int y){
    int a;
    if(x<y){
        a=y;}
        else{
            a=x;}
            return a;}
        int main(){
            int x,y;
            cout<<"Enters two numbers:"<<endl;
            cin>>x>>y;
            cout<<"The max number is:"<<max(x,y)<<endl;
            return 0;
        }

        
    
