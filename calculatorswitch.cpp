#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter the number:" << endl;
    cin >> n1;
    char op;
    cout << "Enter the opretor:" << endl;
    cin >> op;
    int n2;
    cout << "Enter the number:" << endl;
    cin >> n2;
    cout << "The ans is:" << " ";
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << " invalid opretor" << endl;
        break;
    }
}