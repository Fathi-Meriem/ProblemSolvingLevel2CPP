// 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
enum Type { CapitalLetter = 1, SmallLetter = 2, Caracter = 3, Number = 4 };
int ReadNumber(string message) {
	cout << message;
	int N;
	cin >> N;
	return N;
}
int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}

char GetRandumCharacter(Type x) {

	switch (x) {
	case CapitalLetter:
		return Random(65, 90);
		break;
	case SmallLetter:
		return Random(97, 122);
		break;
	case Caracter:
		return Random(33, 47);
		break;
	case Number:
		return Random(48, 57);
		break;
	}

}

string GenerateWord(int length, Type c) {
	string Word = "";
	for (int i = 0; i < length; i++) {
		Word = Word + char(GetRandumCharacter(c));
	}
	return Word;
}

string GenerateKey() {
	string key = "";
	key = key + GenerateWord(4, CapitalLetter) + "-";
	key = key + GenerateWord(4, CapitalLetter) + "-";
	key = key + GenerateWord(4, CapitalLetter) + "-";
	key = key + GenerateWord(4, CapitalLetter);
	return key;
}
void FillAraay(string arr[], int L) {
	for (int i = 0; i < L; i++) {
		arr[i] = GenerateKey();
	}
}
void GenerateKeys(string arr[],int L) {
	for (int i = 0; i < L; i++) {
		cout << "Array[" << i << "]:" << arr[i] << endl;
	}

}

int main() {
	int N = ReadNumber("how much keys do you need\n");
	string arr[100];
	FillAraay(arr, N);
	GenerateKeys(arr,N);
	system("pause");
}


