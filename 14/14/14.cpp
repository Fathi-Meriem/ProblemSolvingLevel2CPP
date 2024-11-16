// 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 using namespace std;
 int ReadPositiveNumber(string Message)
 {
     int Number = 0;
     do
     {
         cout << Message << endl;
         cin >> Number;
     } while (Number <= 0);
     return Number;
 }

void PrintInvertedLetterPattern(int N) {
    for (int i = 64 + N; i >= 65; i--) {
        for (int j = 65; j <= i; j++) {
            cout << char(i);
        }
        cout << endl;

    }

}

// Second method
//for (int i = 65 + N - 1; i >= 65; i--) {
//    for(int j=1;j<=N-(65+N-1-i);j++)
//}

int main() {
    PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number ? "));
        return 0;



}
