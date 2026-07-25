#include <iostream>

using namespace std;

int factorial(int n){
    if( n == 0 ) return 1;
    return factorial(n - 1) * n;
}

int Ifatorial(int n){
    int f = 1;
    for (int i = 1; i <= n; i++){
        f *= i;
    }
    return f;

}

int main(){
    int r = 5;
    int ir = 5;

    cout << "Factorial of " <<  r  << "is: ";
    cout << factorial(r) << endl;

    cout << "Factorial of " <<  ir  << "is: ";
    cout << Ifatorial(ir) << endl;

    return 0;
}