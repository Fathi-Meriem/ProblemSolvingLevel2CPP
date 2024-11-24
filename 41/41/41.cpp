// 41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ShowOriginalArrayElements(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

bool CheckPalindromeArray(int arr[], int L) {
    for (int i = 0; i < L; i++) {
        if (arr[i] != arr[L - 1 - i])
            return false;
    }
    return true;
}
//void AddArrayElemnt(int N, int arr[], int& L)
//{
//    L++;
//    arr[L - 1] = N;
//
//}
//void ReverseArray(int arr[], int arr2[], int L, int &L2) {
//    for (int i = 0; i < L; i++) {
//        AddArrayElemnt(arr[L - i - 1], arr2, L2);
//    }
//}
//bool CompareArrays(int arr[], int arr2[], int L) {
//    for (int i = 0; i < L; ) {
//        if (arr[i] == arr2[i]){
//            i++;
//        }
//        else {
//            return false;
//        }
//    }
//    return true;
//}

int main()
{
    int arr[5] = { 10,20,30,20,10 };
  /*  int arr2[100];*/
    int L = 5;/* L2 = 0;*/
    ShowOriginalArrayElements(arr,L);
    //ReverseArray(arr, arr2, L, L2);
   /* ShowOriginalArrayElements(arr2, L2);
    if (CompareArrays(arr,arr2,L))*/
    if(CheckPalindromeArray(arr,L))
        cout << "The Array is Palindrome\n";
    else
        cout << "The Array is not Palindrome\n";

    system("pause");


}


