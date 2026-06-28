#include <iostream>

using namespace std;

struct Rectangle {
    double length;
    double width;
};

void Fun (struct Rectangle *pr) {
    pr->length = 20;
    cout << "Length: " << pr->length << endl << "Width: " << pr->width << endl;
}

struct Rectangle *fun(){
    struct Rectangle *pr;
    pr= new Rectangle;

    pr-> length = 15;
    pr -> width = 10;

    return pr;
}



int main() {

    struct Rectangle r1 = {10, 5};
    Fun(&r1);

    cout << "r1 Length: " << r1.length << endl << "r1 Width: " << r1.width << endl;


    struct Rectangle *r2 = fun();
    cout << "r2Length: " << r2->length << endl << "r2 Width: " << r2->width << endl;

    delete r2; // Free the dynamically allocated memory
    return 0;
}
