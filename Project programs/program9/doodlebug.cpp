#include <iostream>
#include <cstdlib>
#include "doodlebug.h"
using namespace std;

Doodlebug::Doodlebug() : Organism('X'), starve(3)
{
	
}

void eat(Organism *&org1, Organism *&org2)
{
	//cout << "org1: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	//cout << "org2: " << org2->get_name() << " x: " << org2->get_x() << " y: " << org2->get_y() << endl;
	Organism *temp;
	int x, y;
	temp = org1;
	x = temp->get_x();
	y = temp->get_y();
	org1 = org2;
	org2 = temp;
	
	org2->set_x(org1->get_x());
	org2->set_y(org1->get_y());
	
	delete temp;
	org1 = new Organism();
	org1->set_x(x);
	org1->set_y(y);
	//if(org2->get_name() == 'X')
	//cout << "org1: " << org1->get_name() << " x: " << org1->get_x() << " y: " << org1->get_y() << endl;
	//cout << "org2: " << org2->get_name() << " x: " << org2->get_x() << " y: " << org2->get_y() << endl;
}

void Doodlebug::move(Organism *arr[][20])
{
	arr[get_x()][get_y()]->set_steps(arr[get_x()][get_y()]->get_steps() + 1);
	
	starve--;
	
	if(((get_x() != 0 && arr[get_x() - 1][get_y()]->get_name() == 'o') || (get_y() != 0 && arr[get_x()][get_y() - 1]->get_name() == 'o')) 
		|| ((get_x() != 19 && arr[get_x() + 1][get_y()]->get_name() == 'o') || (get_y() != 19 && arr[get_x()][get_y() + 1]->get_name() == 'o')))
	{
		bool eaten = false;
		
		
		while(eaten == false)
		{
			int direction = rand() % 4;
			//cout << "Dir: " << direction << endl;
			
			
			switch(direction)
			{
				case 0:
					if(get_x() != 0 && arr[get_x() - 1][get_y()]->get_name() == 'o')
					{
						eat(arr[get_x()][get_y()], arr[get_x() - 1][get_y()]);
						starve = 3;
						eaten = true;
						//arr[get_x() - 1][get_y()]->set_steps(arr[get_x() - 1][get_y()]->get_steps() + 1);
					}
					break;
				
				case 1:
					if(get_y() != 0 && arr[get_x()][get_y() - 1]->get_name() == 'o')
					{
						eat(arr[get_x()][get_y()], arr[get_x()][get_y() - 1]);
						starve = 3;
						eaten = true;
						//arr[get_x()][get_y() - 1]->set_steps(arr[get_x()][get_y() - 1]->get_steps() + 1);
					}
					break;
					
				case 2:
					if(get_x() != 19 && arr[get_x() + 1][get_y()]->get_name() == 'o')
					{
						eat(arr[get_x()][get_y()], arr[get_x() + 1][get_y()]);
						starve = 3;
						eaten = true;
						//arr[get_x() + 1][get_y()]->set_steps(arr[get_x() + 1][get_y()]->get_steps() + 1);
					}
					break;
				
				case 3:
					if(get_y() != 19 && arr[get_x()][get_y() + 1]->get_name() == 'o')
					{
						eat(arr[get_x()][get_y()], arr[get_x()][get_y() + 1]);
						starve = 3;
						eaten = true;
						//arr[get_x()][get_y() + 1]->set_steps(arr[get_x()][get_y() + 1]->get_steps() + 1);
					}
					break;
			}
			
		/*
			cout << "Name: " << arr[get_x()][get_y()]->get_name() << endl;
			cout << "x: " << arr[get_x()][get_y()]->get_x() << " y: " << arr[get_x()][get_y()]->get_y() << endl;
			cout << "Steps: " << arr[get_x()][get_y()]->get_steps() << endl;
			cout << "Birth " << arr[get_x()][get_y()]->get_birth() << endl;
			cout << "===========================eat" << endl;
		*/	
		}
	}
	else if(((get_x() != 0 && arr[get_x() - 1][get_y()]->get_name() == ' ') || (get_y() != 0 && arr[get_x()][get_y() - 1]->get_name() == ' ')) 
		|| ((get_x() != 19 && arr[get_x() + 1][get_y()]->get_name() == ' ') || (get_y() != 19 && arr[get_x()][get_y() + 1]->get_name() == ' ')))
	{
		int direction = rand() % 4;
		//cout << "Dir: " << direction << endl;
		
		switch(direction)
		{
			case 0:
				if(get_x() != 0 && arr[get_x() - 1][get_y()]->get_name() == ' ')
				{
					swap(arr[get_x()][get_y()], arr[get_x() - 1][get_y()]);
					//arr[get_x() - 1][get_y()]->set_steps(arr[get_x() - 1][get_y()]->get_steps() + 1);
				}
				break;
			
			case 1:
				if(get_y() != 0 && arr[get_x()][get_y() - 1]->get_name() == ' ')
				{
					swap(arr[get_x()][get_y()], arr[get_x()][get_y() - 1]);
					//arr[get_x()][get_y() - 1]->set_steps(arr[get_x()][get_y() - 1]->get_steps() + 1);
				}
				break;
				
			case 2:
				if(get_x() != 19 && arr[get_x() + 1][get_y()]->get_name() == ' ')
				{
					swap(arr[get_x()][get_y()], arr[get_x() + 1][get_y()]);
					//arr[get_x() + 1][get_y()]->set_steps(arr[get_x() + 1][get_y()]->get_steps() + 1);
				}
				break;
			
			case 3:
				if(get_y() != 19 && arr[get_x()][get_y() + 1]->get_name() == ' ')
				{
					swap(arr[get_x()][get_y()], arr[get_x()][get_y() + 1]);
					//arr[get_x()][get_y() + 1]->set_steps(arr[get_x()][get_y() + 1]->get_steps() + 1);
				}
				break;
		}
		
		/*
		cout << "Name: " << arr[get_x()][get_y()]->get_name() << endl;
		cout << "x: " << arr[get_x()][get_y()]->get_x() << " y: " << arr[get_x()][get_y()]->get_y() << endl;
		cout << "Steps: " << arr[get_x()][get_y()]->get_steps() << endl;
		cout << "Birth " << arr[get_x()][get_y()]->get_birth() << endl;
		cout << "===========================move" << endl;
	*/	
	}
	else
	{
		//cout << "cant move" << endl;
	}
	
	bool dead = false;
	
	if(starve == 0)
	{
		Organism *temp = arr[get_x()][get_y()];
		int x, y;
		x = get_x();
		y = get_y();
		delete temp;
		
		arr[x][y] = new Organism();
		arr[x][y]->set_x(x);
		arr[x][y]->set_y(y);
		dead = true;
	}
	
	if(dead == false && arr[get_x()][get_y()]->get_steps() % 8 == 0)
	{
		arr[get_x()][get_y()]->breed(arr, get_x(), get_y(), (get_steps() + get_birth()));
	}
}

