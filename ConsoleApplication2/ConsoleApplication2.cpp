#include<iostream>
#include"Book.h"
#include "Novel.h"
#include "Magazine.h"
#include "TextBook.h"
#include<vector>
using namespace std;
void Input(vector<Book*>& List) {
	int CatchKind;
	do {
		cout << "Choose kind of Book: \n";
		cout << "\t Press 1 for input TextBook.\n";
		cout << "\t Press 2 for input Novel.\n";
		cout << "\t Press 3 for input Magazine.\n";
		cout << "\t Press 4 for back to Manage Book menu.\n";
		cout << "Press:";
		while (cin >> CatchKind && CatchKind != 1 && CatchKind != 2 && CatchKind != 3 && CatchKind != 4) {
			cout << "\nJust press 1,2,3 or 4!\nAgain: ";
		}
		switch (CatchKind)
		{
		case 1:
			List.push_back(new TextBook);
			List[List.size() - 1]->Set();
			break;
		case 2:
			List.push_back(new Novel);
			List[List.size() - 1]->Set();
			break;
		case 3:
			List.push_back(new Magazine);
			List[List.size() - 1]->Set();
		default:
			break;
		}
	} while (CatchKind != 4);
}
void PrintList(vector<Book*>& List) {
	cout << "-----Print List Quadrangle----\n";
	for (int i = 0; i < List.size(); i++) {
		cout << " - ";
		List[i]->Print();
		cout << endl;
	}
	cout << "------------------------------\n";
}
int main() {
	vector<Book*> ListBook;
	ListBook.resize(0);
	int CatchKey;
	do {
		cout << "Manage Book: \n";
		cout << "\t Press 1 for Input Book information.\n";
		cout << "\t Press 2 for Print all list of Books.\n";
		cout << "\t Press 3 for exit.\n";
		cout << "Press:";
		while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3) {
			cout << "\nJust press 1,2 or 3!\nAgain: ";
		}
		switch (CatchKey)
		{
		case 1:
			Input(ListBook);
			break;

		case 2:
			PrintList(ListBook);
			break;
		default:
			break;
		}
	} while (CatchKey != 3);
	cout << "Thanks!";
	return 0;
}