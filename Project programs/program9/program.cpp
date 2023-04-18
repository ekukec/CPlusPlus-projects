#include <iostream>
#include "organism.h"
#include "ant.h"
#include "doodlebug.h"
using namespace std;


int global_steps = 0;

void set_room(Organism *arr[][20]);

void time_step(Organism *arr[][20]);

void output_step(Organism *arr[][20]);



int main()
{
	Organism *room[20][20];
	int again;
	
	
	set_room(room);
	
	
	
	cin >> again;
	
	while(again == 1)
	{
		time_step(room);
		
		output_step(room);
		
		cin >> again;
	}
	
	
	return 0;
}

void set_room(Organism *arr[][20])
{
	cout << endl << endl << endl << endl << endl;
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
	
			if(i % 4 == 0 && j % 3 == 0)
			{
				arr[i][j] = new Ant();
				arr[i][j]->set_x(i);
				arr[i][j]->set_y(j);
				arr[i][j]->set_birth(0);
			}
			else if(i % 7 == 0 && j % 7 == 0)
			{
				arr[i][j] = new Doodlebug();
				arr[i][j]->set_x(i);
				arr[i][j]->set_y(j);
				arr[i][j]->set_birth(0);
			}
			else
			{
				arr[i][j] = new Organism();
				arr[i][j]->set_x(i);
				arr[i][j]->set_y(j);
			}
			cout << arr[i][j]->get_name() << " ";
		}
		cout << endl;
	}
	cout << endl << endl << endl << endl << endl;
}

void time_step(Organism *arr[][20])
{
	
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(arr[i][j]->get_name() == 'X')
			{
				if((arr[i][j]->get_steps() + arr[i][j]->get_birth()) == global_steps)
				{
					//cout << "===========================" << endl;
					//cout << "x: " << arr[i][j]->get_x() << " y: " << arr[i][j]->get_y() << endl;
					arr[i][j]->move(arr);
					//cout << "Global steps: " << global_steps << endl;
				}	
			}
		}
	}
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(arr[i][j]->get_name() == 'o')
			{
				if((arr[i][j]->get_steps() + arr[i][j]->get_birth()) == global_steps)
				{
					//cout << "===========================" << endl;
					//cout << "x: " << arr[i][j]->get_x() << " y: " << arr[i][j]->get_y() << endl;
					arr[i][j]->move(arr);
					//cout << "Global steps: " << global_steps << endl;
				}	
			}
		}
	}
	global_steps++;
}

void output_step(Organism *arr[][20])
{
	cout << endl << endl << endl << endl << endl;
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			cout << arr[i][j]->get_name() << " ";
		}
		cout << endl;
	}
	cout << endl << endl << endl << endl << endl;
}
