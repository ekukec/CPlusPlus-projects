#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;



int main()
{
	map <int, vector<string> > student;
	
	int n, stud_id;
	string course;
	char space;
	
	cout << "How many records do u wish to enter: ";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cout << "Entry " << i + 1 << ": ";
		cin >> stud_id >> course;
		//student.insert(pair<int, vector<string> >(stud_id, ));
		student[stud_id].push_back(course);
	}
	
	map <int, vector<string> > :: iterator p;
	
	for(p = student.begin(); p != student.end(); p++)
	{
		cout << p->first << " ";
		for(int i = 0; i < p->second.size(); i++)
		{
			cout << p->second[i] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
