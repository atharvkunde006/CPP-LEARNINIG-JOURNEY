#include <iostream>
using namespace std;
struct student
{
    int prn;
    char grade;
    int marks;
    float cgpa;
};
int main()
{
    struct student atharv;
    atharv.prn = 1515;
    atharv.grade = 'a';
    atharv.marks = 100;
    atharv.cgpa = 8.5;
    cout << "The prn of atharv is:" << atharv.prn << endl;
    cout << "The grade of atharv is:" << atharv.grade << endl;
    cout << "The marks of atharv is:" << atharv.marks << endl;
    cout << "The cgpa of atharv is:" << atharv.cgpa << endl;
    return 0;
}