#include <iostream>

using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;

    public:
        Arithmetic(){
            a = 0;
            b = 0;
        }
        Arithmetic(T a, T b);
        T add();
        T sub();
        ~Arithmetic(){cout << "Destructor called" << endl;};
    };

    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b){
        this -> a= a;
        this -> b= b;
    }
    template<class T>
    T Arithmetic<T>::add(){
        return a+b;
    }
    template<class T>
    T Arithmetic<T>::sub(){
        return a-b;
    }

int main(){
    Arithmetic<double> obj1(10.2, 0.7);

    cout << obj1.add() << endl;
    cout << obj1.sub() << endl;

    return 0;
}