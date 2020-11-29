#include <iostream>
using namespace std;

int functAdd(int a, int b) {
    return a + b;
}

int main()
{
    int x, y, z;
    cout << "Enter First Number for addition:" << endl;
    cin >> x;
    cout << "Enter second Number for addition:" << endl;
    cin >> y;
    z = functAdd(x, y);
    cout << "Addition:" << z << endl;
    return 0;
    //system("pause>0");
}