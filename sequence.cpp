#include "sequence.h"


sequence::sequence()
{
	current_index = 0;
	used = 0;
	
}
//Postcondiftion: The first item in the sequence becomes the current item
//(but if the sequence is empty, then there is no current item.
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
	if(is_item() == true)
	{
		current_index++;
	}
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
	
	if(size() < CAPACITY)
	{
	for(i = used; i > current_index; i--)
	{
		data[i] = data[i-1];
	}
	data[current_index-1] = entry;
	used++;
    }
	else
	{
	data[0] = entry;
	current_index = 0;
	used++;	
	}
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
	
	if(size() < CAPACITY)
	{
		for(i = used; i > current_index; i--)
		{
			data[i] = data[i-1];
		}
		data[current_index+1] = entry;
		used++;
	}
	else
	{
		data[used] = entry;
		current_index = used;
		used++;
	}
}


//Precondition: is_item returns true
/*Postcondition: The current item has been removed from the seuqence,
and the item after this (if there is one) is not the new current item.
*/
void sequence::remove_current()
{
	size_type i;
	if(is_item() == true)
	for(i = 1; i < used; ++i)
	{
		data[i-1] = data[i];
	}
}

//Postcondition: The return value is the number of items in the sequence
sequence::size_type sequence::size() const
{
	size_type answer = 0;
	size_type i;
	
	for(i = 0; i < used; ++i)
	{
		++answer;
	}
	return answer;
		
}

/*Postcondition: A true return value indicates that there is a valid "current" item that
may be retrieved by the current member function (listed below). A false return value indicates 
that there is no valid current item.
*/
bool sequence::is_item() const
{
	if(current_index < used)
	{
		return true;
	}
}

//Precondition: is_item returns true.
//Postcondition: The item returned is the current item in the sequence.
sequence::value_type sequence::current() const
{
	return data[current_index];
}
