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

	std::cout << "This former NFL wide receiver was born in Rand, WV, played college football at Marshall, was drafted number 21 overall in the 1998 NFL draft by the Vikings, and also played for the Oakland Raiders, New England Patriots, Tennessee Titans, and San Francisco 49ers.\n";
	std::getline(std::cin, answer1);
	if (answer1 == "Randy Moss" || answer1 == "randy moss" || answer1 == "Randy" || answer1 == "Moss") {
		score += 1;
		std::cout << "You answered " << answer1 << ".\n";
		std::cout << "Randy Moss is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer was Randy Moss.\n";
	}

	std::cout << "This former Michigan Wolverine was overlooked in the 1999 NFL draft and was not selected until the 6th round. He went on to win 7 Super Bowls in his 21 season tenure.\n";
	std::getline(std::cin, answer2);
	if (answer2 == "Tom Brady" || answer2 == "Brady" || answer2 == "The Goat" || answer2 == "TB12") {
		score += 1;
		std::cout << "You answered " << answer2 << ".\n";
		std::cout << "Tom Brady is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer is Tom Brady.\n";
	}

	std::cout << "This NFL player, born in Castle Rock, CO played college football at Stanford and was drafted by the Carolina Panthers in the 2017 NFL Draft.\n";
	std::getline(std::cin, answer3);
	if (answer3 == "Christian McCaffrey" || answer3 == "CMC" || answer3 == "Christian Mccaffrey" || answer3 == "christian mccaffrey") {
		score += 1;
		std::cout << "You answered " << answer3 << ".\n";
		std::cout << "CMC is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer is Christian McCaffrey.\n";
	}

	std::cout << "This former Seattle Mariner played right field, had a rocket for an arm, and had seasons with 30+ stolen bases.\n";
	std::getline(std::cin, answer4);
	if (answer4 == "Ichiro" || answer4 == "Ichiro Suzuki" || answer4 == "ichiro" || answer4 == "ichiro suzuki") {
		score += 1;
		std::cout << "You answered " << answer4 << ".\n";
		std::cout << "Ichiro is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer is Ichiro Suzuki.\n";
	}

	std::cout << "This person is a well known former NFL center who played 13 seasons for the Eagles and won a Super Bowl with them. He's known for his electric personality and dominance on the offensive line.\n";
	std::getline(std::cin, answer5);
	if (answer5 == "Jason Kelce" || answer5 == "jason kelce" || answer5 == "kelce") {
		score += 1;
		std::cout << "You answered " << answer5 << ".\n";
		std::cout << "Jason Kelce is correct!\n";
	}
	else {
		std::cout << "Incorrect. The correct answer is Jason Kelce.\n";
	}

	std::cout << "Your total score is: " << score << " out of 5.\n\n";

}
