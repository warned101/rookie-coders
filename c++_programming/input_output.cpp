//C++ program to understand inputs and outputs
#include <iostream>

using namespace std;

int main() {
	int marks;
	//cout is the instance of the ostream class used to produce output on the screen
	//insertion operator "<<" is used alng with the object cout for displaying output
	cout << "Enter yur marks: " << "\n"; //Standard output stream
	//cin is the instance of the class istream used to read input from the keyboard
	//Extraction operator ">>" is used along with the object cin for reading inputs
	cin >> marks; //Standard input stream
	cout << "Marks obained are " << marks << "\n";
	//cerr is the standard error stream which is used to output the errors without storing data in buffer directly
	cerr << "An error occured" << "\n"; //Un-buffered standard error stream
	//An instance of ostream class and used to display errors first storing those errors into buffer
	clog << "Error occured"; //buffered standard error stream
}