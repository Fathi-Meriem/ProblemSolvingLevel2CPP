// 07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long long int ReadNumber(string message) {
    long long int N;
    cout << message;
    cin >> N;
    return N;
}

void PrintNumbers() {
    long long int  R;
    long long int N = ReadNumber("Please enter a number \n");
    long long int N2 = 0;
    while (N > 0) {
        R = N % 10;
        N = N / 10;
        N2 = N2 * 10 + R;

    }
    cout << N2 << endl;
}

int main() {
    PrintNumbers();
    system("pause");
}



