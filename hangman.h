#include <iostream>

void full();
void full() {
    // Drawing the entire hangman structure with the man on top
    
    // Hangman structure
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
            // Drawing the 'hangman'
            // Drawing the face using asterisks
            if (x == 2 | x == 4) {
                if (k == 51) {
                    for (int x{}; x < 4; x++) {
                        std::cout << '*';
                    }
                }
            }
        if (x == 3) {
            if (k == 51) {
                std::cout << '*';
                std::cout << ' ';
                std::cout << ' ';
                std::cout << '*';
            }
        }
        if (x == 5) {
            if (k == 53) {
                std::cout << '|';
            }
        }
    }  
    // Drawing the body 
    while (x >= 2) {
        std::cout << ' ';
        break;
    }
    std::cout << '|' << std::endl;
    x++;
    }
  // Drawing the arms
  for (int k{0}; k <= 53; k++) {
    if (k == 52) {
      std::cout << '-';
      std::cout << '-';
      std::cout << '|';
      std::cout << '-';
      std::cout << '-';
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
        std::cout << '|';
      }
      else {
        std::cout << ' ';
      }
  }
  // Drawing the legs
  for (int k{0}; k <= 70; k++) {
      if (k == 67) {
        std::cout << '-';
        std::cout << '-';
      }
      if (k == 68) {
        std::cout << '-';
        std::cout << '-';
      }
      else {
        std::cout << ' ';
      }
  }
  std::cout << ' ' << std::endl;
}

// Future functions do the same thing, but lack certain parts of the hangman
// Functions are called after incorrect guesses 
// Function without legs
void wLegs();
void wLegs() {
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
      if (x == 2 | x == 4) {
        if (k == 51) {
          for (int x{}; x < 4; x++) {
            std::cout << '*';
          }
        }
      }
      if (x == 3) {
        if (k == 51) {
          std::cout << '*';
          std::cout << ' ';
          std::cout << ' ';
          std::cout << '*';
        }
      }
      if (x == 5) {
        if (k == 53) {
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
      std::cout << '-';
      std::cout << '-';
      std::cout << '|';
      std::cout << '-';
      std::cout << '-';
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
        std::cout << '|';
      }
      else {
        std::cout << ' ';
      }
  }
  std::cout << ' ' << std::endl;
}

// Function without legs and arms 
void wLegsArms();
void wLegsArms() {
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
      if (x == 2 | x == 4) {
        if (k == 51) {
          for (int x{}; x < 4; x++) {
            std::cout << '*';
          }
        }
      }
      if (x == 3) {
        if (k == 51) {
          std::cout << '*';
          std::cout << ' ';
          std::cout << ' ';
          std::cout << '*';
        }
      }
      if (x == 5) {
        if (k == 53) {
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
      std::cout << '|';
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
        std::cout << '|';
      }
      else {
        std::cout << ' ';
      }
  }
}

// Function without legs, arms, and body
void wLegsArmsBody();
void wLegsArmsBody() {
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
      if (x == 2 | x == 4) {
        if (k == 51) {
          for (int x{}; x < 4; x++) {
            std::cout << '*';
          }
        }
      }
      if (x == 3) {
        if (k == 51) {
          std::cout << '*';
          std::cout << ' ';
          std::cout << ' ';
          std::cout << '*';
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
}

void nothing();
void nothing() {
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
}