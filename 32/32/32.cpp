// 32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int ReadNumber(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}
int Random(int From, int To) {
    int N = rand() % (To - From + 1) + From;
    return N;
}

void FillingTheArray(int arr[], int& L) {

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

void ReverseArray(int arr[],int L,int arr2[]) {
    for (int i = 0; i < L; i++) {
        arr2[i] = arr[L - i - 1];
    }
   
}
int main() {
    int arr[100], arr2[100], L;
    L = ReadNumber("Please enter the length\n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
    ReverseArray(arr,L,arr2);
    ShowOriginalArrayElements(arr2, L);
    system("pause");




}