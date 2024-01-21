#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
    public:
        string name;
        string choice;
        int score;
        Player(string name) {
            this->name = name;
            this->score = 0;
        }
        void choose() {
            cout << this->name << ", please choose rock, paper, or scissors: ";
            cin >> this->choice;
        }
};

class Game {
    public:
        Player* player1;
        Player* player2;
        Game(Player* player1, Player* player2) {
            this->player1 = player1;
            this->player2 = player2;
        }
        void play() {
            this->player1->choose();
            this->player2->choose();
            if (this->player1->choice == this->player2->choice) {
                cout << "It's a tie!" << endl;
            } else if (this->player1->choice == "rock" && this->player2->choice == "scissors" ||
                       this->player1->choice == "paper" && this->player2->choice == "rock" ||
                       this->player1->choice == "scissors" && this->player2->choice == "paper") {
                cout << this->player1->name << " wins!" << endl;
                this->player1->score++;
            } else {
                cout << this->player2->name << " wins!" << endl;
                this->player2->score++;
            }
        }
};

int main() {
    srand(time(NULL));
    Player* player1 = new Player("Player 1");
    Player* player2 = new Player("Player 2");
    Game* game = new Game(player1, player2);
    int rounds;
    cout << "How many rounds would you like to play? ";
    cin >> rounds;
    for (int i = 0; i < rounds; i++) {
        cout << "Round " << i + 1 << endl;
        game->play();
    }
    cout << "Final score:" << endl;
    cout << player1->name << ": " << player1->score << endl;
    cout << player2->name << ": " << player2->score << endl;
    if (player1->score > player2->score) {
        cout << player1->name << " wins the game!" << endl;
    } else if (player2->score > player1->score) {
        cout << player2->name << " wins the game!" << endl;
    } else {
        cout << "The game is a tie!" << endl;
    }
    delete player1;
    delete player2;
    delete game;
    return 0;
}
