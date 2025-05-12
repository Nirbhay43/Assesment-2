#include <iostream>
#include <cstdlib>  // For rand(), srand()
#include <ctime>    // For time()

using namespace std;

class RPSGame {
public:
    void playGame() {
        string name;
        int rounds;

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter number of rounds: ";
        cin >> rounds;

        srand(time(0)); // Seed random number

        for (int i = 1; i <= rounds; i++) {
            int userChoice, compChoice;

            cout << "\nThis is Round " << i << endl;
            cout << "1. Rock\n2. Paper\n3. Scissors\nChoose (1-3): ";
            cin >> userChoice;

            compChoice = (rand() % 3) + 1;

            cout << "Computer chose: " << compChoice << endl;

            if (userChoice == compChoice) {
                cout << "Result: Draw\n";
            } else if ((userChoice == 1 && compChoice == 3) ||
                       (userChoice == 2 && compChoice == 1) ||
                       (userChoice == 3 && compChoice == 2)) {
                cout << "Result: " << name << " wins!\n";
            } else {
                cout << "Result: Computer wins!\n";
            }
        }
    }
};

int main() {
    RPSGame game;    // Create object
    game.playGame(); // Call method
    return 0;
}

