// 31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Random(int From, int To) {
    int N = rand() % (To - From + 1) + From;
    return N;
}
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}

void Swap(int& A, int& B) {
    int T;
    T = A;
    A = B;
    B = T;
}

void FillingTheArray(int arr[], int& L) {
    for (int i = 0; i < L; i++) {
        arr[i] = i+1;
    }
}

void ShowOriginalArrayElements(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ShuffleArrayElements(int arr[] , int L) {
   
    for (int i = 0; i <= L-1; i++) {
        int j = Random(i,L-1);
        Swap(arr[i], arr[j]);

      /*  Swap(arr[Random(0,L-1)], arr[Random(0,L-1)]);*/

     }
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100], L;
    L = ReadNumber("Please enter the length\n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
    ShuffleArrayElements(arr,L);
    ShowOriginalArrayElements(arr, L);
    system("pause");



    
    
}


