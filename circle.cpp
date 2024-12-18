#include <iostream>
#include <cmath>

int main(){

    const double Pi = 3.14159;
    double radius;


    std::cout << "Type in the radius of the circle..." << '\n';
    std::cin >> radius;

    
    double area = Pi * pow(radius , 2);
    double circumference = 2 * Pi * radius;


    std::cout << "The area is: " << area << '\n';
    std::cout << "The circumference is: " << circumference << '\n';

    system("pause");

    return 0;
}