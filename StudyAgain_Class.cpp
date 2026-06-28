#include <iostream>

using namespace std;

// This is Monolithic code

// int main(){
//     int length = 0, width = 0;
//     cout << "Enter the length & width of the rectangle: ";
//     cin >> length >> width;

//     int area = length * width;
//     int per = 2*(length + width);

//     cout << "Area of rectangle: " << area << endl;
//     cout << "Perimeter of rectangle: " << per << endl;

//     return 0;
// }
//-----------------------------------------------------------------

// This is Modular code

// int area(int length, int width) {
//     return length * width;
// }

// int perimeter(int length, int width) {
//     return 2 * (length + width);
// }

// int main(){
//     int length = 0, width = 0;
//     cout << "Enter the length & width of the rectangle: ";
//     cin >> length >> width;

//     int a = area(length, width);
//     int peri = perimeter(length, width);

//     cout << "Area of rectangle: " << a << endl;
//     cout << "Perimeter of rectangle: " << peri << endl;

//     return 0;
// }
//-----------------------------------------------------------------

// This is Object-Oriented code

class Rectangle{
    private : 
        int length;
        int width;

    public :
        void setInitialValues(int l, int w){
            length = l;
            width = w;
        }

        void area(){
            cout << "Area of rectangle: " << length * width << endl;
        }

        void perimeter(){
            cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
        }  
    
};

int main(){
    Rectangle r;
    int length, width;

    cout << "Enter the length & width of the rectangle: ";    
    cin >> length >> width;
    
    r.setInitialValues(length, width);

    r.area();
    r.perimeter();

    return 0;
}