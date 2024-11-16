// 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum Type{CapitalLetter=1,SmallLetter=2,Caracter=3,Number=4 };

int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}

char GetRandumCharacter(Type x) {
 
	switch (x) {
	case CapitalLetter:
		return Random(65, 90);
		break;
	case SmallLetter:
		return Random(97,122);
		break;
	case Caracter:
		return Random(33, 47);
		break;
	case Number:
		return Random(48,57);
		break;
	}
	
}

int main() {

	cout<<GetRandumCharacter(CapitalLetter)<<endl;
	cout << GetRandumCharacter(SmallLetter) << endl;
	cout << GetRandumCharacter(Caracter) << endl;
	cout << GetRandumCharacter(Number) << endl;
	system("pause");
	

}







//void Random(int X) {
//    int From, To;
//    Type x=(Type)X;
//    switch (x) {
//    case Type::CapitalLetter:
//        From = 65;
//        To = 90;
//        cout<< char (rand() % (To-From + 1) + From)<<endl;
//        break;
//    case Type::SmallLetter:
//        From = 97;
//        To = 122;
//        cout << char(rand() % (To- From + 1) + From) << endl;
//        break;
//    case Type::Caracter:
//        From = 33;
//        To = 47;
//        cout << char(rand() % (To - From + 1) + From) << endl;
//        break;
//    case Type::Number:
//        From = 0;
//        To = 9;
//        cout << (rand() % (To - From + 1) + From) << endl;
//        break;  
//    }
//}
//
//int main()
//{
//    srand((unsigned)time(NULL));
//    int N;
//    for (int i = 0; i < 4; i++){
//        cout << "which randum type do you want:  \n";
//        cout << "1:CapitalLetter, 2 : SmallLetter, 3 : Caracter, 4 : Number" << endl;
//        cin >> N;
//        Random(N); }
////    system("pause");
//}

