//Program to display all prime numbers between two limits.
#include<iostream>
int main(){
    int l, h;
    std::cout<<"Enter the lowest value of the range: ";
    std::cin>>l;
    std::cout<<"Enter the highest value of the range: ";
    std::cin>>h;

    for(int i=l;i<=h;i++){
        if(i%2!=0){
            std::cout<<i<<"\n";
        }
     }
        return 0;
}