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

//bool OddNumber(int N) {
// if (N % 2 == 0)
//    return  false;
// else
//   return true;
//}
bool PrimeNumber(int N) {
    if (N == 1)
        return false;
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0)
            return  false;
    }
   return true;
}

void AddArrayElemnt(int N, int arr[], int& L)
{
    L++;
    arr[L - 1] = N;

}
void CopyPrimeArrayElements(int arr[], int arr2[],int L,int &L2) {
    for (int i = 0; i < L; i++) {
        if(PrimeNumber(arr[i]))
        AddArrayElemnt(arr[i],arr2,L2);
    }


}
//void CopyOddArrayElements(int arr[], int arr2[],int L,int &L2) {
//    for (int i = 0; i < L; i++) {
//        if(OddNumber(arr[i]))
//        AddArrayElemnt(arr[i],arr2,L2);
//    }
//
//
//}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100],L,arr2[100],L2=0;
    L = ReadNumber("Please enter the number of elements: \n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
   /* CopyOddArrayElements(arr, arr2, L, L2);*/
    CopyPrimeArrayElements(arr, arr2, L, L2);


    ShowOriginalArrayElements(arr2, L2);
    system("pause");


}


