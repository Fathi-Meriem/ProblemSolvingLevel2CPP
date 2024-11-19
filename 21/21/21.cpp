// 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

string GenerateWord(int length,Type c) {
    string Word = "";
    for (int i = 0; i < length; i++) {
        Word = Word + char(GetRandumCharacter(c));
    }
    return Word;
}

string GenerateKey() {
	string key = "";
	key = key + GenerateWord(4,CapitalLetter)+"-";
	key = key + GenerateWord(4, CapitalLetter)+"-";
	key = key + GenerateWord(4, CapitalLetter)+"-";
	key = key + GenerateWord(4, CapitalLetter);
	return key;
}

void GenerateKeys(int N) {
	for (int i = 0; i < N; i++) {
		cout << "key[" << i << "]:" << GenerateKey()<<endl;
	}

}

int main() {
	int N = ReadNumber("how much keys do you need\n");
	GenerateKeys(N);
	system("pause");
}









































//void GenerateKey(int N) {
//    for (int i = 0; i < N; i++) {
//        cout << "Key[" << i << "]:" << GenerateString() << "-" << GenerateString() << "-" << GenerateString() << "-" << GenerateString()<<endl;
//    }
//}
//
//
//
//
//int main()
//{
//    int N = ReadNumber("How much Keys do you need \n");
//    GenerateKey(N);
//    system("pause");
//}

