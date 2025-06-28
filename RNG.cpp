#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
	srand(time(0));
	
	int randNo = 1 + (rand() % 100);
	int in = 0;
	int chances = 0;
	int attempts = 0;
	std::string diff;
	bool found = false;
	std::cout << "Welcome to the Number Guessing Game! \n"
		"I'm thinking of a number between 1 and 100.\n"
		"You have 5 chances to guess the correct number.\n\n"
		"Please select the difficulty level:\n"
		"1. Easy (10 chances)\n"
		"2. Medium (5 chances)\n"
		"3. Hard (3 chances)\n\n"
		"Enter your choice: ";
	
	while (in < 1 || in > 3) {
		std::cin >> in;
		
	switch (in) {
		case 1:
			diff = "Easy";
			chances = 10;
			break;
		case 2:
			diff = "Normal";
			chances = 5;
			break;
		case 3:
			diff = "Hard";
			chances = 3;
			break;
		default:
			std::cout << "Please choose from the following number (1-3):";
		}	
	}

		
	std::cout << "Great! You have selected the " << diff << " difficulty level.\n"
		"Let's start the game!\n";
		
	for (attempts; attempts < chances; attempts++) {
		std::cout << "Enter your guess: "; 
		std::cin >> in;
		std::cout << "\n";
		if (in == randNo) {
			found = true;
			break;
		} else if (in < randNo) {
			std::cout << "Incorrect! The number is greater than " << in << ".\n";
		} else if (in > randNo) {
			std::cout << "Incorrect! The number is less than " << in << ".\n";
		}
	}
	
	if (!found) {
				std::cout << "Game over, you didn't found my random number...";
	} else {
		std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.";
	}
		
	return 0;
}
