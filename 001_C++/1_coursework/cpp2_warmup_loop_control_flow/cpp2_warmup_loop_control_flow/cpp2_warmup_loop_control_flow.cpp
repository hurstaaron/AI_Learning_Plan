/* Practicing control flow statements and determining when to use them.
Decision Tree:
Do I know how many times I am iterating?
  YES -> For loop
  Ex: Deal cards to 5 players
  NO  -> while or do-while loop

Do I need the body to run at least once, guaranteed?
  YES -> do-while loop
  Ex: Show a menu, theck if they user wants to quit
  NO  -> while loop
  Ex: Keep asking the user for inputs
*/

// ===== HEADER FILES =====
#include <iostream>
#include <string>

// ===== FUNCTION PROTOTYPES =====
void pickGame();
void dealCards(int cards);

int main() {
    // ----- Declare Local Variables -----
    char hitMe;
    

    // ----- Call Functions -----
    pickGame(); // Start the game

    std::cout << "\n\n";
    int totalCards{ 0 };
    while (totalCards < 5) {
        std::cout << totalCards << "\n";
        totalCards++;
    }

    
}

// ===== FUNCTION DEFINITIONS =====
/* This function is the menu of card games the user can play
*  The user is asked what game they want to play, and based on
*  their decsion, a number of cards will be passed to pick game.
*/
void pickGame(){
    bool playAgain { false };
    int choice{ 0 };
    do {
        // user will choose a game to play
        std::cout << "Which card game would you like to play?(Select 1 - 3)\n"
            << "  1) Texas Holdem?\n"
            << "  2) Stud?\n"
            << "  3) Omaha Poker? ";
        // collect user choice
        std::cin >> choice;
        if (choice == 1){
            dealCards(2);
            playAgain = false;
        }
        else if (choice == 2) {
            dealCards(5);
            playAgain = false;
        } 
        else if (choice == 3){
            dealCards(4);
            playAgain = false;
        }
        else {
            std::cout << "You must select a number between 1 and 3.\n";
            playAgain = true;
        }
    } while (playAgain);
}

/* This function is going to deal a number of cards based on 
*  the game selected from pickGame(), which passes an argument
*  to the function
*/
void dealCards(int cards) {
    int cardsDealt{ cards };
    std::cout << "\n\nYou have been dealt: " << cards << " cards.\n";
    for (int i{ 0 }; i <= 5; i++){ 
            cardsDealt++;
            std::cout << "You now have " << cardsDealt << " cards.\n";  
       
    }
    std::cout << "Your total cards are: " << cardsDealt;
}




