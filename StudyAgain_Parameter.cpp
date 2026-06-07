#include <iostream>
using namespace std;

int swap (int &a, int &b){
    
    int temp = a;
    
    a = b;
    b = temp;

    return 0;
}

int main() {
    
    int num1 = 10, num2 = 20;
    
    swap(num1, num2);

    cout << "first numbers: " << num1 << endl;
    cout << "second numbers: " << num2 << endl;

    return 0;
}