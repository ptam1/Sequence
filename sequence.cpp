#include "sequence.h"
#include <cassert>   //Provides assert function
#include <iostream>
using namespace std;

const sequence::size_type sequence::CAPACITY;

sequence::sequence()
{
	used = 0;
}


//Postcondiftion: The first item in the sequence becomes the current item
//but if the sequence is empty, then there is no current item.
void sequence::start()
{
	current_index = 0;
}

//Precondition: is_item returns true
/*Postcondition: If the current item was already the last item in the sequence,
then there is no longer any current item. Otherwise, the new item is the item
immediately after the original current item.
*/
void sequence::advance()
{
		current_index++;
}
	


//Precondition: size() < CAPACITY
/*Postcondition: A new copy of entry has been inserted in the sequence
before the current item. If there was no current item, then the new entry
has been inserted at the front. In either case, the new item is now the 
current item of the sequence.
*/
void sequence::insert(const value_type& entry)
{
	size_type i;	
	assert(size() < CAPACITY);
	
	for(i = used; i > current_index; i--)
	{
		data[i] = data[i-1];
	}  
	data[current_index] = entry;
	used++;
}
	


//Precondition: size() < CAPACITY
/*Postcondition: A new copy of entry has been inserted in the sequence 
after the current item. If there was no current item, the the new entry 
has been attatched to the end. In either case, the new item is now the 
current item of the sequence. 
*/
void sequence::attach(const value_type& entry)
{
	size_type i;	
    assert(size() < CAPACITY);
 
		for(i = used; i > current_index + 1; --i)
		{
			data[i] = data[i-1];
		}
	
		used++;
		current_index++;
		data[current_index] = entry;		

}



//Precondition: is_item returns true
/*Postcondition: The current item has been removed from the seuqence,
and the item after this (if there is one) is now the new current item.
*/
void sequence::remove_current()
{
	size_type i;
    assert(is_item());
 
	for(i = current_index + 1; i < used; ++i)
	{
		data[i-1] = data[i];
	}
	used--;

if(used == 0)
	{
	current_index = used;
	}
}

//Postcondition: The return value is the number of items in the sequence
sequence::size_type sequence::size() const
{
	return used;		
}

/*Postcondition: A true return value indicates that there is a valid "current" item that
may be retrieved by the current member function (listed below). A false return value indicates 
that there is no valid current item.
*/
bool sequence::is_item() const
{
 return(current_index < used);
}

//Precondition: is_item returns true.
//Postcondition: The item returned is the current item in the sequence.
sequence::value_type sequence::current() const
{	
	      return data[current_index];
}
