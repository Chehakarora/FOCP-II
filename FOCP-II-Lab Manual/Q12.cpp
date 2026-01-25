//Program to classify a triangle into equilateral or isoceles or scalene based on its sides
#include <iostream>

int main() {
    int a, b, c;

    std::cout<<"Enter the first side of the triangle: ";
    std::cin>>a;
    std::cout<<"Enter the second side of the triangle: ";
    std::cin>>b;
    std::cout<<"Enter the third side of the triangle: ";
    std::cin>>c;
    
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            std::cout<<"The triangle is Equilateral";
        }
        else if(a==b || b==c || a==c){
            std::cout<<"The triangle is Isoceles";
        }
        else{
            std::cout<<"The triangle is Scalene";
        }
    }    
    else{
        std::cout<<"Invalid triangle or It's not a triangle!";
    }
    return 0;
}
