#include <iostream>
#include <string>
using namespace std;

// functions
// get user choice
//create computer choice
// compare and get winner
//in main keep score 


void PrintIntro()
{
    std::cout << "Welcome to Rock Paper Scissors press X to quit otherwise type your choice \n";
    
}

int GetUserChoice()
{
    string UserChoice;
    std::cin >> UserChoice;
    std::cout << "\n";

//now need to check users choice is one of ROCK PAPER SCISSORS
    int ChoiceNum = validInput(UserChoice);
    return ChoiceNum;

}

int validInput(string inp)
{
    string ValidOpOne = "ROCK";
    string ValidOpTwo = "PAPER";
    string ValidOpThree = "SCISSOTS";
    string Quit ="Q";
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

int getComChoice()
{
    int com = (rand()%3)+1;
}





int main()
{
    PrintIntro();




    return 0;
}




//std::cout << "The current score is:    \n"