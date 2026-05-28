#include <iostream>

int main()
{
  const int size = []{
    int s;
    std::cout << "Enter the size of the array: ";
    std::cin >> s;
    return s;
  }();
    
int arr[size];

for(int a = 0; a < size; a++)
{
    std::cout <<"your array element Enter the value: ";
    std::cin >> arr[a];
}

for (int a = 0; a < size; a++)
{
std::cout << "Array element: " << arr[a] << std::endl;
}

return 0;
}
