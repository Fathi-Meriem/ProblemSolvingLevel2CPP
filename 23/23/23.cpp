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
    cout << "please start entering the elements;\n";
    for (int i = 0; i < L; i++) {

        arr[i]= (Random(1,100));
        

    }
}
void ShowOriginalArrayElements(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}


int main()
{
    srand((unsigned)time(NULL));
	int arr[100];
    int L;
    FillingTheArray(arr, L);
    cout << "Array Elements :";
    ShowOriginalArrayElements(arr, L);
    system("pause");



}

