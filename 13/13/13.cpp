// 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int N;
    do {
        cout << message << endl;
        cin >> N;
    } while (N < 0);
    return N;
}



void PrintNumberPattern(int N) {

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

}


int main()
{
    int N = ReadNumber("please enter a number: \n");
    PrintNumberPattern(N);
    system("pause");
}




