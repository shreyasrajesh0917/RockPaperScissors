#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

char generatedMove();
string outcome(char myMove, char compMove);

int main()
{
    char move;
    cout << "\n\n\n\t\t\tWelcome to Shreyas's Rock Paper Scissor Game...with a twist.\n";
    cout << "\n\t\tEnter r for Rock, p for Paper, and s for Scissors\n\t\t\t\t\t";
    cin >> move;

    char oppMove = generatedMove();
    string result = outcome(move, oppMove);

    if (result == "draw")
    {
        cout << "\n\t\t\tThis battle ended in a draw.\n";
    }
    else if (result == "win")
    {
        cout << "\n\t\t\tCongratulations! You won the game!\n";
    }
    else
    {
        int deadIn, randomChar;
        cout << "\n\t\t\tUh oh! You lost. Get ready...\n"; // add the "twist" part, sort of like the gulag.
        cout << "\n\n\n\t\t\tOK! You're in the afterlife now. Enter either 1, 2, or 3. Your choice decides your fate.\n";
        cin >> deadIn;
        move = (rand() % 3) + 1;
        if (deadIn == randomChar)
        {
            cout << "\n\t\t\tNo way! You have succeeded and beat the computer.\n";
        }
        else cout << "\n\t\t\tSorry. You're still dead.\n";
    }
        string myTransMove, oppTransMove;
        if (move == 'r')
        {
            myTransMove = "Rock";
        }
        else if (move == 'p')
        {
            myTransMove = "Paper";
        }
        else
            myTransMove = "Scissors";

        if (oppMove == 'r')
        {
            oppTransMove = "Rock";
        }
        else if (oppMove == 'p')
        {
            oppTransMove = "Paper";
        }
        else oppTransMove = "Scissors";

        cout << "\t\t\tYour Move: " << myTransMove << endl;
        cout << "\t\t\tComputer's Move: " << oppTransMove << endl;

        return 0;
    }

    char generatedMove()
    {
        int move;
        srand(time(NULL));
        move = (rand() % 3) + 1; // generate numbers 1, 2, and 3

        if (move == 1)
        {
            return 'r';
        }
        if (move == 2)
        {
            return 'p';
        }
        return 's';
    }

    string outcome(char myMove, char compMove)
    {
        if (myMove == compMove)
        {
            return "draw";
        }
        if (myMove == 'r' && compMove == 'p')
        {
            return "lose";
        }
        if (myMove == 'r' && compMove == 's')
        {
            return "win";
        }
        if (myMove == 'p' && compMove == 'r')
        {
            return "win";
        }
        if (myMove == 'p' && compMove == 's')
        {
            return "lose";
        }
        if (myMove == 's' && compMove == 'r')
        {
            return "lose";
        }
        if (myMove == 's' && compMove == 'p')
        {
            return "win";
        }
        return 0;
    }