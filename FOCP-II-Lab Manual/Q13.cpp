//Program to compute the exact roots of a quadratic equation
#include <iostream>
#include <cmath>

int main() {
    float a, b, c;
    float D, sqrt1, sqrt2, real_root, imaginary_root;

    std::cout<<"Enter the coefficient of a: ";
    std::cin>>a;
    std::cout<<"Enter the coefficient of b: ";
    std::cin>>b;
    std::cout<<"Enter the coefficient of c: ";
    std::cin>>c;

    if(a!=0) {
    D= b*b-4*a*c;

    if(D>0) {                                       
        sqrt1=(-b+sqrt(D))/(2*a);
        sqrt2=(-b-sqrt(D))/(2*a);
        std::cout<<"The roots are real and distinct.\n";
        std::cout<<"Root 1 ="<<sqrt1<<"\n";
        std::cout<<"Root 2 ="<<sqrt2<<"\n";
    }
    else if(D==0) {
        sqrt1=-b/(2*a);
        std::cout<<"The roots are real and equal.\n";
        std::cout<<"Root ="<<sqrt1<<"\n";
    }
    else {
        real_root=-b/(2*a);
        imaginary_root=sqrt(-D)/(2*a);
        std::cout<<"The roots are imaginary or complex. \n";
        std::cout<<"Root 1 = "<<real_root<<"+"<<imaginary_root<<"i\n";
        std::cout<<"Root 2 ="<<real_root<<"-"<<imaginary_root<<"i\n";
    }
    }
    else {
        std::cout<<"The given equation is not quadratic!";
    }

    return 0;
}
