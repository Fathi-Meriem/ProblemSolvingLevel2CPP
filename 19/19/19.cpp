// 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Random(int From, int To) {
    int N = rand() % (From - To + 1)+From;
    return N;
}

int main()
{
    srand((unsigned)time(NULL));
    int N = Random(10, 5);
    cout << N << endl;
    N = Random(3, 5);
    cout << N << endl;
    N = Random(3, 8);
    cout << N << endl;
    system("pause");
}

