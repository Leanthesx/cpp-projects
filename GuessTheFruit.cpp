#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main(int argc, char* argv[])
{
    srand(time(NULL));
    int random_number = rand() % 6;
    int lives = 3;
    string fruit_list[6] = {"apple","banana","orange","grape", "pear","blueberry"};
    string fruit_name = fruit_list[random_number];
    string user_guess;

    cout << "Guess the fruit name, You have 3 tries!" << endl;
    while(lives > 0)
    {
        cout << "Your guess is ";
        cin >> user_guess;

        if(user_guess == fruit_name)
        {
            cout << "Congratulations, you win!";
            break;
        }
        else
        {
            lives--;
            cout << "Wrong! You have " << lives << " tries" << endl;
        }
    }

    if(lives <= 0)
    {
        cout << "You lose!";
    }

    
    return 0;

}
