#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// A function to generate a random word of a given length
string generateWord(int length) {
    string word = "";
    for (int i = 0; i < length; i++) {
        char letter = 'a' + rand() % 26; // Random letter from a to z
        word += letter;
    }
    return word;
}

// A function to check if the player's input matches the word
bool checkWord(string word, string input) {
    return word == input;
}

// A function to display the game instructions and start the game
void startGame() {
    cout << "Welcome to the type game!\n";
    cout << "You will see a word on the screen and you have to type it as fast as you can.\n";
    cout << "You will get one point for each correct word and lose one point for each wrong word.\n";
    cout << "The game will end when you type 'quit'.\n";
    cout << "Are you ready? Press any key to start.\n";
    cin.get(); // Wait for the player to press a key

    int score = 0; // The player's score
    int length = 3; // The length of the word
    string word; // The word to type
    string input; // The player's input

    srand(time(NULL)); // Initialize the random seed

    while (true) {
        word = generateWord(length); // Generate a random word
        cout << word << endl; // Display the word
        cin >> input; // Get the player's input
        if (input == "quit") { // If the player wants to quit
            break; // End the loop
        }
        if (checkWord(word, input)) { // If the input matches the word
            cout << "Correct!\n";
            score++; // Increase the score
            length++; // Increase the length
        }
        else { // If the input does not match the word
            cout << "Wrong!\n";
            score--; // Decrease the score
            length = 3; // Reset the length
        }
        cout << "Your score is: " << score << endl; // Display the score
    }
    cout << "Game over. Your final score is: " << score << endl; // Display the final score
}

// The main function
int main() {
    startGame(); // Start the game
    return 0;
}