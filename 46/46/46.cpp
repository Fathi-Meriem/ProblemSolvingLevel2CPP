// 46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}
int AbsOfNumber(int N) {
    if (N >= 0)
        return N;
    else return N * -1;

}
int main()
{
    int N = ReadNumber("Please enter a number\n");
    int A = AbsOfNumber(N);
    int B = abs(N);
    cout << A << endl;
    cout << B << endl;
    system("pause");
}

