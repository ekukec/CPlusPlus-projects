#include <iostream>
#include <string>

using namespace std;

void operate(string msg, int key);


int main()
{
	string message(":mmZ\dxZmx]Zpgy");
	char c = '!';
	
	cout << "Enter message to decode: ";
	//getline(cin, message);
	
	cout << int(c);
	
	for(int x = 0; x < 100; x++)
	{
		cout << "Message for key " << x << ":";
		operate(message, x);
	}

	
	return 0;
}

void operate(string msg, int key)
{
	for(int i = 0; i < msg.length(); i++)
	{
		if((int(msg[i]) - key) < 32)
		{
			msg[i] = 32 -((int(msg[i]) - key) + 127);
		}
		else
		{
			msg[i] = (int(msg[i]) - key);
		}
		
		cout << msg[i];
	}
	cout << endl;
}
