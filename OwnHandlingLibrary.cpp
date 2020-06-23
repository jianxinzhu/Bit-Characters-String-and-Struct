/*   name: jianxin zhu
     date: june/19/2020
 */
 
 #include<iostream>
#include<iomanip>


using namespace std;

bool isDigit(char c)
{
	c = static_cast<int>(c);

	if (c >= 48 && c <= 57)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isAlpha(char c)
{
	c = static_cast<int>(c);

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isAlNum(char c)
{
	c = static_cast<int>(c);
	if (isDigit(c) == 1 || isAlpha(c) == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isLower(char c)
{
	c = static_cast<int>(c);
	if (c >= 97 && c <= 122)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isUpper(char c)
{
	c = static_cast<int>(c);
	if (c >= 65 && c <= 90)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int tolower(char c)
{
	static_cast<int>(c);
	if (c >= 65 && c < 90)
	{
		c = c + 32;
		return c;
	}
	else
	{
		return false;
	}
}

int toUpper(char c)
{
	static_cast<int>(c);
	if (c >= 97 && c < 122)
	{
		c = c - 32;
		return c;
	}
	else
	{
		return false;
	}
}
bool isspace(char c)
{
	static_cast<int>(c);
	if (c >= 0 && c <= 40)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char number;
	cout << "Enter a digit number:";
	cin >> number;

	cout << "The number is" << (isDigit(number) ? " a digit number." : " not a digit number") << endl;
	cout << "The number is" << (isAlpha(number) ? " a  Alpha." : " not a Alpha") << endl;
	cout << "The number is" << (isAlNum(number) ? " a digit or Alpha." : " not a digit or Alpha") << endl;
	cout << "The number is" << (islower(number) ? " a lower letter." : " not a lower letter") << endl;
	cout << "The number is" << (isUpper(number) ? " a upper letter." : " not a upper letter") << endl;
	cout << "The number is: '" << number << "' convert to lower case: " << static_cast<char>(tolower(number)) << endl;
	cout << "The number is: '" << number << "' convert to upper case: " << static_cast<char>(toUpper(number)) << endl;
	cout << "The number is" << (isspace(number) ? " a space." : " not a space") << endl;


}

