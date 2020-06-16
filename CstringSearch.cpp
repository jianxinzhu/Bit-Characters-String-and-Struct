 /*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	const char* string1 = "This is a test";
	const char* string2 = "The Pi is 3.14159";
	const char* string3 = "123456789";
	const char* string4 = "Hello World, Welcome to C++";
	const char* string5 = "Welcome to C++";
	char character1 = 'a';
	char character2 = 'z';

	if (strchr(string1, character1) != NULL)
	{
		cout << "'" << character1 << "' is found in " << string1 << endl;
	}
	else
	{
		cout << "'" << character1 << "' is not found in " << string1 << endl;
	}

	if (strrchr(string1, character2) != NULL)
	{
		cout << "'" << character2 << "' is found in  " << string1 << endl;
	}
	else
	{
		cout << "'" << character2 << "' is not found in " << string1 << endl;
	}

	cout << "The String: " << string2 << "\nThe length of the initial segment of string3: " << string3
		<< "\ncontaining no characters from String: " << strcspn(string2, string3) << endl;

	cout << "The first character: " << *strpbrk(string2, string3) << " is appear in string: " << string2 << endl;

	cout << "The first String: " << string4 << "\nThe second String: " << string5 << "\nThe remainder of string 1 beginning with \nfirst occurence of string2 is: "
		<< strstr(string4, string5) << endl;





}
