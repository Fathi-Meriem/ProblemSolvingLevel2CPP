// Second-Project-Math-Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
enum levels { Easy = 1, Med = 2, Hard = 3, MixLevel = 4 };
enum operations { Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5};
struct FinalResults {
	short NumberOfQuestions;
	levels QuestionLevel;
	operations OpType;
	short NumberOfRA=0;
	short NumberOfWA=0;
};
struct OperationResult {
	int NumberOfQuestions;
	int NumberOfQuestion;
	int A;
	int B;
	operations op;
	int Result;
	
};
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int Operands(levels level) {
	int N=0;
	switch (level) {
	case Easy:
		N = RandomNumber(1, 9);
		break;
	case Med:
		N = RandomNumber(10, 30);
		break;
	case Hard:
		N = RandomNumber(30,90 );
		break;
	case MixLevel:
		 level=levels(RandomNumber(1,3));
		 N=Operands(level);
		break;	
	}
	return N;
}
string ConvertLevelsToString(levels level) {
	string arr[4] = { "Easy","Medium","Hard","Mix" };
	return arr[level - 1];
}
int Operations(int A,int B, operations &x) {

	switch (x) {
	case Add:
		return A + B;
		break;
	case Sub:
		return A- B;
		break;
	case Mul:
		return A * B;
		break;
	case Div:
		return A / B;
		break;
	}
}
string ConvertOperationsToString(operations op) {
	string arr[5] = { "Add","Sub","Mul","Div","Mix"};
	return arr[op - 1];
}
char OperationSymbol(operations op) {
	switch (op) {
	case Add:
		return '+';
	case Sub:
		return '-';
	case Mul:
		return '*';
	case Div:
		return '/';
	}
}
int NumberOfQuestions() {
	int N;
	cout << "How many Questions do you want to answer?  ";
	cin >> N;
	return N;
}
levels ReadLevelGame() {
	int N;
	do {
		cout << "Enter Questions Level:  [1] Easy, [2] Med, [3] Hard, [4] Mix?  ";
		cin >> N;
	} while (N<1 || N>4);
	return levels(N);
}
operations ReadOperationsType() {
	int N;
	do {
		cout << "Enter Operation Type:  [1] Add, [2] Sub, [3] Mul, [4] Div ,[5] Mix: ";
		cin >> N;
	} while (N<1 || N>5);
	return operations(N);
}
char ConvertFromOperationsToChar(operations op){
	char arr[4] = { '+','-','*','/' };
	return arr[op - 1];

}
int ReadOperationResult() {
	int N;
	cin >> N;
	return N;
}
void ShowOperationResult(OperationResult operation){
	cout << "Question [ " << operation.NumberOfQuestion <<"/"<<operation.NumberOfQuestions << " ]\n";
	cout << operation.A<<endl;
	cout << operation.B << " " << ConvertFromOperationsToChar(operation.op)<<endl;
	cout << "_______________\n";
}
void ScreenColor(bool result) {
	if (result) {
		system("color 2F"); //turn screen to Green
	}
	else {
		system("color 4F"); //turn screen to Red
		
	}
}
bool CompareResults(OperationResult operation, int Result,FinalResults &results ) {
	bool result= (Result == operation.Result);
	if (result) {
		cout << "Correct answer :)\n";
		results.NumberOfRA++;
	}
	else {
		cout << "\a";
		cout << "Bad answer :( \n";
		cout << "The right answer is: " << Result<<endl;
		results.NumberOfWA++;
	}
	return result;
			
}
void ShowFinalResult(FinalResults x) {
	cout << "____________________________________\n\n";
	if (x.NumberOfRA>=x.NumberOfWA) {
		cout << "Final Result is Pass :)\n";
		ScreenColor(1);
	}
	else {
		cout << "Final Result is Fail :(\n";
		ScreenColor(0);
	}
	cout << "____________________________________\n";
	cout << "Number of Questions:" << x.NumberOfQuestions << endl;
	cout << "Questions Level:" << ConvertLevelsToString( x.QuestionLevel) << endl;
	if(x.OpType==Mix)
	      cout << "Op.Type:" << ConvertOperationsToString(x.OpType)<<endl;
	else
		cout << "Op.Type:" << ConvertFromOperationsToChar(x.OpType) << endl;

	cout << "Number of right Answers is: " << x.NumberOfRA<<endl;
	cout << "Number of wrong Answers is: " << x.NumberOfWA<<endl;
	cout << "____________________________________\n";

}
void StartPlayGame() {
	
	FinalResults Results;
	OperationResult operation;
	int N = NumberOfQuestions();
	Results.NumberOfQuestions = N;
	operation.NumberOfQuestions = N;
	Results.QuestionLevel = ReadLevelGame();
	Results.OpType = ReadOperationsType();
	for (int i = 1; i <= N; i++) {
		operation.NumberOfQuestion = i;
		operation.A = Operands(Results.QuestionLevel);
		operation.B = Operands(Results.QuestionLevel);
		operation.op = Results.OpType;
		if (operation.op == Mix) {
			operation.op = operations(RandomNumber(1, 4));
		}
		ShowOperationResult(operation);
		operation.Result = ReadOperationResult();
		int Result = Operations(operation.A, operation.B, operation.op);
		ScreenColor(CompareResults(operation, Result,Results));

	}

	ShowFinalResult(Results);

}
void ResetScreen() {
	system("color 0F");
	system("cls");
}
void StartGame() {
	char PlayGame = 'Y';
	do {  
		ResetScreen();
		StartPlayGame();
		cout << "\n Do you want to play again? \n";
		cin >> PlayGame;
	} while (PlayGame=='y' || PlayGame=='Y');

}
int main()
{
	srand((unsigned)time(NULL));
	StartGame();
}

