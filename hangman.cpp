#include <iostream>
#include "hangman.h"


// All function definitions and declarations in header file 
int main() {
  char response{};
  // Declaring the game
  std::cout << "This is a game of hangman. Guess different letters to win." << std::endl;
  char hangman[7] = {'h', 'a', 'n', 'g', 'm', 'a', 'n'};
  char guessed_letters[4] = {};
  std::cout << "You have 5 attempts to guess the letters correctly." << std::endl;
  char letter{};
  int lives{4};
  bool isThere = {false};
  // Building the hangman structure and the entire hangman
  full();
  std::cout << ' ' << std::endl;
  // Checking if letters correspond to a given character array with the
  // word 'hangman'. Game terminates after four incorrect guesses
  for (int x{0};; x++) {
    std::cout << "Guess a letter" << std::endl;
    std::cin >> letter;
    isThere = false;
    // Testing to see if it is already there and removing repetition
    for (int y{}; y < 7; y++) {
      if (letter == guessed_letters[y]) {
        std::cout << "You already guessed this. Try again" << std::endl;
        isThere = true;
        break;
      }
      if (letter >= 65 && letter <= 90) {
        std::cout << "Type in a lowercase letter, not capital" << std::endl;
        isThere = true;
        break;
      }
      // Testing for correct and incorrect inputs 
      if (letter == hangman[y]) {
        isThere = true;
        std::cout << "Correct, guess again" << std::endl;
        break;
      }
    }
    // Consequences for incorrect inputs, as other functions are called
    if (isThere == false) {
      std::cout << "Incorrect, guess again" << std::endl;
      lives = lives - 1;
      if (lives == 3) {
          wLegs();
      } 
      if (lives == 2) {
          wLegsArms();
      }
      if (lives == 1) {
          wLegsArmsBody();
      }
      if (lives == 0) {
          nothing();
      }
    }
    guessed_letters[x] = letter; 
    if (lives == 0) {
      std::cout << "You lost, game terminated.";
      break;
    }    
  }
  
  return 0;
}