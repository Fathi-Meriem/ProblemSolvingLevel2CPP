// 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool PrimeNumber(int N) {
    if (N == 1)
        return false;
    
    for (int i = 2; i <= N / 2; i++) {
            if (N % i == 0)
                return false;
       
       }
      
    return true;
}
void CopyArray(int arr1[], int arr2[],int L1,int& L2) {
    int i, c = 0;
    for (i = 0; i < L1; i++) {
            if (PrimeNumber(arr1[i])) {
                arr2[c] = arr1[i];
                c++;
            }
        }
    L2 = --c;
    }
 
 
int main()

{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], L1,L2=0;
    FillingTheArray(arr1, L1);
    ShowOriginalArrayElements(arr1, L1);
    CopyArray(arr1, arr2, L1,L2);
    ShowOriginalArrayElements(arr2, L2);
    system("pause");
    
}

