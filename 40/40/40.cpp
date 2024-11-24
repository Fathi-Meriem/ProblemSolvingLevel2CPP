// 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void AddArrayElemnt(int N, int arr[], int& L)
{   L++;
    arr[L - 1] = N;
}
void ShowOriginalArrayElements(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int LookForANumber(int arr[], int N, int L) {
    for (int i = 0; i < L; i++) {
        if (arr[i] == N)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int arr[], int L, int N) {
    return (LookForANumber(arr, N, L) != -1);
}

void CopyDistinctArrayElements(int arr[], int arr2[], int L, int& L2) {
    for (int i = 0; i < L; i++) {
        if (!IsNumberInArray(arr2, L2, arr[i])) {
            AddArrayElemnt(arr[i], arr2, L2);
        }
        
    }


}


int main()
{
    int arr[10] = { 10 ,10,10,50,50,70,70,70,70,90 };
    int arr2[100], L = 10, L2 = 0;
    ShowOriginalArrayElements(arr, L);
    CopyDistinctArrayElements(arr, arr2, L, L2);
    ShowOriginalArrayElements(arr2, L2);
    system("pause");


}

