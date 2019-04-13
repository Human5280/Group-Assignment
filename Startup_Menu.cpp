#include <iostream>
using namespace std;
int temp1;
int temp2;
void Start_Game() {
	//INSERT CODE
}
void Settings() {
	//INSERT CODE
}
void Burger_Menus() {
	//INSERT CODE
}
void Instructions(){
	//INSERT CODE
}
void Credits() {
	cout << "Contributers: ";
	cout << "Name: Yu Man Hong Joshua  ID:18011262A  Class:202  Tutorial Group: B" << endl;

}

int Exit() {
	char x = 'y';
	char y = 'Y';
	char a = 'n';
	char b = 'N';
	char z;
	int c;
	cout << "Confirm to Exit? : " << endl;
	cin >> z;
	if (z == x || z == y) {
		c = 6;
		temp1 = c;
		return temp1;
	}
	else if (z == a || z == b) {
		c = 0;
		temp2 = c;
		return temp2;
	}

}



int main() {
	int a;
	do {
		cout << "Welcome To Our Programme, Press 0-9 To Operate" << endl;
		cout << endl;
		cout << "*** Game Menu ***" << endl;
		cout << "[1] Start Game" << endl;
		cout << "[2] Settings" << endl;
		cout << "[3] Burger Menus" << endl;
		cout << "[4] Instructions" << endl;
		cout << "[5] Credits" << endl;
		cout << "[6] Exit" << endl;
		cout << "****************" << endl;
		cout << "Option 1-6: ";
		cin >> a;
		switch (a) {
		case 1:Start_Game();
			break;
		case 2: Settings();
			break;
		case 3: Burger_Menus();
			break;
		case 4: Instructions();
			break;
		case 5: Credits();
			break;
		case 6:
			a = Exit();
			break;
		default:cout << "You Input Wrong Number, Please Try Again Later!!!" << endl;
		}
	} while (a != 6);
	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
