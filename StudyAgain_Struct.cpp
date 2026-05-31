#include <iostream>

using namespace std;

struct Reactangle {
    int length;
    int width;
};


int main() {

    Reactangle rect;
    
    cout  << "Enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;

    cout << "Size of the rectangle: " << sizeof(rect) << endl;
    cout << "Area of the rectangle: " << rect.length * rect.width << endl;

return 0;
}