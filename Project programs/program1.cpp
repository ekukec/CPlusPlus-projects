#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct student
{
	string name;
	double score;
};

ostream& operator <<(ostream& out, const student& entry)
{
	out << entry.name << " : " << entry.score;
	return out;
}

bool operator <(const student& entry1, const student& entry2)
{
	if(entry1.score < entry2.score)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enter(vector<student> list, string name_v, double score_v)
{
	student entry;
	entry.name = name_v;
	entry.score = score_v;
	list.push_back(entry);
}

int main()
{
	int how_many;
	student entry_v;
	vector<student> student_list;
	
	cout << "How many students do u wish to enter: ";
	cin >> how_many;
	
	for(int i = 0; i < how_many; i++)
	{
		cout << "----------------" << endl;
		cout << "Entry " << i + 1 << endl;
		cout << "Name: ";
		cin >> entry_v.name;
		cout << "Score: ";
		cin >> entry_v.score;
		student_list.push_back(entry_v);
	}
	cout << endl;
	
	sort(student_list.begin(), student_list.end());
	
	vector<student> :: reverse_iterator p;
	for(p = student_list.rbegin(); p != student_list.rend(); p++)
	{
		cout << *p << endl;
	}
	
	return 0;
}
