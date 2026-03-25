#include<iostream>

int sum (int x){
    if(x==1)
    return 1;
    else
    return x+sum(x-1);
}

int main(){
    int n=8;
    std::cout<<sum(n);
    return 0;
}