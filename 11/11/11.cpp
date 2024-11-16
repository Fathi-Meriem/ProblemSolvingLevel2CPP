

#include <iostream>
using namespace std;
int ReadNumber(string message){
    int N;
    do {
        cout << message << endl;
        cin >> N;
    } while (N < 0);
    return N;
    }

int ReverseNumber(int N) {
    int N2 = 0, R;
   
    while (N > 0) {
        R = N % 10;
        N = N / 10;
        N2 = N2 *10+ R;
    }
    return N2;
}
bool CheckPalindromeNumber(int N) {
    int N2 = ReverseNumber(N);
    if (N == N2)
        return true;
    else return false;
}

void PrintResult(int N) {
    if (CheckPalindromeNumber(N))
        cout << "The number is palindrome";
    else 
        cout << "The number is not palindrome";

}

int main()
{
    int N = ReadNumber("Please enter the number to check: \n");
    PrintResult(N);
    
}

