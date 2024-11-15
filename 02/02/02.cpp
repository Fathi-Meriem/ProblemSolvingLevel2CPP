#include <iostream>
using namespace std;

int ReadNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	return N;
}
 
bool CheckPrimeNumber(int N) {
	for (int i = 2; i <= N / 2; i++) {
		if (N % i == 0) {
			return false;
		}
		else return true;
	}
}
void PrintPrimeNumber(int N){
	for (int i = 1; i <= N; i++) {
		if (CheckPrimeNumber(i)) {
			cout<< i <<endl;
		}
	}

}

int main() {
	int N = ReadNumber("Please enter your number: \n");
	PrintPrimeNumber(N);
}