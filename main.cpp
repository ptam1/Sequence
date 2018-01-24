#include <iostream> //Provides cout and cin
#include "sequence.h"

using namespace std;

int main()
{
	sequence test;
	char user_input;
	char exit = 'E';
	double insert_input;
	double attach_input;
	
	cout << "Commands: !: Start, +: Advance, I: Insert, A: Attach, R: Remove, S: Size, ?: Is Item, C: Current Item, E: Exit" << endl;
	cout << "Enter Your Command:" << endl;
	cin >> user_input;
	
	while(user_input != exit)
	{
	switch(user_input)
	{
		case '!': test.start();
					   break;
		case '+': test.advance();
						 break;
		case 'I': cout << "What Number Would You Like To Insert?" << endl;
						cin >> insert_input;
						test.insert(insert_input);
		case 'A': cout << "What Number Would You Like To Attach?" << endl;
						cin >> attach_input;
						test.attach(attach_input);
		case 'R': cout << "Testing remove_current Member Function" << endl;
						 test.remove_current();
		case 'S': cout << "Testing size Member Function" << endl;
							  cout << "The Sequence Size is: " << " " << test.size() << endl;
		case '?': cout << "Testing is_item Member Function" << endl;
								   test.is_item();
		case 'C': cout << "Testing current Member Function" << endl;
							  cout << "The Current Item is: " << " " << test.current() << endl;
	}
	cout << "Enter Another Command" << endl;
	cin >> user_input;
	}
	return 0;
}
