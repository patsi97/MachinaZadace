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

	int generateCard() {
		int min = 1, max = 10, generatedCard = 0;
		generatedCard = rand() % (max - min + 1) + min;
		return generatedCard;
	}

	int addCard() {
		_sum += generateCard();
		return _sum;
	}
};
std::string whoIsTheWinner(Player playerOne, Player computer)
{
	std::cout << "Computer sum:" << computer._sum << std::endl;
	std::cout << "Your sum:" << playerOne._sum << std::endl;

	if (playerOne._sum <= 21 && computer._sum <= 21) {
		if (playerOne._sum > computer._sum) {
			return playerOne._name + " is a winner!";
			//std::cout << playerOne._name << " is a winner!" << std::endl;
		}
		else if (playerOne._sum < computer._sum)
		{
			return computer._name + "is a winner!";
			//std::cout << computer._name << " is a winner!" << std::endl;
		}
		else {
			return "draw!";
			//std::cout << "draw!" << std::endl;
		}
	}

	else {
		if (playerOne._sum > 21) {
			return computer._name + " is a winner!";
			//std::cout << computer._name << " is a winner!" << std::endl;
		}
		else if (computer._sum > 21)
		{
			return playerOne._name + "is a winner!";
			//std::cout << playerOne._name << " is a winner!" << std::endl;
		}
	}
}

int main() {
	std::string pickCard;
	srand(time(NULL));
	Player playerOne = Player("Korisnik", 0);
	Player computer = Player("Computer", 0);

	std::cout << "Welcome to blackjack!" << std::endl;
	std::cout << "Chose y/n to take a card: ";
	computer.addCard();

	while (playerOne._sum < 21) {

		std::cin >> pickCard;

		if (pickCard == "y") {
			playerOne.addCard();
			
			if (playerOne._sum > 21)
			{
				break;
			}
		}

		else if (pickCard == "n") {			
			break;

		}
		std::cout << "Computer sum:" << computer._sum << std::endl;
		std::cout << "Your sum:" << playerOne._sum << std::endl;
	}
	while (playerOne._sum < 21 && computer._sum < 21) {
		if (computer._sum < 13 || computer._sum<playerOne._sum ) {
			computer.addCard();

		}
		else 
		{
			break;
		}

		std::cout << "Computer sum:" << computer._sum << std::endl;
		std::cout << "Your sum:" << playerOne._sum << std::endl;

	}

	std::cout << whoIsTheWinner(playerOne, computer) << std::endl;

	std::cin.get();
	system("pause");
}