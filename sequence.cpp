//Pui Tam
//Homework 2
//CS 5060

//Postcondiftion: The first item in the sequence becomes the current item
//(but if the sequence is empty, then there is no current item.
void sequence::start()
{
	
}

//Precondition: is_item returns true
/*Postcondition: If the current item was already the last item in the sequence,
then there is no longer any current item. Otherwise, the new item is the item
immediately after the original current item.
*/
void sequence::advance()
{
	
}



//Precondition: size() < CAPACITY
/*Postcondition: A new copy of entry has been inserted in the sequence
before the current item. If there was no current item, then the new entry
has been inserted at the front. In either case, the new item is now the 
current item of the sequence.
*/
void sequence::insert(const value_type& entry)
{
	
}


//Precondition: size() < CAPACITY
/*Postcondition: A new copy of entry has been inserted in the sequence 
after the current item. If there was no current item, the the nw entry 
has been attatched to the end. In either case, the new ite is now the 
current item of the sequence. 
*/
void sequence::attatch(const value_type& entry)
{
	
}


//Precondition: is_item returns true
/*Postcondition: The current item has been removed from the seuqence,
and the item after this (if there is one) is not the new current item.
*/
void sequence::remove_current()
{
	
}

//Postcondition: The return value is the number of items in the sequence
size_type sequence::size() const
{
	
}

/*Postcondition: A true return value indicates that there is a valid "current" item that
may be retrieved by the current member function (listed below). A false return value indicates 
that there is no valid current item.
*/
bool is_item() const
{
	
}

//Precondition: is_item returns true.
//Postcondition: The item returned is the current item in the sequence.
value_type current() const
{
	
}
