#include <iostream>
#include <string>

int main() {

	int score = 0;

	std::string answer1;
	std::string answer2;
	std::string answer3;
	std::string answer4;
	std::string answer5;
	std::string answer6;
	std::string answer7;
	std::string answer8;
	std::string answer9;
	std::string answer10;
	std::string answer11;
	std::string answer12;
	std::string answer13;
	std::string answer14;
	std::string answer15;
	std::string answer16;
	std::string answer17;
	std::string answer18;
	std::string answer19;
	std::string answer20;
	std::string answer21;
	std::string answer22;
	std::string answer23;
	std::string answer24;
	std::string answer25;

	std::cout << "This former NFL wide receiver was born in Rand, WV, played college football at Marshall, was drafted number 21 overall in the 1998 NFL draft by the Vikings, and also played for the Oakland Raiders, New England Patriots, Tennessee Titans, and San Fransico 49ers.\n";
	std::getline(std::cin, answer1);
	if (answer1 == "Randy Moss" || answer1 == "randy moss" || answer1 == "Randy" || answer1 == "Moss") {
		score += 1;
		std::cout << "You answered " << answer1 << ".\n";
		std::cout << "Randy Moss is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer was Randy Moss.\n";
	}

}
