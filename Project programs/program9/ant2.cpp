#include <iostream>
#include <cstdlib>
#include "ant.h"
using namespace std;

Ant::Ant() : Organism('o')
{
	
}

void Ant::move(Organism *arr[][20])
{	
	bool moved = false;
	
	int direction = rand() % 4;
	
	cout << "================" << endl;
	cout << "direction: " << direction << endl;
	cout << "x: " << arr[get_x()][get_y()]->get_x() << " y:" << arr[get_x()][get_y()]->get_y() << endl;
	
	while(moved == false)
	{
		int direction = rand() % 4;
		if(direction == 1 && get_x() != 0)
		{	
			swap(arr[get_x()][get_y()], arr[get_x() - 1][get_y()]);
			/*
			Organism *temp;
			temp = arr[get_x()][get_y()];
			arr[get_x()][get_y()] = arr[get_x() - 1][get_y()];
			arr[get_x() - 1][get_y()] = temp;
			
			
			arr[get_x() - 1][get_y()]->set_x(arr[get_x()][get_y()]->get_x());
			arr[get_x() - 1][get_y()]->set_y(arr[get_x()][get_y()]->get_y());
			arr[get_x()][get_y()]->set_x(temp->get_x());
			arr[get_x()][get_y()]->set_y(temp->get_y());
			*/
			
			cout << "x: " << arr[get_x() - 1][get_y()]->get_x() << " y:" << arr[get_x() - 1][get_y()]->get_y() << endl;
			
			
			moved = true;
		}
		else if(direction == 2 && get_y() != 19)
		{
			swap(arr[get_x()][get_y()], arr[get_x()][get_y() + 1]);
			/*
			Organism *temp;
			temp = arr[get_x()][get_y()];
			arr[get_x()][get_y()] = arr[get_x()][get_y() + 1];
			arr[get_x()][get_y() + 1] = temp;
			
			
			arr[get_x()][get_y() + 1]->set_x(arr[get_x()][get_y()]->get_x());
			arr[get_x()][get_y() + 1]->set_y(arr[get_x()][get_y()]->get_y());
			arr[get_x()][get_y()]->set_x(temp->get_x());
			arr[get_x()][get_y()]->set_y(temp->get_y());
			*/
			
			cout << "x: " << arr[get_x()][get_y() + 1]->get_x() << " y:" << arr[get_x()][get_y() + 1]->get_y() << endl;
			
			
			moved = true;
		}
		else if(direction == 3 && get_x() != 19)
		{
			swap(arr[get_x()][get_y()], arr[get_x() + 1][get_y()]);
			/*
			Organism *temp;
			temp = arr[get_x()][get_y()];
			arr[get_x()][get_y()] = arr[get_x() + 1][get_y()];
			arr[get_x() + 1][get_y()] = temp;
			
			
			arr[get_x() + 1][get_y()]->set_x(arr[get_x()][get_y()]->get_x());
			arr[get_x() + 1][get_y()]->set_y(arr[get_x()][get_y()]->get_y());
			arr[get_x()][get_y()]->set_x(temp->get_x());
			arr[get_x()][get_y()]->set_y(temp->get_y());
			*/
			
			cout << "x: " << arr[get_x() + 1][get_y()]->get_x() << " y:" << arr[get_x() + 1][get_y()]->get_y() << endl;
			
			
			moved = true;
		}
		else if(direction == 0 && get_y() != 0)
		{
			swap(arr[get_x()][get_y()], arr[get_x()][get_y() - 1]);
			/*
			Organism *temp;
			temp = arr[get_x()][get_y()];
			arr[get_x()][get_y()] = arr[get_x()][get_y() - 1];
			arr[get_x()][get_y() - 1] = temp;
			
			
			arr[get_x()][get_y() - 1]->set_x(arr[get_x()][get_y()]->get_x());
			arr[get_x()][get_y() - 1]->set_y(arr[get_x()][get_y()]->get_y());
			arr[get_x()][get_y()]->set_x(temp->get_x());
			arr[get_x()][get_y()]->set_y(temp->get_y());
			*/
			
			cout << "x: " << arr[get_x()][get_y() - 1]->get_x() << " y:" << arr[get_x()][get_y() - 1]->get_y() << endl;
			
			
			moved = true;
		}
	}
	
	cout << "================" << endl;
}

//======================================================================================================================
//======================================================================================================================
//======================================================================================================================
//======================================================================================================================
//======================================================================================================================

void Ant::breed(Organism *arr[][20])
{
	
}


/*
void Ant::swap(Organism *&org1, Organism *&org2)
{
	//cout << "check" << endl;
	//cout << "org 1 " << org1->get_name() << " org2 " << org2->get_name() << endl;
	cout << "----------------------" << endl;
	cout << "org1 x: " << org1->get_x() << " y: " << org1->get_y() << endl; 
	cout << "org2 x: " << org2->get_x() << " y: " << org2->get_y() << endl; 


	
	Organism *temp;
	temp = org1;
	org1 = org2;
	org2 = temp;
	org2->set_x(org1->get_x());
	org2->set_y(org1->get_y());
	org1->set_x(temp->get_x());
	org1->set_y(temp->get_y());
	
	
	
	
	cout << "org1 x: " << org1->get_x() << " y: " << org1->get_y() << endl; 
	cout << "org2 x: " << org2->get_x() << " y: " << org2->get_y() << endl; 
	cout << "----------------------" << endl;
	//cout << "org 1 " << org1->get_name() << " org2 " << org2->get_name() << endl;
}
*/
