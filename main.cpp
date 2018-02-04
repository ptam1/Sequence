#include <iostream> //Provides cout and cin
#include "sequence.h"

using namespace std;



int main()
{

	sequence test;
	char user_input;
	double insert_input;
	double attach_input;

	cout << "Commands: !: Start, +: Advance, I: Insert, A: Attach, R: Remove, S: Size, ?: Is Item, C: Current Item, E: Exit" << endl;
	cout << "Enter Your Command:" << endl;
	cin >> user_input;
	
	while(user_input != 'E')
	{
	switch(user_input)
	{
		case '!': cout << "Testing start() Member Function" << endl;
				  test.start();
						 break;
		case '+': cout << "Testing advance() Member Function" << endl;
				  test.advance();
						 break;
		case 'I': cout << "What Number Would You Like To Insert?" << endl;
						cin >> insert_input;
						cout << "Testing insert() Member Function" << endl;
						test.insert(insert_input);
						break;
		case 'A': cout << "What Number Would You Like To Attach?" << endl;
						cin >> attach_input;
						cout << "Testing attach() Member Function" << endl;
						test.attach(attach_input);
						break;
		case 'R': cout << "Testing remove_current() Member Function" << endl;
						 test.remove_current();
						 break;
		case 'S': cout << "Testing size() Member Function" << endl;
							  cout << "The Sequence Size is: " << " " << test.size() << endl;
							  break;
		case '?': cout << "Testing is_item() Member Function:" << " " << test.is_item() << endl;
							  break;
		case 'C': cout << "Testing current() Member Function" << endl;
							  cout << "The Current Item is: " << " " << test.current() << endl;
							  break;
		case 'P': test.print(); 
					break;
	}
	cout << "Enter Another Command" << endl;
	cin >> user_input;
	}
	return 0;
}
	