// 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// first method 
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}
int SumOfRemainders() {
    int R;
    int S = 0;
    int N = ReadNumber("Please enter a number \n");
    for (int i = 0; i < 4; i++) {
        R = N % 10;
        N = N / 10;
        S = R + S;

    }
    return S;
}

void PrintResult() {
    int S = SumOfRemainders();
    cout << "The sum of remainders of \"1234\" is:  " << S << endl;
}

int main() {
    PrintResult();
    system("pause");
}
   
// Second method
//string ReadNumber(string message) {
//    string N;
//    cout << message;
//    cin >> N;
//    return N;
//}
//
// int Length(string N) {
//    int c = 0;
//    for (int i = 0; N[i] != '\0'; i++) {
//            c++;
//          }
//    return c;
//}
//
// void ReverseNumber(string& N, int L) {
//     string Temp;
//     Temp = N;
//     for (int i = 0; i < L/2; i++) {
//             N[i] = N[L - i - 1];
//         }
//     for (int i = 0; i < L/2;i++) {
//         N[L-i-1] = Temp[i];
//
//     }
//        
//
//     }
// 
//     void PrintResult(string N) {
//         int L = Length(N);
//         
//         ReverseNumber(N, L);
//         for (int i = 0; i < L; i++){
//             cout << N[i] ;
//
//     }
//         cout<< endl;
// }
//int main()
//{
//    string N = ReadNumber("Enter a number \n");
//    PrintResult(N);
//    system("pause");
//  
//   
//}