#include <iostream>
#include <stdlib.h>
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()
int highscore(30);

int randint(int max_size) {

}
void play(int difficulty)
{

	int anumber{ rand() % 30 + 1 };
	int rand_1 = rand() % 5 + 1;
	int rand_2 = rand() % 10 + 1;
	int rand_3 = rand() % 30 + 1;


	
	
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

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
