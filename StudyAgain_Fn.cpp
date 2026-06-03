#include <iostream>
using namespace std;

int add (int a, int b){
    int c = a + b;
    return c;
}

int main(){

    int num1 = 10, num2 = 20;
    int sum = add (num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    return 0;
}