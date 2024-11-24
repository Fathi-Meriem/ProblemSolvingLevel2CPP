// 42.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

        arr[i] = (Random(-100, 100));
    }
}
void ShowOriginalArrayElements(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}


int CountPositiveArrayElements(int arr[], int L) {
    int c = 0;
    for (int i = 0; i < L; i++) {
        if ((arr[i])>=0 )
        c++;
    }
    return c;

}
//int CountOddArrayElements(int arr[], int L) {
//    int c = 0;
//    for (int i = 0; i < L; i++) {
//        if ((arr[i]%2)!= 0)
//        c++;
//    }
//    return c;
//
//}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], L;
    L = ReadNumber("Please enter the number of elements: \n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
    int c=CountPositiveArrayElements(arr, L);
    cout << "Positive number Count: "<<c<<endl;
    system("pause");
}


