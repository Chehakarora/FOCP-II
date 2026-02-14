//Program to swap two functions
#include<iostream>
void swap(int *a, int *b)
{
    std::cout<<"A and B before swap in function "<<*a<<","<<*b<<"\n";
    int temp=*a;
    *a=*b; //value at a is assigned the value at b
    *b=temp;
    std::cout<<"A and B after swap in function "<<*a<<","<<*b<<"\n";
}

main(){
    int x,y;
    std::cout<<"Provide 2 integers"<<std::endl;
    std::cin>>x>>y;
    std::cout<<"X and Y in main before function call "<<x<<","<<y<<"\n";
    swap(&x,&y);//calling function
    std::cout<<"X and Y in main after function call "<<x<<","<<y<<"\n";
    return -1;
}
