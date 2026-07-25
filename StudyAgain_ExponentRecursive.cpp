#include <iostream>

using namespace std;

int power(int x, int n){
    if(n == 0) return 1;
    return power(x, n-1) * x;
}

int power2(int x, int n){
    if(n == 0) return 1;
    if(n % 2 == 0)return power2(x * x, n/2);
    return x * power2(x * x, (n-1)/2);
}

int Ipower(int x, int n){
    int result = 1;
    for(int i = 0; i < n; i++){
        result *= x;
    }
    return result;
}

int main(){
    int r = power(2, 5);
    int r2 = Ipower(2, 5);
    int r3 = power2(2, 5);

    cout << "2^5 is: " << r << endl;
    cout << "2^5 is: " << r2 << endl;
    cout << "2^5 (optimized) is: " << r3 << endl;

    return 0;
}