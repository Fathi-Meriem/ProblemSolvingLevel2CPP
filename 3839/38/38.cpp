// 37.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void AddArrayElemnt(int N, int arr[], int& L)
{
    L++;
    arr[L - 1] = N;

}
void CopyArrayElements(int arr[], int arr2[], int L, int& L2) {
    for (int i = 0; i < L; i++) {
        AddArrayElemnt(arr[i], arr2, L2);
    }


}
int main()
{
    int arr[100], L, arr2[100], L2 = 0;
    L = ReadNumber("Please enter the number of elements: \n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
    CopyArrayElements(arr, arr2, L, L2);
    ShowOriginalArrayElements(arr2, L2);
    system("pause");


}


