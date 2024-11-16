// 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintWordsFromAAAtoZZZ() {
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k<=90; k++) {
                cout << char(i);
                cout << char(j);
                cout << char(k)<<"\n";

            }
            
        }
        
    }

}
int main()
{
    PrintWordsFromAAAtoZZZ();
    return 0;
}