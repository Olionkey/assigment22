#include <iostream>
#include <string>
#include <array>

using namespace std;

int getUserChoice();
int getComputerChoice();
void determinWinner(int userChoice, int computerChoice);
bool validateChoice (int choice);
string numToString(int num);

int computerWinnings, playerWinnings, games, choice = 2;

/*
    Store the win states in an 2d array with the win states, so instead of having a screen full of logic states, I can just pull from a matrix of who would be winner.
    0 = draw
    1 = User wins
    2 = computer wins
*/
int gameState[3][3] = {{0,2,1},
                       {1,0,2},
                       {2,1,0}};

int main()
{
    int userChoice, computerChoice;
    bool run = true;
    do
    {
        /* get play choices */
        userChoice = getUserChoice();
        if (userChoice == 4)
        {
            cout << "Thanks for playing!" << endl;
            cout << "The computer has won " << computerWinnings << " games." << endl;
            cout << "The user has won " << playerWinnings << " games." << endl;
            cout << "In " << games << " games";
            return 0;
        }
        computerChoice = getComputerChoice();

        /* Print out what was chosen. */
        cout << "You selected: " << numToString(userChoice) << "." << endl;
        cout << "The computer has selected: " << numToString(computerChoice) << "." <<  endl;
        determinWinner(userChoice, computerChoice);
    } while (run);

    return 0;
}

int getUserChoice(){
    do {
        if (choice < 1 || choice > 4)
            cout << "Sorry but that is a valid choice please try again" << endl;
        cout << "Game Menu" << endl
             << "---------" << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cout << "4) Quit" << endl;
        cout << "Enter your choice (1-4)";
        cin >> choice;
    } while ( choice < 1 || choice > 4);

    return choice;
}

int getComputerChoice (){
    return rand() % 3 + 1;
}


string numToString(int num){
    //num = num;
    // The breaks are unnedded due to the nature of how return's work.
    switch (num) {
        case 1:
            return "Rock";
        break;
        case 2:
            return "Paper";
        break;
        case 3:
            return "Scissors";
        break;
    }
    return "-1";
}

void determinWinner(int playerChoice, int computerChoice){
    int endState = gameState[playerChoice-1][computerChoice-1]; // do this so only have to call the array once. 
    if (endState == 0){
        cout << "Tie. No Winner" << endl;
    } else if (endState == 1) {
        cout << "YOU win" << endl;
        playerWinnings++;
    } else {
        cout << "YOU loose" << endl;
        computerWinnings++;
    }
    games ++;
}