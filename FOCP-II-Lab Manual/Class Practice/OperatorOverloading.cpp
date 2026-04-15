#include<iostream>

class Rectangle{
    int width; int length;
    public:
    Rectangle(int w=0, int l=0): width(w), length(l){}
    void display(){
        std::cout<<"width: "<<width<<" Length: "<<length<<std::endl;
    }
    Rectangle operator-(Rectangle obj2){
        Rectangle temp;
        temp.width=width-obj2.width;
        temp.length=length-obj2.length;
        return temp;
    }
    friend Rectangle operator+(int val, Rectangle obj);
};

 Rectangle operator+(int val, Rectangle obj){
        Rectangle temp;
        temp.width=obj.width+val;
        temp.length=obj.length+val;
        return temp;
}

int main(){
    Rectangle r1(5,10),r2(67,90);
    Rectangle r3=r1.operator-(8); //r1-r2;
    r1.display();
    r2.display();
    r3.display();
    r3=9+r1;
    r3.display();
    return 0;

}