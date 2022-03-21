#include <iostream>
using namespace std;

struct Test
{
	int color, man, power, free_time, planet;
};
int obr(int a[])
{
	int b = 0;
	for (int i = 0; i < 4; i++)
	{
		if (a[i] > b)
		{
			b = i;
		}
	}
	return b;
}
void res(int a)
{
	if (a == 0)
	{
		cout << "You Stella!!!!";

	}
	if (a == 1)
	{
		cout << "You Bloom!!!!";

	}
	if (a == 2)
	{
		cout << "You Musa!!!!";

	}
	if (a == 3)
	{
		cout << "You Flora!!!!";

	}
	
}
int main()
{
	setlocale(00, "");

	Test fairy;
	int arr[4]{0,0,0,0};
	

	cout << "Your favorite color ? " << endl;
	cout << "Press 1 for Green" << endl << "Press 2 for Blue" << endl << "Press 3 for Red" << endl << "Press 4 for Black" << endl;
	cin >> fairy.color;
	
	cout << "What is your favorite man-fairy?" << endl;
	cout << "Press 1 for Sky" << endl << "Press 2 for Brandon" << endl << "Press 3 for Timmy" << endl << "Press 4 for Riven" << endl;
	cin >> fairy.man;

	cout << "What kind of power do you want to possess?" << endl;
	cout << "Press 1 for magic of nature" << endl << "Press 2 for magic of fire" << endl << "Press 3 for magic of light" << endl << "Press 4 for tehnomagic" << endl;
	cin >> fairy.power;

	cout << "What do you do in your free time?" << endl;
	cout << "Press 1 for sing" << endl << "Press 2 for dance" << endl << "Press 3 for Study" << endl << "Press 4 for use computer" << endl;
	cin >> fairy.free_time;

	cout << "What planet would you like to live on" << endl;
	cout << "Press 1 for Andros" << endl << "Press 2 for Domino " << endl << "Press 3 for Zenith" << endl << "Press 4 for Linphea " << endl;
	cin >> fairy.planet;
	

	if (fairy.color == 1)
	{
		arr[0]++;
	}
	if (fairy.color == 2)
	{
		arr[1]++;
	}
	if (fairy.color == 3)
	{
		arr[3]++;
	}
	if (fairy.color == 4)
	{
		arr[0]++;
	}
	if (fairy.man == 1)
	{
		arr[1]++;
	}
	if (fairy.man == 2)
	{
		arr[2]++;
	}
	if (fairy.man == 3)
	{
		arr[3]++;
	}
	if (fairy.man == 4)
	{
		arr[0]++;
	}
	if (fairy.power == 1)
	{
		arr[2]++;
	}
	if (fairy.power == 2)
	{
		arr[3]++;
	}
	if (fairy.power == 3)
	{
		arr[1]++;
	}
	if (fairy.power == 4)
	{
		arr[0]++;
	}
	if (fairy.free_time == 1)
	{
		arr[1]++;
	}
	if (fairy.free_time == 2)
	{
		arr[0]++;
	}
	if (fairy.free_time == 3)
	{
		arr[3]++;
	}
	if (fairy.free_time == 4)
	{
		arr[2]++;
	}
	if (fairy.planet == 1)
	{
		arr[2]++;
	}
	if (fairy.planet == 2)
	{
		arr[0]++;
	}
	if (fairy.planet == 3)
	{
		arr[1]++;
	}
	if (fairy.planet == 4)
	{
		arr[3]++;
	}
	
	int Max= obr(arr);
	res(Max);
	
}
