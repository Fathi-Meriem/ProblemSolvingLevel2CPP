// 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void FillingTheArray(int arr[],int &L) {
    cout << "Enter the array length\n";
    cin >> L;
    cout << "please start entering the elements;\n";
    for (int i = 0; i < L; i++) {

        cin >> arr[i];
        cout<<"Element [" << i+1 << "] : " << arr[i]<<endl;
    
    }
}

int ReadNmberToChek(string message) {
    int N;
    cout << message;
    cin >> N;
    return N;
}
void ShowOriginalArrayElements(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        cout<< arr[i] <<" ";
    }
    cout << endl;

}
int RepeatedTime(int N,int arr[],int L) {
    int c = 0;
    for (int i = 0; i < L; i++) {
        if (N == arr[i])
            c++;
    }
    return c;
}




int main()

{ 
  int arr[100];
  int L;
  FillingTheArray(arr, L);
  cout << "Origical array: ";
  ShowOriginalArrayElements(arr, L);
  int M = ReadNmberToChek("Please enter the Number to check\n");
  int c = RepeatedTime(M, arr,L);
  cout << "The number " << M << " is repeated " << c << "Times\n";
  system("pause");

}

