#include <iostream>
#include "hangman.h"

int main() {
  char response{};
  std::cout << "This is a game of hangman. Guess different letters to win." << std::endl;
  char hangman[7] = {'h', 'a', 'n', 'g', 'm', 'a', 'n'};
  char guessed_letters[4] = {};
  std::cout << "You have 5 attempts to guess the letters correctly." << std::endl;
  char letter{};
  int lives{4};
  bool isThere = {false};
  // Asking for inputs to check
  for (int x{}; x <= 53; x++) {
    std::cout << ' ';
  }
  for (int x{}; x < 7; x++){
    std::cout << '_';
  }
  std::cout << std::endl;
  int x{};
  while (x < 6) {
    for (int k{0}; k < 60; k++) {
      std::cout << ' ';
      if (x < 2) {
        if (k == 52) {
          std::cout << '|';
        }
      }
    }
    while (x >= 2) {
      std::cout << ' ';
      break;
    }
    std::cout << '|' << std::endl;
    x++;
  }
  
  for (int k{0}; k <= 53; k++) {
    if (k == 52) {
      std::cout << ' ';
      std::cout << ' ';
      std::cout << ' ';
      std::cout << ' ';
      std::cout << ' ';
    }
    else {
    std::cout << ' ';
    }
  }
  for (int k{0}; k <= 7; k++) {
    std::cout << '_';
  }
  for (int k{0}; k <= 64; k++) {
      if (k == 61) {
        std::cout << ' ';
      }
      else {
        std::cout << ' ';
      }
  }
  std::cout << ' ' << std::endl;
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
      if (letter == hangman[y]) {
        isThere = true;
        std::cout << "Correct, guess again" << std::endl;
        break;
      }
    }
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