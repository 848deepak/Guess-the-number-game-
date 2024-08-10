#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    int lowerBound = 1;
    int upperBound = 100;
    int numberOfGuesses = 0;
    int guessedNumber;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between lowerBound and upperBound
    int randomNumber = lowerBound + rand() % (upperBound - lowerBound + 1);

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have selected a number between " << lowerBound << " and " << upperBound << "." << endl;
    cout << "Can you guess what it is?" << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guessedNumber;
        numberOfGuesses++;

        if (guessedNumber > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guessedNumber < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << numberOfGuesses << " tries." << endl;
        }
    } while (guessedNumber != randomNumber);

    return 0;
}
