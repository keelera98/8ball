#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	string question = "";
	int randomNumber;
	int userCont = 1;
	randomNumber = rand() % 6 + 1;
	cout << "Welcome to magic 8 ball" << endl;
	cout << "Enter a question: ";
	getline(cin, question);
	do{
		randomNumber = rand() % 6 + 1;
		switch(randomNumber){
			case 1:
				cout << "The answer to " << question << " is yes" << endl;
				break;
			case 2:
				cout << "The answer to " << question << " is no" << endl;
				break;
			case 3:
				cout << "The answer to " << question << " is maybe" << endl;
				break;
			case 4:
				cout << "The answer to " << question << " is try again" << endl;
				break;
			case 5:
				cout << "The answer to " << question << " is definitely not" << endl;
				break;
			case 6:
				cout << "The answer to " << question << " is definitely yes" << endl;
				break;
		}
		cout << "Do you want to roll again? Enter 1 for yes and 2 for no: ";
		cin >> userCont;
	}while(userCont == 1);
	return 0;
}