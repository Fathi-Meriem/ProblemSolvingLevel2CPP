// 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}


void PrintNumbers(int N) {
    int R = 1, N2 = 0;
    while (N > 0) {
        R = N % 10;
        N = N / 10;
        N2 = N2 * 10 + R;
    }

    while (N2 > 0) {
        R = N2 % 10;
        N2 = N2 / 10;
        cout << R << endl;

    }
}

int main() {
    int N = ReadNumber("Please enter a number:  \n ");
    PrintNumbers(N);
    system("pause");
}


