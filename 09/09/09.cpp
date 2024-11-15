// 09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//09 First methode


int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}

int CheckFrequency(int N,int D) {
    int R, c = 0;
    while (N > 0) {
        R = N % 10;
        N = N / 10;
        if (R == D)
            c++;
    }
    return c;
}


void PrintFrequencies(int N){

    for (int i = 0; i < 9; i++) {
        int c=CheckFrequency(N, i);
        if (c!=0) {
            cout << "the number of frequence of " << i << " is" << c<<endl;
        }  
   }
     
}

int main() {
    int N = ReadNumber("Please enter a number \n");
    PrintFrequencies(N);
    system("pause");
}




//09 second methode

//int ReadNumber(string message) {
//    int N;
//    cout << message;
//    cin >> N;
//    return N;
//}
//
//
//
//int CheckFrequency(int N,int D) {
//    int R, c = 0;
//    while (N > 0) {
//        R = N % 10;
//        N = N / 10;
//        if (R == D)
//            c++;
//
//    }
//    return c;
//}
//
//
//void PrintFrequencies(int N){
//    int D;
//    int N2 = N;
//    int c;
//    int DigitsFound[] = {0};
//
//    while (N > 0 ) {
//        D = N % 10;
//        N = N / 10;
//        if (DigitsFound[D]) {
//            continue;
//        }
//        c = CheckFrequency(N2, D);
//        DigitsFound[D] = 1;
//        cout << "The number of frequencies of: " << D << " is: " << c << endl;
//      
//    }
//        
//    
//}
//
//int main() {
//    int N = ReadNumber("Please enter a number \n");
//    PrintFrequencies(N);
//    system("pause");
//}


