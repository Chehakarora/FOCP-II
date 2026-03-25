//Program to calculate area and perimeter of a rectangle.
#include<iostream>

class Rectangle{
    float length;
	float width;
    
    public:
    void inputDimensions();
    float calculateArea();
    float calculatePerimeter();
    void displayResult();
    Rectangle(); //default
    Rectangle(float); //parameterized constructor
    Rectangle(float, float); //parameterized constructor
   
};
 void Rectangle::inputDimensions(){
        std::cout<<"\nEnter length of rectangle: ";
        std::cin>>length;
        std::cout<<"\nEnter width of rectangle: ";
        std::cin>>width;
    }
float Rectangle::calculateArea(){
        std::cout<<"\nArea of rectangle: "<<length*width; 
        return 0;
    }
float Rectangle::calculatePerimeter(){
        std::cout<<"\nPerimeter of rectangle: "<<2*(length+width);
        return 0;
    }
void Rectangle::displayResult(){
        calculateArea();
        calculatePerimeter();
    }
Rectangle::Rectangle(){
    length=width=0;
}   
Rectangle::Rectangle(float n){
    length=width=n;
}
Rectangle::Rectangle(float l, float w){
    length=l, width=w;
}
int main(){
    Rectangle r1, r2(10.5), r3(10.67,30.90);
    r1.displayResult();
    r2.displayResult();
    r3.displayResult();
    return 0;
}
