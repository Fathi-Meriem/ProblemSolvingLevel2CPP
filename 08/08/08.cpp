// 08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}

char ReadDigit(string message) {
    char D;
    cout << message;
    cin >> D;
    return D;
}


int CheckFrequency() {
    int R, c = 0;
    int N = ReadNumber("Please enter a number \n");
    char D = ReadDigit("Please enter the digit: \n");
    while (N > 0) {
        R = N % 10;
        N = N / 10;
        if (R == D)
            c++;

    }
    return c;
}

void PrintResult() {
    int c = CheckFrequency();
    cout << "The number of frequency is: " << c << endl;

}

int main() {
    PrintResult();
    system("pause");
}






