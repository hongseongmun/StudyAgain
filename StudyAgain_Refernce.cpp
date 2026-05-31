#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    int b = 20;

    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    r++;
    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    r = b;
    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    cout << "b: " << b << endl;
    r++;
    cout << "a: " << a << endl;
    cout << "r: " << r << endl;
    cout << "b: " << b << endl;
    
    return 0;
}