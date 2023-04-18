#include <iostream>
#include <algorithm>
#include <list>
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

void enter(list<student> list, string name_v, double score_v)
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
	list<student> student_list;
	list<student> failed_list;
	
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
	
	//sort(student_list.begin(), student_list.end());
	cout << "------------------" << endl;
	cout << "Passed: " << endl;
	
	list<student> :: iterator p;
	list<student> :: iterator pf;
	bool del = false;
	for(p = student_list.begin(); p != student_list.end(); p++)
	{
		if(del == true)
		{
			student_list.erase(pf);
			del = false;
		}
		//cout << "Judging " << p->score << endl;
		if(p->score < 60.0)
		{
			//cout << p->score << " is les than 60" << endl;
			failed_list.push_back(*p);
			pf = p;
			del = true;
		}
		else
		{
			cout << *p << endl;
		}	
	}
	if(del == true)
	{
		student_list.erase(pf);
		del = false;
	}
	
	cout << "Size: " << student_list.size() << endl;
	
	cout << "------------------" << endl;
	cout << "Failed: " << endl;
	
	
	for(p = failed_list.begin(); p != failed_list.end(); p++)
	{
		cout << *p << endl;
	}
	
	cout << "Size: " << failed_list.size() << endl;
	
	return 0;
}
