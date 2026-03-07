#include<iostream>
using namespace std;
struct founder{
    int id;
    char grade;
    float salary;
};
int main(){
    struct founder atharv;
    atharv.id=1515;
    atharv.grade='a';
    atharv.salary=1000000000;
    cout<<"The id of atharv is:"<<atharv.id<<endl;
    cout<<"The fav grade is:"<<atharv.grade<<endl;
    cout<<"The salary is:"<<atharv.salary<<endl;
    return 0;
}