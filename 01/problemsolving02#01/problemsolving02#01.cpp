// problemsolving02#01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




void PrintHeader() {
    cout << "\n\t\t\t Multiplication Table From 1 to 10\t\n\n";
    for (int i = 1; i <= 10; i++) {
        cout << "\t" << i;
    }
    cout << "\n----------------------------------------------------------------------------------\n";

}
string Separator(int j) {
    if (j == 10) {
        return "  |  ";

    }
    else {
        return "   |  ";
    }


}
void MultiplicationTable() {
 
    for (int j = 1; j <= 10; j++) {
        cout << " " << j << Separator(j);

        for (int i = 1; i <= 10; i++) {
            int k = i * j;

            cout << k << "\t";

        }
            cout << endl;
        }
    } 

void PrintMultiplicationTable() {
    PrintHeader();
    MultiplicationTable();

}

 


int main()
{
    PrintMultiplicationTable();
   

    
}

