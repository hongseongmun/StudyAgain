#include <iostream>

using namespace std;

void fun1 (int n){
    if(n>0){
        fun1(n-1);
        cout << n << endl;
    }
}

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    fun1(x);

    return 0;
}