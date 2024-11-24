// 48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadNumber(string message) {
    float N;
    cout << message;
    cin >> N;
    return N;
}
int GetFractionPart(float N) {
    return (N - int(N));
}
float CeilOfNumber(float N) {
    if (abs(GetFractionPart(N)) > 0) {
        if (N > 0)
            return int(N) + 1;
        else return N;
    }
    else return N;

}
int main()
{
    float N = ReadNumber("Please enter a number\n");
    int A = CeilOfNumber(N);
    int B = ceil(N);
    cout << A << endl;
   /* cout << B << endl;*/
    system("pause");
}

