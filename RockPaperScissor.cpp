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
    std::cout << "Welcome to Rock Paper Scissors type QUIT to quit otherwise type your choice when prompted too..\n";
    
}


int ValidInput(string inp)
{
    string ValidOpOne = "ROCK";
    string ValidOpTwo = "PAPER";
    string ValidOpThree = "SCISSORS";
    string Quit ="QUIT";
    if(inp.compare(ValidOpOne)!= 0 && inp.compare(ValidOpTwo)!= 0 && inp.compare(ValidOpThree)!= 0 && inp.compare(Quit)!= 0)
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
    std::cout << "\n";

//now need to check users choice is one of ROCK PAPER SCISSORS
    int ChoiceNum = ValidInput(UserChoice);
    // std::cout << ChoiceNum;
    return ChoiceNum;

}



int GetComChoice()
{
    int com = (rand()%3)+1;
    // std::cout << com;
    return com;
}

int CompareChoice(int UserOp, int ComOpt)
{
    if(UserOp == ComOpt)
        return 0;
    else if((UserOp == 1 && ComOpt == 3) || (UserOp == 2 && ComOpt == 1) || (UserOp == 3 && ComOpt == 2) )
        return 1;
    else
    {
        return 2;
    }
    
}




int main()
{   
    PrintIntro();
    bool Playing = true;
    int UserScore=0;
    int ComScore=0;
    while(Playing)
    {
        std::cout <<"The Current Score is User " << UserScore << " - " << ComScore << " Computer \n";
        std::cout << "Please type your chouce in uppercase\n";
        int User = GetUserChoice();
        if (User == 4)
        {
            Playing = false;
            break;
        }
        
        int Com = GetComChoice();
        int Winner = CompareChoice(User, Com);
        if (Winner == 1)
        {
            UserScore++;
        }
        else if(Winner == 2)
        {
            ComScore++;
        }

        

    }
    return 0;
}




//std::cout << "The current score is:    \n"