// file for testing my functions to debug my code!!!
#include <iostream>
#include <string>
using namespace std;

void PrintIntro()
{
    std::cout << "Welcome to Rock Paper Scissors press X to quit otherwise type your choice \n";
    
}


int ValidInput(string inp)
{
    string ValidOpOne = "ROCK";
    string ValidOpTwo = "PAPER";
    string ValidOpThree = "SCISSORS";
    string Quit ="QUIT";
    int CompareRock = inp.compare(ValidOpOne);
    int CompareScissors = inp.compare(ValidOpTwo);
    int ComparePaper = inp.compare(ValidOpThree);
    int CompareQuit = inp.compare(Quit);
    std::cout << "\n";
    std::cout << CompareRock;
    // << CompareScissors << ComparePaper << CompareQuit;
    
    if(inp.compare(ValidOpOne)!= 0 || inp.compare(ValidOpTwo)!= 0 || inp.compare(ValidOpThree)!= 0 || inp.compare(Quit)!= 0)
        return 0;
    else
    {
        if (inp.compare(ValidOpOne) == 0)
        {
            return 1;
        }
        else if (inp.compare(ValidOpTwo) == 0)
        {
            return 2;
        }
        else if (inp.compare(Quit) == 0)
        {
            return 4;
        }
        else
        {
            return 3;
        }

    }
    
}





int GetUserChoice()
{
    string UserChoice;
    std::cin >> UserChoice;
    std::cout << UserChoice;
    std::cout << "\n";

//now need to check users choice is one of ROCK PAPER SCISSORS
    int ChoiceNum = ValidInput(UserChoice);
    return ChoiceNum;

}


int main()
{
    PrintIntro();
    bool Playing = true;
    int Choose = GetUserChoice();
    std::cout << Choose;
    //std::cout << Playing;
    return 0;
}