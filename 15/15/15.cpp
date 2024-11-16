// 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintTraingleOfLetters(int N) {
     for(int i=65;i<=64+N;i++){
         for (int j = 65; j<=i ; j++) {
             cout << char(i);
         }
         cout << endl;

    }

}



int main()
{
    int N = ReadNumber("Please enter a number: \n");
    PrintTraingleOfLetters(N);
    system("pause");
}




