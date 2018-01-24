#include <iostream> //Provides cout and cin
#include "sequence.h"

using namespace std;

int main()
{
	sequence test;
	string user_input;
	double insert_input;
	double attach_input;
	
	cout << "Commands: Start, Advance, Insert, Attach, Remove, Size, Find Item, Current Item" << endl;
	cout << "Enter Your Command:" << endl;
	getline(cin, user_input);
	
	switch(user_input)
	{
		case 'Start': test.start();
					   break;
		case "Advance": test.advance();
						 break;
		case "Insert": cout << "What Number Would You Like To Insert?" << endl;
						getline(cin, insert_input);
						test.insert(insert_input);
		case "Attach": cout << "What Number Would You Like To Attach?" << endl;
						getline(cin, attach_input);
						test.attach(attach_input);
		case "Remove": cout << "Testing remove_current Member Function" << endl;
						 test.remove_current();
		case "Size": cout << "Testing size Member Function" << endl;
							  cout << "The Sequence Size is: " << " " << test.size() << endl;
		case "Find Item": cout << "Testing is_item Member Function" << endl;
								   test.is_item();
		case "Current Item": cout << "Testing current Member Function" << endl;
							  cout << "The Current Item is: " << " " << test.current() << endl;
	}
	return 0;
}
