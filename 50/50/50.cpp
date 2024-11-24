// 50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadNumber(string message) {
    float N;
    cout << message;
    cin >> N;
    return N;
}
int SqrtOfNumber(float N) {
    return pow(N, 0.5);
}
int main()
{
    float N = ReadNumber("Please enter a number\n");
    int A = SqrtOfNumber(N);
    int B = round(N);
    cout << A << endl;
    cout << B << endl;
    system("pause");
}

