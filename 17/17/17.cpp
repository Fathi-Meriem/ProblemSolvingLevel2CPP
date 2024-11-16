// 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

string ReadPassword(string message) {
    string password;
    cout << message << endl;
    cin >> password;
    return password;

}

int FindPassword(string password) {
    int c = 1;
    string word = "";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                string word = "";
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                cout << "trial[" << c << "]: " << word << endl;
                if (password == word) {
                    return c;
                    break;

                }
                else c++;
            }

        }


    }

}
void PrintResult(int c) {
    cout << "Found after " << c << " Trial(s)\n";
}

int main()
{
    string password = ReadPassword("please enter your password");
    PrintResult(FindPassword(password));
    system("pause");
}

