//Program to compare scores of three players to find who is ahead
#include <iostream>

int main() {
    int score1, score2, score3, choice;
    std::cout<<"Enter the score of Player 1: ";
    std::cin>>score1;
    std::cout<<"Enter the score of Player 2: ";
    std::cin>>score2;
    std::cout<<"Enter the score of Player 3: ";
    std::cin>>score3;
    std::cout<<"1.Calculate using && operator\n";
    std::cout<<"2.Calculate without using && operator\n";
    std::cout<<"Enter your choice: ";
    std::cin>>choice;
    switch(choice){
    case 1:{
        if(score1>score2 && score1>score3){
          std::cout<<"Player 1 is the winner";
          }
        else if(score2>score1 && score2>score3){
          std::cout<<"Player 2 is the winner";
          }
        else if(score3>score1 && score3>score2){
          std::cout<<"Player 3 is the winner";
          }
        else if(score1==score2 && score1>score3) {
          std::cout<<"Player 1 and Player 2 have drawn the match";
          }
        else if(score1==score3 && score1>score2) {
          std::cout<<"Player 1 and Player 3 have drawn the match";
          }
        else if(score2==score3 && score2>score1) {
          std::cout<<"Player 2 and Player 3 have drawn the match";
          }
        else {
          std::cout<<"The match is a draw between all the three players";
          }    
        break;
        }
    case 2:{
        if(score1>score2){
            if(score1>score3){
                std::cout<<"Player 1 is the winner";
            }
            else if(score1<score3){
                std::cout<<"Player 3 is the winner";
            }   
            else{
                std::cout<<"Player 1 and Player 3 have drawn the match ";
            } 
         }
        else if(score1<score2){
             if(score2>score3){
                std::cout<<"Player 2 is the winner";
            }
             else if(score2<score3){
                std::cout<<"Player 3 is the winner";
            }   
             else{
            std::cout<<"Player 2 and Player 3 have drawn the match";
            } 
         }
        else {
            if(score1>score3){
                std::cout<<"Player 1 and Player 2 have drawn the match";
            }
            else if(score1<score3){
                std::cout<<"Player 3 is the winner";
            }
            else{
                std::cout<<"The match is a draw between all the three players";
            }
         }
        }
        break;
        
    default: {
        std::cout<<"Invalid choice";
    }
}      
    
return 0;
}