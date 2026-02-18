//Program to calculate area and perimeter of a rectangle.
#include<iostream>

class Rectangle{
    float length;
	float width;
    
    public:
    void inputDimensions(){
        std::cout<<"\nEnter length of rectangle: ";
        std::cin>>length;
        std::cout<<"\nEnter width of rectangle: ";
        std::cin>>width;
    }
 	float calculateArea(){
        std::cout<<"Area of rectangle: "<<length*width; 
        return 0;
    }
    float calculatePerimeter(){
        std::cout<<"\nPerimeter of rectangle: "<<2*(length+width);
        return 0;
    }
    void displayResult(){
        calculateArea();
        calculatePerimeter();
    }
};
int main(){
    Rectangle r1;
    r1.inputDimensions();
    r1.displayResult();
    return 0;
}
