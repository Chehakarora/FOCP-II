//program to determine whether a given integer is prime or not
#include<iostream>

bool isPrime(int n){
    if(n<=1)
        return false;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    std::cin>>x;

    if(isPrime(x))
        std::cout<<"Prime";
    else
        std::cout<<"Not Prime";

    return 0;
}
