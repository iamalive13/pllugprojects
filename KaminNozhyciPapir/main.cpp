#include <iostream>
#include <time.h>


using namespace std;

int main(int argc, char *argv[])
{
    int rock, scissors, paper;

    cout << "Welcome to Rock-Scissors-Paper Game" << endl;
    cout << "Chose one: rock, scissors or paper" << endl;
    cout << "Enter 1 for Rock" << endl;
    cout << "Enter 2 for Scissors" << endl;
    cout << "Enter 3 for Paper" << endl;

    int userchoice;
    cin >> userchoice;

    srand(time(NULL));
    int computerchoice;

    computerchoice = rand() % 3 + 1;

    if (computerchoice == 1)
     {
        cout << "Computer chose Rock" << endl;

     }
    else if (computerchoice == 2)
    {
        cout << "Computer chose Scissors" << endl;
    }

    else if (computerchoice==3)
    {
        cout << "Computer chose Paper" << endl;
    }

    if
            ((userchoice == 1) && (computerchoice == 1)||
            (userchoice == 2) && (computerchoice == 2)||
            (userchoice == 3) && (computerchoice == 3))
    {
        cout << "Draw" << endl;
    }
    if
            ((userchoice == 1) && (computerchoice == 2)||
            (userchoice == 2) && (computerchoice == 3)||
            (userchoice == 3) && (computerchoice == 1))
     {
        cout << "You win" << endl;

     }
    if
            ((userchoice == 1) && (computerchoice == 3)||
            (userchoice == 2) && (computerchoice == 1)||
            (userchoice == 3) && (computerchoice == 2))
    {
        cout << "You lose" << endl;

    }

    return 0;


}

