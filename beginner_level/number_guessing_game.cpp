#include <iostream>
#include <cstdlib> // for rand() and srand()
using namespace std;

void playGame() {
    // seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1; // random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Guess the chosen number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment attempts
        attempts++;

        // Check the guess
        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {
    char playAgain;

    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}