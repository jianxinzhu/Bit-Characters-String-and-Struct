/*   name: jianxin zhu
     date: june/20/2020
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

double stringToDouble(const char *s1)
{
	float rez = 0;
	float fact = 1;
	int point_seen = 0;
	int i = 0;
	if (s1[0] == '-')
	{
		i++;
		fact = -1;
	}
	for (; s1[i]!='\0'; ++i)
	{
		if (s1[i] == '.')
		{
		    point_seen = 1;
			continue;
		}
		int d = s1[i] - '0';
		if (d >= 0 && d <= 9)
		{
			if (point_seen)
			
				fact /= 10.0f;
				rez = rez * 10.0f + (float)d;
			
		}
	}

	return rez * fact;	
}

int stringToInteger(const char* s1)
{
	int res = 0;
	int fact = 1;
	int i = 0;

	if (s1[0] == '-')
	{
		fact = -1;
		i++;
	}
	for (; s1[i] != '\0'; ++i)

		res = res * 10 + s1[i] - '0';

	return fact * res;
}


int main()
{
	const char* s1 = "1.17";
	const char* s2 = "345";

	

	cout << "Enter a string:";
	
	cout << "The string Convert To Double: " << stringToDouble(s1) << endl;
	cout << "The string Convert To Integer: " << stringToInteger(s2) << endl;



	return 0;
}
