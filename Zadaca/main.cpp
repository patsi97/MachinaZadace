#include <iostream>
#define PI 3.14f
#include <string>
#include <ctime>    
#include <cstdlib>

// 1.Zadatak
//Napisati program koji ce uzet unos 2 broja od korisnika te ih podijeliti i ispisati rezultat

/*int main()
{
	int number1, number2;
	float quotient;

	std::cout << "Insert 2 numbers: " << std::endl;
	std::cin >> number1 >> number2;
	quotient = (float)number1 / number2;

	std::cout << "Quotient of 2 numbers " << quotient << std::endl;
	system("pause");
	std::cin.get();
}
*/

// 2. Zadatak
// Napisati program koji uzima unos 2 godine, te ispisuje sve prijestupne godine u tom intervalu.
/*
int main() {
	int firstYear, secondYear;
	float quotient;
	
	std::cout << "Insert 2 years: " << std::endl;
	std::cin >> firstYear >> secondYear;

	if (firstYear < secondYear) {
		for (firstYear; firstYear < secondYear; firstYear++) {
			if (firstYear % 4 == 0) {
				std::cout << firstYear << std::endl;
			}
		}
	}

		if (firstYear > secondYear) {
			for (secondYear; secondYear < firstYear; secondYear++) {
				if (secondYear % 4 == 0) {
					std::cout << secondYear << std::endl;
				}
			}
		}


		system("pause");
		std::cin.get();


	}
	*/

//3. Zadatak
// Napisati program koji trazi unos od korisnika jedan broj, te ispisuje toliko znamenki fiboanaccijevog reda.
/*
int main() {

	int f1 = 0, f2 = 1, nextNumber = 0, number, z1;
	
	std::cout << "Insert number " << std::endl;
	std::cin >> number;
	z1 = number / 10 + number % 10;

	 std::cout << "Fibonacci Series: " << f1 << ", " << f2 << ", ";

	 nextNumber = f1 + f2;

	 while (nextNumber < z1)
	 {
		 std::cout << nextNumber << ", ";
		 f1 = f2;
		 f2 = nextNumber;
		 nextNumber = f1 + f2;
	 }

	system("pause");
	std::cin.get();
}
*/

//4. Zadatak
// Napisati program koji trazi unos od korisnika za radius kruznice, te ispisati povrsinu kruznice

/*int main() {

	int r;
	float povrsina;
	std::cout << "Unesi radijus kružnice: " << std::endl;
	std::cin >> r;

	povrsina = pow(r, 2)*PI;
	std::cout << "Povrsina iznosi: " << povrsina << std::endl;

	system("pause");
	std::cin.get();
}
*/

//1. Napisati program koji prima string od 8 znakova za datum rodenj npr "20.02.93" i ispisuje slijedece :

//Dan rodenja : 20
//Mjesec rodenja : 02
//Godina rodenja : 93

/*int main() {
	 char str[9];
	 std::cout << "Unesi datum u obliku dd.mm.yy: " << std::endl;
	 std::cin.get(str, 9);

	 std::cout << "Dan roðenja: " << str[0] << str[1]<< std::endl;
	 std::cout << "Mjesec roðenja: " << str[3] << str[4] << std::endl;
	 std::cout << "Godina roðenja: " << str[6] << str[7];

	system("pause");
	std::cin.get();

}
*/
//2. Napisati program za hrvatsku lutriju. Korisnik radi unos od 7 brojeva u rasponu od 1-49,
//nakon toga program radi "izvlacenje" tj. radnom generira 7 brojeva od 1-49, 
//te ispisuje korisnikov unos, zatim izvucene brojeve te na kraju koliko pogodataka korisnik ima.
/*int main() {
	int min = 1, max = 49, finalNum=0, counter=0;
	int ourNumbers[7], lotteryNumbers[7];
	srand(time(NULL));

	std::cout << "Insert seven numbers from 1 to 49: " << std::endl;

	for (int i = 0; i < 7; ++i)
	{
		std::cin >> ourNumbers[i];
	}
	std::cout << "Lottery numbers: ";
	for (int j = 0; j < 7; ++j)
	{
		
		finalNum = rand() % (max - min + 1) + min;
		lotteryNumbers[j] = finalNum;
		std::cout << lotteryNumbers[j] << " "  ;
	}
	

	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 7; ++j) {
			
			if (lotteryNumbers[i] == ourNumbers[j])
			{
				
				++counter; 
			}
				
		}
	}

	std::cout << "You guessed: " << counter << " numbers" <<std::endl;

	std::cin.get();
	system("pause");
	
}
*/

//3. Napisati program koji ce dati korisniku da unese jedan broj i ispisati 30 brojeva Fibonacijevog niza, 
//pocevsi od broja koji je korisnik unio.

/*int main() {

	int firstNumber = 0, previuosNumber = 0, ourNumber, nextNumber=0;

	std::cout << "Insert number " << std::endl;
	std::cin >> ourNumber;

	std::cout << "Fibonacci Series: " << previuosNumber << ", " << ourNumber << ", ";

	nextNumber = firstNumber + ourNumber;

	for (int i = 0; i < 30 ; ++i)
	{
		
		firstNumber = previuosNumber;
		previuosNumber = nextNumber;
		nextNumber = firstNumber + previuosNumber;
		std::cout << nextNumber << ", ";
	}
	
	system("pause");
	std::cin.get();
}*/

//4. Napisati program koji ce primiti unos texta i ispisati isti unazad.

//5. Napisati program koji prima unos 3 broja koji ce simulirati kuteve.
//Ispisati korisniku jel moguce da se napravi trokut od tih kuteva.

//6. Napisati program koji prima text i character od strane korisnika, 
//te ispisuje taj text bez tog charactera.

//7. Napisati program koji æe primiti vector brojeva, 
//i ispisati korisniku koji brojevi su parni, a koji neparni