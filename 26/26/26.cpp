// 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
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


int GetMinimumElement(int arr[], int N) {
    int M = 100;
    for (int i = 0; i < N; i++) {
        if (arr[i] < M)
            M = arr[i];
    }

    return M;

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
    M = GetMinimumElement(arr, L);
    cout << "\n The sum of element is: " << M << endl;
   
    system("pause");



}


