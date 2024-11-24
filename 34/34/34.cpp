// 34.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int LookForANumber(int arr[], int N,int L) {
    for (int i = 0; i < L; i++) {
        if (arr[i] == N)
            return i;
    }
    return -1;
}

bool IsNumberInArray(int arr[], int L, int N) {
    return (LookForANumber(arr, N, L) == -1);
}


int main()
{
    int arr[100],N, L;
    L = ReadNumber("Please enter the length\n");
    FillingTheArray(arr, L);
    ShowOriginalArrayElements(arr, L);
    N = ReadNumber("Please enter the number that you're looking for: \n");
    cout << "The number that you're looking for is " << N << endl;
    if (!IsNumberInArray(arr,L,N))
        cout << "The number is  found :)" << endl;
    else {
        cout << "The number is not  found :("<< endl;
       
    }

  
    system("pause");

    
}
