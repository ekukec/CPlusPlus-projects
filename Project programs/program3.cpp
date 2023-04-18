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
	if(entry1.name < entry2.name)
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
	double max = 0, min = 0, avg = 0, sum = 0;
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
		if(entry_v.score > max)
		{
			max = entry_v.score;
		}
		if(i == 0)
		{
			min = entry_v.score;
		}
		if(entry_v.score < min)
		{
			min = entry_v.score;
		}
		sum = sum + entry_v.score;
		student_list.push_back(entry_v);
	}
	cout << endl;
	
	sort(student_list.begin(), student_list.end());
	
	avg = sum / student_list.size();
	
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Avg: " << avg << endl;
	
	vector<student> :: iterator p;
	for(p = student_list.begin(); p != student_list.end(); p++)
	{
		cout << *p << endl;
	}
	
	return 0;
}
