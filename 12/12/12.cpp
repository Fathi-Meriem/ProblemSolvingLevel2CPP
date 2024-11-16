// 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

//void  PrintInvertedNumberPattern(int N) {
//    int k = N;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N-i; j++) {
//            cout << k;
//        }
//        cout << endl;
//        k = k - 1;
//    }
//}

// Second methode

void  PrintInvertedNumberPattern(int N) {

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i;j++) {
            cout << i;
        }
        cout << endl;
    }

}


int main()
{
    int N = ReadNumber("please enter a number: \n");
    PrintInvertedNumberPattern(N);
    system("pause");
}

