//Sequential search code
//given user input, this code walks throught the slots of an array from beginning to end
//and prints out result


#include<iostream>
using namespace std;

int main() {
	int location; //to keep track of which slot in the array we're looking at
	bool found = false; //have we fount it?
	location = 0; //start of the first slot
	int IDs[] = { 234,567,321,567,234,789 };

	int searchItem;
	cout << "Enter ID you are searching for: " << endl;
	cin >> searchItem;

	while (location < sizeof(IDs) && !found) { //keeping going as long as we haven't reached the end AND we haven't found it
		if (IDs[location] == searchItem)//check if what were looking for is in that slot
			found = true;
		else
			location++; //if we haven't found it, move to the next slot before looping 

	}
		 
	if (found == true) {
		cout << "Id" << searchItem << " was found in slot " << location << "." << endl;
	}
	else
		cout << "ID was not found." << endl;

}
