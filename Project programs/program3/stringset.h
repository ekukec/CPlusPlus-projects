#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace kukec
{
	class StringSet
	{
		public:
			StringSet(string arr[], int size);
			
			StringSet();
			
			void add(string value);
			
			void remove(string value);
			
			void remove();
			
			void clear_set();
			
			int size() const;
			
			void output() const;
			
			string get_value(int position) const;
			
			friend StringSet operator +(const StringSet& par1, const StringSet& par2);
			
			friend StringSet operator *(const StringSet& par1, const StringSet& par2);
			
			void operator =(const StringSet par1);
		
		private:
			vector<string> array;	
	};
}
