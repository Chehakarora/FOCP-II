//
#include<iostream>
void counter(){
    static int count=0;
    count++;
    std::cout<<count<<" ";
}
int main(){
    for(int i=0;i<4;i++)
    counter();
}