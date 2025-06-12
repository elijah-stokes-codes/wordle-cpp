#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer = "SANTA";  
    string guess;
    int numGuesses = 0;
    string red = "\033[1;31m";
    string green = "\033[1;32m";
    string yellow = "\033[1;33m";
    string reset = "\033[0m";
   
    while (numGuesses < 6 && guess != answer) {
        cout << "Enter your 5-letter guess: ";
        cin >> guess;
    
        if (guess.length() != 5) {
            cout << "Please enter a 5-letter word." << endl;
            continue;
        }

        int redCount = 0;

        for (int i = 0; i < 5; i++) {
            if (guess[i] == answer[i]) {
                cout << "\033[32m" << guess[i] << " - Green\033[0m" << endl;
            } else if (answer.find(guess[i]) != string::npos) {
                cout << "\033[33m" << guess[i] << " - Yellow\033[0m" << endl;
            } else {
                cout << "\033[31m" << guess[i] << " - Red\033[0m" << endl;
                redCount++;
            }
        }

        if (redCount == 5) {
            cout << "Not even close, brother. Try again!" << endl;
        }
        numGuesses++;  
            if (guess == answer) {
            cout << "\033[32mCongratulations! You guessed the correct word in " << numGuesses << " guesses!\033[0m" << endl;
            cout << "\n🎉 YOU DID IT! 🎉\n";
            cout << "You're a Wordle Wizard! 🧙‍♂️\n";
            cout << "Thanks for playing! 🎊\n";
            return 0;
        } else if (numGuesses == 6) {
            cout << "Sorry, you ran out of guesses. The correct answer was: " << answer << endl;
        }
    }
    return 0;
}
