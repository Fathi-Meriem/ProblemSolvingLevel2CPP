

#include <iostream>
using namespace std;
int ReadNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	return N;
}

bool CheckPerfectNumber(int N) {
	int S=0;
	int R;
	for (int i = 1; i < N; i++) {
		if (N % i == 0) {
			S = S + i;
		}
	}
	cout << "The sum is: " << S << endl;
	if (S == N) {
		return true;
	}
	else return false;
}

void PrintPerfectNumber(int N) {
		if (CheckPerfectNumber(N)) {
			cout << "It's a perfect number" << endl;
		}
		else 	cout << "It's not a perfect number" << endl;
	}


int main() {
	int N = ReadNumber("Please enter your number: \n");
	PrintPerfectNumber(N);
}
