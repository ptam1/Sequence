#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <cstdlib>  //Provides size_t

using namespace std;

	class sequence
	{
	public:
		//TypeDefs and Member Constants
		typedef double value_type;
		typedef std::size_t size_type;
		static const size_type CAPACITY = 30;
		
		//Constructor
		sequence();
		
		//Modification Member Functions
		void start();
		void advance();
		void insert(const value_type& entry);
		void attach(const value_type& entry);
		void remove_current();
		
		//Constant Member Functions
		size_type size() const;
		bool is_item() const;
		value_type current() const;
		
	private:
		value_type data[CAPACITY];
		size_type used;
		size_type current_index;
	};


#endif
