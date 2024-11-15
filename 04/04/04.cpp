// 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	return N;
}

bool CheckPerfectNumber(int N) {
	int S = 0;
	int R;
	for (int i = 1; i < N; i++) {
		if (N % i == 0) {
			S = S + i;
		}
	}
	if (S == N) {
		return true;
	}
	else return false;
}

void PrintPerfectNumber(int N) {
	for (int i = 1; i <= N; i++) {
		if (CheckPerfectNumber(i)) {
			cout << i << endl;
		}
	}
}
	


int main() {
	int N = ReadNumber(" Please enter your number: \n");
	PrintPerfectNumber(N);
	system("pause");
	return 0;
}




