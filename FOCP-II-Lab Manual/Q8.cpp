//
#include <iostream>

int main() {
    int N, choice;

    std::cout<<"Enter value of N: ";
    std::cin>>N;

    std::cout<<"Choose Method\n";
    std::cout<<"1. Using && operator\n";
    std::cout<<"2. Using nested ifs\n";
    std::cout<<"3. Using switch cases\n";
    std::cout<<"Enter your choice: ";
    std::cin>>choice;

   switch (choice){
    case 1: {
        for(int i=1;i<=N;i++){
            if(i%3==0 && i%5==0){
                std::cout<<"Buzz Fuzz\n";
            }
            else if(i%3==0){
                std::cout<<"Buzz\n";
            }
            else if(i%5==0){
                std::cout<<"Fuzz\n";
            }
            else{
                std::cout<<"No tag:"<<i<<"\n";
            }}
        break;
        }
    case 2: {
        for(int i=1;i<=N;i++){
            if(i%3==0){
                if(i%5==0){
                    std::cout<<"Buzz Fuzz\n";
                }
                else{
                    std::cout<<"Buzz\n";
                }
            }
            else if(i%5==0){
                std::cout<<"Fuzz\n";
            }
            else{
                std::cout<<"No tag:"<<i<<"\n";
            }}
        break;    
        }  
    case 3: {
        for(int i=1;i<=N;i++){
            switch((i%3==0)*3 + (i%5==0)*5){
                case 3:
                    std::cout<<"Buzz\n";
                    break;
                case 5:
                    std::cout<<"Fuzz\n";  
                    break;
                case 8:
                    std::cout<<"Buzz Fuzz\n";
                    break;
                default:
                    std::cout<<"No tag:"<<i<<"\n";         
            }}
        break;    
        } 
    default:
        std::cout<<"Invalid Choice!";    
               
   }

    return 0;
}
