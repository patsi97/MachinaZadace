#include <iostream>
#include <string>
#include <ctime>

class Player
{

public:
	Player(std::string name, int sum) {
		_name = name;
		_sum = sum;
	}
	std::string _name;
	int _sum;

};
int generateCard() {
	int min = 1, max = 10, generatedCard = 0;
	generatedCard = rand() % (max - min + 1) + min;
	return generatedCard;
}

int addCard(int sum, int generatedCard) {
	sum += generatedCard;
	return sum;
}

int main() {
	std::string pickCard;
	srand(time(NULL));
	Player playerOne = Player("Korisnik", 0);
	Player computer = Player("Computer", 0);
	
	std::cout << "Welcome to blackjack!" << std::endl;
	std::cout << "Chose y/n to take a card: ";

	while (playerOne._sum < 21 && computer._sum < 21) {
		
		std::cin >> pickCard;

		if (pickCard == "y") {
			playerOne._sum = addCard(playerOne._sum, generateCard());
			std::cout << "Your sum:" << playerOne._sum << std::endl;
			
		}

		else if (pickCard == "n") {
			
			computer._sum = addCard(computer._sum, generateCard());
			std::cout << "Computer sum:" << computer._sum << std::endl;
			std::cout << "Your sum:" << playerOne._sum << std::endl;

			if ((computer._sum > playerOne._sum && computer._sum >= 13 && computer._sum <= 21)) {
				break;
			}
			
		}

	}

	if (playerOne._sum <= 21 && computer._sum <= 21) {
		if (playerOne._sum > computer._sum) {
			std::cout << playerOne._name << " is a winner!" << std::endl;
		}
		else if(playerOne._sum < computer._sum)
		{
			std::cout << computer._name << " is a winner!" << std::endl;
		}
		else {
			std::cout <<  "draw!" << std::endl;
		}
	}

	else {
		if (playerOne._sum > 21) {
			std::cout << computer._name << " is a winner!" << std::endl;
		}
		else if (computer._sum > 21)
		{
			std::cout << playerOne._name << " is a winner!" << std::endl;
		}
	}
	
	std::cin.get();
	system("pause");
}