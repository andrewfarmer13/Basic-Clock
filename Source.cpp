#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

int main()
{
	int s;
	int m;
	int h;

	cout << "Enter the time(in hour min sec format): ";
	cin >> h >> m >> s;

	while (1)
	{
		if (h >= 13)
		{
			h = 1;
		}
		else if (m >= 60)
		{
			m = 0;
			h++;
		}
		else if (s >= 60)
		{
			s = 0;
			m++;
		}

		cout << "Clock: " << endl;
		cout << h << ":" << m << ":" << s;

		Sleep(1000);
		s++;
		system("cls");
	}
}