void Doodlebug::breed(Organism *arr[][20], int x, int y, int the_birth)
{
	if(((get_x() != 0 && arr[get_x() - 1][get_y()]->get_name() == ' ') || (get_y() != 0 && arr[get_x()][get_y() - 1]->get_name() == ' ')) 
		|| ((get_x() != 19 && arr[get_x() + 1][get_y()]->get_name() == ' ') || (get_y() != 19 && arr[get_x()][get_y() + 1]->get_name() == ' ')))
	{
		Organism *del;
		int direction;
		bool birth = false;
		
		while(birth == false)
		{
			direction = rand() % 4;
			//cout << "Dir: " << direction << endl;
			
			switch(direction)
			{
				case 0:
					if(x != 0 && arr[x - 1][y]->get_name() == ' ')
					{
						//cout << "Deleting " << arr[x - 1][y]->get_name() << endl;
						//cout << "X: " << x - 1 << " Y: " << y << endl;
						del = arr[x - 1][y];
						delete del;
						arr[x - 1][y] = new Doodlebug();
						arr[x - 1][y]->set_x(x - 1);
						arr[x - 1][y]->set_y(y);
						arr[x - 1][y]->set_birth(the_birth);
						birth = true;
					}
					break;
				
				case 1:
					if(y != 0 && arr[x][y - 1]->get_name() == ' ')
					{
						//cout << "Deleting " << arr[x][y - 1]->get_name() << endl;
						//cout << "X: " << x << " Y: " << y - 1 << endl;
						del = arr[x][y - 1];
						delete del;
						arr[x][y - 1] = new Doodlebug();
						arr[x][y - 1]->set_x(x);
						arr[x][y - 1]->set_y(y - 1);
						arr[x][y - 1]->set_birth(the_birth);
						birth = true;
					}
					break;
					
				case 2:
					if(x != 19 && arr[x + 1][y]->get_name() == ' ')
					{
						//cout << "Deleting " << arr[x + 1][y]->get_name() << endl;
						//cout << "X: " << x + 1 << " Y: " << y << endl;
						del = arr[x + 1][y];
						delete del;
						arr[x + 1][y] = new Doodlebug();
						arr[x + 1][y]->set_x(x + 1);
						arr[x + 1][y]->set_y(y);
						arr[x + 1][y]->set_birth(the_birth);
						birth = true;
					}
					break;
				
				case 3:
					if(y != 19 && arr[x][y + 1]->get_name() == ' ')
					{
						//cout << "Deleting " << arr[x][y + 1]->get_name() << endl;
						//cout << "X: " << x << " Y: " << y + 1 << endl;
						del = arr[x][y + 1];
						delete del;
						arr[x][y + 1] = new Doodlebug();
						arr[x][y + 1]->set_x(x);
						arr[x][y + 1]->set_y(y + 1);
						arr[x][y + 1]->set_birth(the_birth);
						birth = true;
					}
					break;
			}
		}
	}
	else
	{
		//cout << "Cant breed" << endl;
	}
}
