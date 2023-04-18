#ifndef GENERICLIST_H
#define GENERICLIST_H
#include <iostream>
using namespace std;

namespace listsavitch
{
	template<class ItemType>
	class GenericList
	{
		public:
			GenericList(int max);
			~GenericList( );
			int length( ) const;
			void add(ItemType new_item);
			bool full( ) const;
			void erase( );
			friend ostream& operator <<(ostream& outs, const GenericList<ItemType>& the_list)
			{
				for (int i = 0; i < the_list.current_length; i++)
					outs << the_list.item[i] << endl;
				return outs;
			}
			void next();
			void previous();
			void first();
			ItemType current_value();
			ItemType get_nth(int n);
		private:
			ItemType *item; //pointer to the dynamic array that holds the list.
			int current_item;
			int max_length; //max number of items allowed on the list.
			int current_length; //number of items currently on the list.
	};
}//listsavitch
#endif //GENERICLIST_
