#include <iostream>

using namespace std;

static int x = 0;    

int fun1(int n){
    if(n > 0){
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    
    cout << "Enter a number: ";
    cin >> r;

    cout << fun1(r) << endl;

    return 0;
}