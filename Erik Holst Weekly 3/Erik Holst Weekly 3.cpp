#include <iostream>
#include <stdlib.h>
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()
int highscore(30);

int randint(int max_size) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int anumber{0};
	switch (max_size){
		case 1:
			anumber = rand() % 5 + 1;
			break;
		case 2:
			anumber = rand() % 10 + 1;
			break;
		case 3:
			anumber = rand() % 30 + 1;
			break;
	}
	return anumber;
}
void play(int difficulty)
{
	int guess;
	bool win = false;
	int ran_num = randint(difficulty);
	int tries{ 0 };
	while (true) {

		std::cout << ran_num;
		std::cin >> guess;
		tries++;
		if (guess == ran_num) {
			break;
		}
		else if (guess > ran_num)
			std::cout << "Guess lower\n";
		else if (guess < ran_num)
			std::cout << "Guess higher\n";
	}
	
	std::cout << "You guessed correctly in" << tries << "tries\n";


}

int main()
{
	std::cout << "***Welcome to Guess a number by Erik Holst***" << '\n' << std::endl;
	std::cout << "Please choose a difficulty" << std::endl;

	std::cout << "[1] Easy\n[2] Medium\n[3] Hard" << std::endl;
	while (true)
	{
		int x;
		std::cin >> x;
		system("cls");
		play(x);
	}
	
	return 0;
}
