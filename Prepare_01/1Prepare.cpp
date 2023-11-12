#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    
    srand(static_cast<unsigned int>(time(nullptr)));

    
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    bool hasGuessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a random number between 1 and 100. Try to guess it.\n";

    while (!hasGuessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low. Try again.\n";
        }
        else if (guess > secretNumber) 
        {
            cout << "Too high. Try again.\n";
        }
        else 
        {
            hasGuessedCorrectly = true;
           cout << "Congratulations! You've guessed the correct number, which is " << secretNumber << ".\n";
            cout << "It took you " << attempts << " attempts.\n";
        }
    }
    system("pause");
    return 0;
}
