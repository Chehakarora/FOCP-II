//
#include<iostream>
int fact(int n){
    if(n<=0)
    return 0;
    if(n==1)//n<=1
    return 1;
    return n*fact(n-1);
}
int main(){
    std::cout<<fact(0);
}