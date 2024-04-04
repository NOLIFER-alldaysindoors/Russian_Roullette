// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Produced by NOLIFER-alldaysindoors.
//Inlcude me in the code if you use it for whatever means you want to. All I request
#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <chrono>
#include <thread>
#include <map>


int bullet = 0;
int chamber = 0;
bool Admin = true;
int lonely;
int decision = 0;



std::vector<std::string> playerNames;
void suspense() {
    for (int i = 0; i < 3; i++) {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void play() {
    std::cout << "How many players will participate in the game? ";
    int numPlayers;
    std::cin >> numPlayers;
    std::cin.ignore(); // Ignore the newline character

    playerNames.resize(numPlayers);

    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Enter player name " << i + 1 << ": ";
        std::getline(std::cin, playerNames[i]);
        std::string targetName = "Dwayne Johnson";
        auto it = std::find(playerNames.begin(), playerNames.end(), targetName);
        if (it != playerNames.end()) {
                std::cout << "       ⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠈⠈⠉⠉⠈⠈⠈⠉⠉⠉⠉⠉⠉⠉⠉⠙⠻⣄⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⣄⠀⠀⢀⠀⢀⣀⣤⠄⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⣉⣩⣤⠴⠶⠶⠒⠛⠛⠀⠀⠀⠀⠀";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⣴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣧⠤⠶⠒⠚⠋⠉⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⠀⠀⠀⠀⠀⢀⣾⡍⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣫⣭⣷⠶⢶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠶⠶⠖⠚⠛⠛⣹⠏⠀⠀⠀⠀⠀⠀⠀⠀⠴⠛⠛⠉⡁⠀⠀⠙⠻⣿⣷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
                std::cout << "⠀⠀⠀⠀⠀⢠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⡷⠷⢿⣦⣤⣈⡙⢿⣿⢆⣴⣤⡄⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ";
                std::cout << " ⠀⠀⣠⣤⡀⣸⡄⠀⠀⠀⠀⠀⠀⠀⢀⣤⣿⣿⣟⣩⣤⣴⣤⣌⣿⣿⣿⣦⣹⣿⢁⣿⣿⣄⣀⡀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⢠⣿⠋⠻⢿⡁⠀⠀⠀⠀⠀⠀⠀⠀⢸⡿⠿⠛⢦⣽⣿⣿⢻⣿⣿⣿⣿⠋⠁⠘⣿⣿⣿⣿⣿⣿⣼⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⢸⣿⠁⠀⠀⠙⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠒⠿⣿⣯⣼⣿⡿⠟⠃⠀⠀⠀⣿⣿⣿⣿⣿⡛⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
                std::cout << " ⠀⢸⣧⣴⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣺⠟⠃⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣿⢁⣀⣀⣀⣀⣀⣠⣀⣀⢀⢀⢀";
                std::cout << " ⠀⠀⢿⠿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠙⠛⠛⠙⢻⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⣿⣿⡇⠀⠘⠃⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⡟⢿⣿⣆⠀⣸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢄⡼⠁⢀⣀⡀⠀⠀⠀⣦⣄⠀⣠⡄⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⣷⣬⢻⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣧⣰⣿⡿⠿⠦⢤⣴⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⣿⣿⣸⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠛⠒⣿⣿⣿⡿⠟⠹⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⣿⠸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡖⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⡿⣾⣿⣸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣆⣀⣀⣤⣴⣶⣶⣾⣿⣷⣦⣴⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⡇⣿⣿⡛⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢾⡟⠛⠛⠻⠛⠛⠛⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⠓⢁⣬⣿⠇⠀⠀⠀⠀⠀⢠⡀⠀⠀⠀⠀⠀⢰⡿⣻⠇⠀⠀⠀⠀⠀⣠⣶⣶⣶⣶⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⢐⣯⠞⠁⠀⠀⠀⠀⠀⠀⣄⠱⣄⠀⠀⠀⠀⠸⡧⠟⠆⠀⠀⠀⠀⠘⠿⢿⠿⠿⣿⡿⣿⠃⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⡾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠘⢦⡈⠂⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢠⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⡄⠀⠀⠑⠄⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣦⣦⣼⡏⠳⣜⢿⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⢠⣷⣦⣤⣀⣀⣀⣴⣿⣿⣿⣿⣿⡿⠻⠆⠸⣎⣧⠀⠈⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
                std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⣠⡄⠀⣿⢹⡇⢸⡀⠀⠈⠻⢿⣿⣿⣿⣿⣿⣿";
        }

    }
}


void displayPlayerNames() {
    std::cout << "Player names:\n";
    for (const auto& name : playerNames) {
        std::cout << name << std::endl;
    }
    std::cout << std::endl;
}

void Grel() {
    // Create a random number generator engine
    std::random_device rd;
    std::mt19937 gen(rd());

    // Create a uniform distribution for the desired range; 6 shots
    std::uniform_int_distribution<int> distribution(1, 6);

    // puts bullet in random chamber
    bullet = distribution(gen);
}
void swap() {
    chamber++;
    if (bullet == chamber) {
        std::cout << playerNames.front() << " is dead." << std::endl;
        playerNames.erase(playerNames.begin());
        chamber = 0;
        Grel();
    }
    else {
        std::cout << "You survived this time." << std::endl;
    }

}
void stress() {
    std::cout << "Squeezing trigger";
    suspense();
    swap();
}

void Choice() {
    char kill;
    std::cout << "Yourself? (yes/no): ";
    std::cin >> kill;
    if (kill == 'y' || kill == 'Y') {
        stress();
      
    }
    else if (kill == 'n' || kill == 'N') {
        std::string target;
        displayPlayerNames();
        std::cout << "Enter the name of the player you want to shoot: ";
        std::cin.ignore();
        std::getline(std::cin, target);

        auto it = std::find(playerNames.begin(), playerNames.end(), target);
        if (it != playerNames.end()) {
            chamber++;
            if (bullet == chamber) {
                std::cout << target << " is dead." << std::endl;
                playerNames.erase(it);
            }
            else {
                std::cout << "Nothing fired, now you must shoot yourself.\n" << std::endl;
                std::cout << "Pull the trigger";
                std::cin.ignore(); // Wait for Enter key
                swap();
            }
        }
        else {
            std::cout << "Player not found." << std::endl;
        }
    }
}
class Enemy {
protected:
    std::string name;
public:
    Enemy(const std::string& name) : name(name) {}
    virtual bool makeDecision(int bullet, int chamber) = 0; // Pure virtual function for decision-making
};
class RandomJoe : public Enemy {
public:
    RandomJoe() : Enemy("Random Joe") {} // Default constructor without parameters

    bool makeDecision(int bullet, int chamber) override {
        srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
        return (rand() % 2) == 0; // Randomly choose between true and false (shoot or not)
    }
}; void single() {
    std::string name;
    playerNames.resize(2);
    std::cout << "Who will you play against?\n";
    std::cout << "[1] Random Joe\n";
    std::cout << "[2] Experienced Player\n";
    std::cout << "[3] One of the Assilants\n";
    int enemy;
    std::cin >> enemy;
    std::map<int, std::string> enemyNames = {
        {1, "Random Joe"},
        {2, "Experienced Player"},
        {3, "One of the Assailants"} // Add more names as needed
    };
    Enemy* fighter = nullptr;

    switch (enemy) {
    case 1:
        fighter = new RandomJoe(); // Use the parameterized constructor
        break;
    case 2:
        std::cout << "WIP";
        // fighter = new ExperiencedPlayer("Experienced Player");
        break;
    case 3:
        std::cout << "WIP";
        // fighter = new Assailant("One of the Assailants");
        break;
    }
    playerNames[0] = "You";
    playerNames[1] = enemyNames[enemy];
}
void Settings() {
    bool start = true;
    if (!start) {
        std::cout << "You and a few others have been kidnapped by unknown assilants.\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "You have been given a chance to be set free, so they tell you.\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "All you have to do, is play their game.\n";
        std::this_thread::sleep_for(std::chrono::seconds(3));
        std::cout << "A game of";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        suspense();
        start = true;
    }
    std::cout << "\nRUSSIAN ROULETTE\n";
    std::cout << "Single player[1] or Mutiplayer?[2]\n";

    std::cin >> lonely;
    if (lonely == 2) {
        play();
    }
    else if (lonely == 1) {
        single();
    }
    else {
        std::cout << "You get shot for not picking a option in time\n";
    }
}

int main() {
    Enemy* fighter{};
    Settings();
    std::cout << "Are you ready to watch people die?";
        while (playerNames.size() != 1) {
            Grel();
            std::cin.ignore(); // Wait for Enter key

            while (bullet != chamber && playerNames.size() != 1) {
                for (int i = 0; i < playerNames.size(); ++i) {
                    const auto& name = playerNames[i];
                    std::cout << "It's " << name << "'s turn." << std::endl;
                    if (lonely == 2) {
                        Choice();
                    }
                    else {
                        if (name == "You") {
                            Choice();
                        }
                        else {
                            bool shootSelf = fighter->makeDecision(bullet, chamber);
                            if (shootSelf) {
                                stress();
                            }

                            else {
                                std::string target;
                                // ... code for choosing another player to shoot ...
                            }
                        }

                    }
                    // testing \/
                    if (Admin) {
                        std::cout << "bullet location " << bullet << std::endl;
                        std::cout << "chamber location " << chamber << std::endl;
                        std::cout << "players left " << playerNames.size() << std::endl;
                        std::cout << "Bot's choice " << decision << std::endl;

                    }
                }
            }
        }

        std::cout << "Congrats! " << playerNames.front() << " Survied!\n";
    
   
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "But";
        suspense();
        std::cout << "They lied, and now want you to try again! Or, would you rather just take the bullet now?\n";
        std::cout << "Play again?\n";
        char again;
        std::cin >> again;
        if (again == 'Y' || again == 'y') {
            main();
        }
        else {
            std::cout << "G";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "o";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "o";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "d";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "b";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "y";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "e";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << " ";
            std::cout << "c";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "r";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "u";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "e";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "l";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << " ";
            std::cout << "w";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "o";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "r";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "l";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
            std::cout << "d";
            std::this_thread::sleep_for(std::chrono::milliseconds(800));
        }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

