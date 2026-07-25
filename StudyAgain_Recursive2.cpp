#include <iostream>

using namespace std;

int sumOfNaturalNumbers(int n) {
    if(n == 0) return 0;
    return sumOfNaturalNumbers(n - 1) + n;
}

int forSum(int n){
    int s =0;
    for(int i = 1; i <= n; i++){
        s += i;
    }  
      return s;
    
}

int main(){
    int r;
    r =  sumOfNaturalNumbers(5);
    cout << "Sum of first 5 natural numbers is: " << r << endl;

    int r2 = forSum(5);
    cout << "Sum of first 5 natural numbers (iterative) is: " << r2 << endl;

    return 0;
}
