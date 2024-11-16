// 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string ReadName(string message) {
    string Name;
    cout << message << endl;
    cin >> Name;
    return Name;
}

string EncryptName(string Name) {
    int L = Name.length();
    string Name2="";
    for (int i = 0; i < L; i++) {
        int j = (int)Name[i];
        j = j + 2;
        Name2 = Name2 + char(j);
    }
   
    return Name2;
}
string DecryotName(string Name) {
    int L = Name.length();
    string Name2 = "";
    for (int i = 0; i < L; i++) {
        int j = (int)Name[i];
        j = j - 2;
        Name2 = Name2 + char(j);
    }

    return Name2;
}


int main()
{   
    string Name = ReadName("Please enter your name: \n");
    cout << "The name nefore encrypment is :" << Name;
    cout << endl;
    string Name2=EncryptName(Name);
    cout << "The name After encrypment is: ";
    cout << Name2;
    cout << endl;
    string Name3=DecryotName(Name2);
    cout << "The name After decrypment is: ";
    cout << Name3;
    cout << endl;
    system("pause");
    
}


