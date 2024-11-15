//
//

#include <iostream>
#include<string>
using namespace std;
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}

void PrintNumbers() {
    int R;
    int N = ReadNumber("Please enter a number \n");
    for (int i = 0; i < 4; i++) {
        R = N % 10;
        N = N / 10;
        cout << R << endl;
    }
}

int main() {
    PrintNumbers();
    system("pause");
}











