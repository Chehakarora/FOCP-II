#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed random number generator
    srand(time(0));

    string name;

    cout << "===== Student Excuse Generator =====" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    // Handle empty name input
    if(name.empty())
    {
        vector<string> emptyRoasts =
        {
            "No name? Suspicious behavior detected.",
            "Bro forgot their own identity ",
            "You entered nothing... just like your assignment file.",
            "Anonymous student detected. Probably avoiding deadlines.",
            "Even the AI expected at least one character."
        };

        int randomIndex = rand() % emptyRoasts.size();

        cout << "\n" << emptyRoasts[randomIndex] << endl;

        return 0;
    }

    // Funny welcome message
    cout << "\nWelcome, " << name
         << "! Preparing your emergency academic excuse now \n";

    // Store excuse templates
    vector<string> excuses =
    {
        "{name} couldn't finish the assignment because the laptop updated for 5 hours.",
        "{name} was about to submit the homework when the Wi-Fi disappeared.",
        "{name} tried completing the work, but the keyboard stopped working.",
        "{name}'s dog accidentally sat on the delete key.",
        "The assignment was ready, but {name}'s computer suddenly restarted.",
        "{name} spent more time understanding the question than solving it.",
        "{name}'s brain stopped responding after opening the assignment.",
        "{name} was emotionally preparing to start the homework.",
        "{name} accidentally closed the file without saving it.",
        "{name} was fighting for survival against 47 browser tabs."
    };

    // Generate random excuse
    int randomIndex = rand() % excuses.size();

    string excuse = excuses[randomIndex];

    // Replace {name} with actual user name
    size_t pos = excuse.find("{name}");

    if(pos != string::npos)
    {
        excuse.replace(pos, 6, name);
    }


    cout << excuse << endl;

    return 0;
}