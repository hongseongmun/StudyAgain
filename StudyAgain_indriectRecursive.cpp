#include <iostream>

using namespace std;
void funB(int n);

void funA(int n){
    if( n > 0){
        cout << "FunA n: " << n << endl;
        funB(n -1);
    }

}

void funB(int n){
    if(n > 0){
        cout << "FunB n: " << n << endl;
        funA(n/2);
    }
}

int main(){
    funA(10);
    return 0;
}