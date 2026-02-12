//Recursive Explosion
#include<iostream>
int mystery(int n){
    if(n<0)
    return 0;
    return n+mystery(n-1);
}
int main(){
    std::cout<<mystery(5);
}
