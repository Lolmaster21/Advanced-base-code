#include<iostream>
using namespace std;

int main() {
	int location;
	bool found = false;
	location = 0;
	int IDs[] = { 234,567,321,567,234,789 };

	int searchItem;
	cout << "Enter ID you are searching for: " << endl;
	cin >> searchItem;

	while (location < sizeof(IDs) && !found) {
		if (IDs[location] == searchItem)
			found = true;
		else
			location++;

	}
		 
	if (found == true) {
		cout << "Id" << searchItem << " was found in slot " << location << "." << endl;
	}
	else
		cout << "ID was not found." << endl;

}
