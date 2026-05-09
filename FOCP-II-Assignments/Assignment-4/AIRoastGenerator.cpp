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

    cout << "===== AI Roast Generator =====" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    // Handle empty name input
    if(name.empty())
    {
        vector<string> emptyRoasts =
        {
            "No name? Wow. Even your keyboard gave up on you.",
            "Bro forgot their own name ",
            "Anonymous user detected... suspicious.",
            "You left the name blank just like your assignment file.",
            "No input? Confidence level = 0.",
            "Even the AI expected at least ONE character.",
            "You're hiding your name like it's your browser history.",
            "Name not found. Personality probably missing too.",
            "You had ONE job... type your name.",
            "The Enter key worked harder than you did."
        };

        int randomIndex = rand() % emptyRoasts.size();

        cout << "\n" << emptyRoasts[randomIndex] << endl;

        return 0;
    }

    // Sarcastic welcome message
    cout << "\nWelcome, " << name
         << "! Let's see how badly this AI destroys your confidence \n";

    // Store roast templates
    vector<string> roasts =
    {
        "{name} codes like the computer owes them marks.",
        "{name}'s typing speed is slower than a turtle.",
        "{name} and bugs are best friends.",
        "Even Google gets confused by {name}'s code.",
        "{name}'s code works accidentally.",
        "{name} debugs by praying.",
        "{name} writes code that scares compilers.",
        "NASA still cannot understand {name}'s variable names.",
        "{name}'s laptop deserves compensation.",
        "{name} turns simple problems into group projects."
    };

    // Generate random roast
    int randomIndex = rand() % roasts.size();

    string roast = roasts[randomIndex];

    // Replace {name} with actual name
    size_t pos = roast.find("{name}");

    if(pos != string::npos)
    {
        roast.replace(pos, 6, name);
    }

    cout << roast << endl;

    return 0;
}