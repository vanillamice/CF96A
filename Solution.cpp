#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
int main() {
	
	string team;
	int counter = 1;
 
	cin >> team;
 
	bool yardo = false;
 
	for (int i = 0; i<team.size(); i++) {
 
		if (i > 0 && team[i] == team[i - 1]) 
		{
			counter++;
		}
		else 
		{
			counter = 1;
		}
 
		if (counter == 7)
		{
			yardo = true;
		}
	}
 
	if (yardo == true) 
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
