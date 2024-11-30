// FirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <string>;
using namespace std;
void StartGame();
void RestartGame();
enum choice{stone=1,papper=2,scissors=3};
enum winner{computer=1,player=2,both=3 };
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0 || Number>3);
	return Number;
}
int ReadPlayerChoice() {
	int M;
	M = ReadPositiveNumber("what's your choice: [1] stone: [2] papper: [3] scissors: ");
	return(M);
}
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int ComputerChoice() {
	int N = RandomNumber(1, 3);
	return N;
}
winner CompareResults(int P,int C) {
	choice playerChoice = choice(P);
	choice computerChoice = choice(C);
	if (playerChoice == computerChoice) {
		system("color 6F");
		return both; 
	}
	// Player wins: stone beats scissors, paper beats stone, scissors beats paper
	if ((playerChoice == stone && computerChoice == scissors) ||
		(playerChoice == papper && computerChoice == stone) ||
		(playerChoice == scissors && computerChoice == papper)) {
		system("color 2F");
		return player;
	}
	system("color 4F");
	return computer;
}
string Choices(int choice) {
	switch (choice) {
	case stone: return "stone";
	case papper: return "paper";
	case scissors: return "scissors";
	default: return "unknown";
	}
}
void ShowResults(int C, int P,int &c,int &p,int&b) {

	cout << "Player choice:" << Choices(P)<<endl;
	cout << "Computer choice:" << Choices(C) << endl;
	winner w = CompareResults(P, C);
	switch (w) {
	case computer:
		cout << "Round Winner: computer" << endl;
		c++;
		break;
	case player:
		cout << "Round Winner: player" << endl;
		p++;
		break;
	case both:
		cout << "Round Winner: both" << endl;
		b++;
		break;

	}
	
}
int Compare3Numbers(int a,int b,int c) {
	if (a > b && a >> c)
		return a;
	else if (b > a && b > c)
		return b;
	else return c;

}
void EndGame(int N,int c,int p,int b) {
	cout << "\n\n\n";
	cout << "\t----------------------------------------------------\n";
	cout << "\t" << "                 +++ Game Over +++           " << "\t\n";
	cout << "\t----------------------------------------------------\n";
	cout << "\t" << "___________________Game Results_________________" << "\t\n";
	cout << "\t Game Rounds: " << N<<endl;
	cout << "\t Player won: " << p << " times\n";
	cout << "\t Computer won: " << c << " times\n";
	cout << " \t Draw times: " << b << " times\n";
	cout << " \t Final winner: ";
	
}
void  RestartGame() {
	int  R;
	cout << "Do you want to play again: Y:1 / N:0? \n";
	cin >> R;
	if (R) {
		system("color 0F");
		system("cls");
		StartGame();
	}
	else cout << "Hope that you enjoyed\n";
}
void StartGame() {
	int N = ReadPositiveNumber("How many rounds you want to play \n");
	int C, P, c = 0, p = 0, b = 0;
	for (int i = 1; i <= N; i++) {
		cout << "Rounds[" << i << "] begins: \n";
		P = ReadPlayerChoice();
		C = ComputerChoice();
		cout << "____________Round[" << i << "]____________________\n";
		ShowResults(C, P, c, p, b);
		cout << "-----------------------------------------------\n";
	}
	int BigNumber=Compare3Numbers(c, p, b);
	if (BigNumber == c) {
		EndGame(N, c, p, b);
		cout << "computer\n";
	}
	 else if(BigNumber == p) {
		EndGame(N, c, p, b);
		cout << "player\n";		
	}
	if (BigNumber == b) {
		EndGame(N, c, p, b);
		cout << "both\n";
	}
	cout << "\t-----------------------------------------------\n";
	RestartGame();
 }



int main()
{
	srand((unsigned)time(NULL));
	StartGame();
	system("pause");


	
   
}


