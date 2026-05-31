#include <iostream>
using namespace std;

int main(){

    int size = []{
        int s;
        cout << "Enter the size of the array: ";
        cin >> s;
        return s;
    }();
    
    int *p;
    p = new int[size]; // allocate memory for an array of integers

    for (int i=0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> p[i];
        cout << "You entered: " << p[i] << endl;
    }

    delete [] p; // free the allocated memory
    return 0; 
}