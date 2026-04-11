//A registration system rejects usernames that contain spaces or special characters. 
//Program to validate whether a given string can be accepted as a username.
#include <iostream>
#include <string>

int main()
{
    std::string username;
    std::cout << "Enter Your Username : ";
    getline(std::cin, username);
    int check = 0;
    for (int i=0;i<(int)username.length(); i++)
    {
        if ((username[i] < '0' && username[i] > '9' && username[i] < 'a' && username[i] > 'z' && username[i] < 'A' && username[i] > 'Z') || username[i] == ' ')
        {
            std::cout << "This username has special characters, please enter again!";
            check = -1;
            break;
        }
    }
    if (check == 0)
    {
        std::cout << "Username accepted!";
    }

    return 0;
}