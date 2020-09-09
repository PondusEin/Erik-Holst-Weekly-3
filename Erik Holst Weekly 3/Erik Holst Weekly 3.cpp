#include <iostream>
#include <stdlib.h>
int highscore(30);


void play(int difficulty)
{





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
