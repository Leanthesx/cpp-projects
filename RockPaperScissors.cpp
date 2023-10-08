#include "iostream"

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;

void choose_winner(char user_choice, int computer)
{

    char computer_choice;
    
    if(computer == 1 ) {computer_choice = ROCK;}
    else if(computer == 2) {computer_choice = PAPER;}
    else {computer_choice = SCISSORS;}


    cout << "Your choice is: " << user_choice << ", " << "Computer's choice is: " << computer_choice << endl; 
    if(user_choice == ROCK && computer_choice == PAPER)
    {
        cout << "Computer Wins, Paper wraps Rock.";
    }
    else if(user_choice == ROCK && computer_choice == SCISSORS)
    {
         cout << "You Win, Rock smashes Scissors.";
    }
    else if(user_choice == PAPER && computer_choice == ROCK)
    {
        cout << "You Win, Paper wraps Rock.";
    }
    else if(user_choice == PAPER && computer_choice == SCISSORS)
    {
        cout << "Computer Wins, Scissors cut Paper.";
    }
    else if(user_choice == SCISSORS && computer_choice == PAPER)
    {
        cout << "You Win, Scissors cut Paper.";
    }
    else if(user_choice == SCISSORS && computer_choice == ROCK)
    {
        cout << "Computer Wins, Rock smashes Scissors.";
    }
    else
    {
        cout << "Tie !";
    }
}



int main(int argc, char* argv[])
{

    int random_number = rand() % 3 + 1;
    char selection;

    cout << "Please select a choice" << endl << "Rock(r), Paper(p), Scissors(s) : ";
    cin >> selection;

    choose_winner(selection,random_number);
    return 0;
}
