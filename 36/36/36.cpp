// 36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber(string message)
{
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}
void AddArrayElemnt(int N,int arr[], int &L) 
{
    L++;
    arr[L - 1] = N;
    
}

void FillingArray(int arr[100],int &L) {
    bool Q;
    do {
        AddArrayElemnt(ReadNumber("Please enter a number\n"),arr,L);
        cout << "\nDo you want to add more numbers ?[0] : No, [1] : yes ? " << endl;
        cin >> Q;
    } while(Q);
}
void ShowOriginalArrayElements(int arr[100], int N) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],L=0;
    FillingArray(arr,L);
    cout << "Array Length is : " << L<<endl;
    cout << "Array elements :";
    ShowOriginalArrayElements(arr, L);
    system("pause");

}


