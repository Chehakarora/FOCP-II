//Program to swap two functions
#include<iostream>
void SwapByReference(int &a, int &b)
{
    int temp=a;
    a=b; 
    b=temp;
}
void SwapByValue(int a, int b)
{
    int temp=a;
    a=b; 
    b=temp;
}
main(){
    int x,y;
    std::cin>>x>>y;
    SwapByValue(x,y);   
    std::cout<<x<<","<<y<<"\n";
    SwapByReference(x,y);
    std::cout<<x<<","<<y;
    
    return -1;
}
