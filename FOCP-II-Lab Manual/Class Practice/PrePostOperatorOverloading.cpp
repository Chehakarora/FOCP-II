#include<iostream>
class Rectangle{
    int width;
    int height;

    public:
    Rectangle(int w=0, int h=0): width(w), height(h) {}
    Rectangle& operator++(){
        ++width;
        ++height;
        return*this;
    }
    Rectangle operator++(int i){
        Rectangle temp=*this;
        ++width;i++;//i incremented just to avoid warning of unsused variable
        ++height;
        return temp;
    }
    void display(){
        std::cout<<"Width: "<<width<<" Height: "<<height<< std::endl;
    }
};
//Rectangle& operator++(Rectangle obj); if created outside class
//Rectangle operator++(Rectangle obj, int i); if created outsisde class

int main(){
    Rectangle rect(5,10);
    std::cout<<"Before Increment: ";
    rect.display();
    //Call the overload prefix increment operator
    ++rect;
    std::cout<<"After Increment: ";
    rect.display();
    Rectangle r2=rect++;
    r2.display();
    rect.display();
    Rectangle r3;
    r3=++rect;
    std::cout<<"Pre Increment: ";
    rect.display();
    r3.display();
    ++rect;
    std::cout<<"\nPost Increment: ";
    r3=rect++;
    r3.display();
    rect.display();
    return 0;
}