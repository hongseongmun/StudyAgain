#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main(){

    Rectangle r1;
    
    cout << "Enter width and height of the rectangle: ";
    cin >> r1.width >> r1.height;
    cout << "Width: " << r1.width << ", Height: " << r1.height << endl;

    Rectangle *p = &r1; // pointer to the structure
    cout << "Using pointer - Width: " << p->width<< ", Height: " << p->height << endl;
    
    delete p; // Deleting the pointer (not necessary here since it's not dynamically allocated, but included for demonstration) 
    return 0;
}