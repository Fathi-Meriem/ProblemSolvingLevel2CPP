// 47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadNumber(string message) {
    float N;
    cout << message;
    cin >> N;
    return N;
}
int RoundOfNumber(float N) {
    if (N >=(int)N+0.5)
        return int(N)+1;
    else return int(N) ;

}
int main()
{
    float N = ReadNumber("Please enter a number\n");
    int A = RoundOfNumber(N);
    int B = round(N);
    cout << A << endl;
    cout << B << endl;
    system("pause");
}

