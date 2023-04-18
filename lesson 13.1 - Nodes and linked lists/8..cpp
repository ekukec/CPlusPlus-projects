#include <iostream>

using namespace std;

struct Node
{
	double data;
	Node *next;
};
typedef Node* Pointer;
Pointer p1, p2;


int main()
{
	Pointer discard;
	
	discard = p2->next;
	p2->next = discard->next;
	
	delete discard;
	
	
	return 0;
}
