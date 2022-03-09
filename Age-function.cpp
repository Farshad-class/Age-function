#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void farshad(int a, int b, int c)
{
	int yy = (1400 - a);
	int mm = (12 - b);
	int dd=0;
	if (b >= 1 && b <= 6)
	{
		dd = (31 - c);
	}
	else if (b >= 7 && b <= 11)
	{
		dd = (30 - c);
	}
	else {
		dd = (29 - c);
	}
	cout << "You have " << yy << " years and " << mm << " month " << dd << " days" << endl;
}
int main()
{
	int y, m, d;
	cout << "please enter Year of birth :" << endl;
	cin >> y;
	if (y > 1400)
		do
		{
			{
				cout << "Please enter year less than or equal to this year " << endl;
				cin >> y;
			}
		} while (y > 1400);
		cout << "please enter Month of birth:" << endl;
		cin >> m;
		if (m <= 0 || m > 12)
			do
			{
				{
					cout << "Please enter month less than or equal 12  and greater than 0 " << endl;
					cin >> m;
				}
			} while (m <= 0 || m > 12);
			cout << "please enter day of birth:" << endl;
			cin >> d;
			if (d <= 0 || m > 31)
				do
				{
					{
						cout << "Please enter day less than or equal 31  and greater than 0" << endl;
						cin >> d;
					}
				} while (d <= 0 || m > 31);

				farshad(y, m, d);
}