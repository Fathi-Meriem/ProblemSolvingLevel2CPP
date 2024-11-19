// 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Random(int From, int To) {
    int N = rand() % (To - From + 1) + From;
    return N;
}
void FillingTheArray(int arr[], int& L) {
    cout << "Enter the array length\n";
    cin >> L;
    for (int i = 0; i < L; i++) {

        arr[i] = (Random(1, 100));


    }
}
void ShowOriginalArrayElements(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int GetSumofElements(int arr[], int N) {
    int sum= 0;
    for (int i = 0; i < N; i++) {
        
            sum+= arr[i];
    }

    return sum;

}

float GetAverageOfElements(int S,int N) {
    return (float) S / N;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int L;
    int M;
    float A;
    FillingTheArray(arr, L);
    cout << "Array Elements :";
    ShowOriginalArrayElements(arr, L);
    M = GetSumofElements(arr, L);
    cout << "\n The sum of element is: " << M<<endl;
    A= GetAverageOfElements(M, L);
    cout << "\n The Average of  element is: " << A << endl;

    system("pause");



}

