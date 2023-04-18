#include <iostream>

using namespace std;

struct ListNode
{
 string item;
 int count;
 ListNode *link;
};
ListNode *head = new ListNode;


int main()
{
	head->item = "Wilbur's brother Orville";
	
	cout << head->item << endl;
	
	
	return 0;
}
