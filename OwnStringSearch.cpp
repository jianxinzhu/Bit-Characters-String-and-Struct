/*  name: jianxin zhu
    date: june/21/2020
*/

#include<iostream>
#include<string>

using namespace std;

char* strchr(const char* s1, char s)
{
	for (; *s1; ++s1)
	{
		if (*s1 == s)
		{
			return (char*)s1;
		}
	}
	return nullptr;
}
string strrchr(const char* s1, char s)
{
	int length = strlen(s1);
	string remainder = "";
	int location = 0;

	for (int i = length -1; s1[i] != 0; --i)
	{
		if (s1[i]==s)
		{
			location = i;
			for (; s1[location] != '\0';location++)
			{
				remainder += s1[location];
			}
			return remainder;
			
		}
	}
	return remainder;
}

int strpn(const char* s1, const char* s2)
{
	int i, j;
	int location = 0;

	for (i = 0; s1[i]; ++i)
	{
		for (j = 0; s2[j]; ++j)
		{
			if (s1[i] == s2[j])
			{
				location = i;
				break;
			}
		}
		if (location)
		{
			break;
		}

	
	}
	return location;
}
char* strbrk(const char* s1,  const char* s2)
{
	
	for (; *s1; s1++)
	{
		if (strchr(s2, *s1))
		{
			return (char*)s1;
		}
	}
	return nullptr;
}

char* strstr1(const char* s1, const char* s2)
{
	for (; *s1; s1++)
	{
		const char* sa = s1;
		const char* sb = s2;

		for (; *sb; ++sa, ++sb)
		{
			if (*sa != *sb)
			{
				break;
			}
		}
		if (!*sb)
		{
			return(char*)s1;
		}
	}
	return nullptr;
}

int main()
{
	const char* s1 = "this is a to new york";
	const char* s2 = "bewre";
	const char* string1 = "abcdefghijk";
	const char* string2 = "def";
	char s = 't';

	if (strchr(s1, s) != "")
	{
		cout << "The character: '" << s << "' found in: \"" << s1 << "\"" << endl;
	}
	else
	{
		cout << "The character: '" << s << "' does not found in: \"" << s1<<"\"" << endl;
	}

	cout << "The length of segement  of String: '" << s1 << "' contain no character form String: '" << s2
		<< "' in: " << strpn(s1, s2) << endl;

	cout << "The String: '" << s2 << "' of character: '" << *strbrk(s1, s2) << "' is the first character "
		<< "to appear in '" << s1 << "'" << endl;

	cout << "The remainder of string beginning with last occurrence of character: '" << s << "' is: "
		<< strrchr(s1, s) << endl;

	cout << "The remainder of strign1 begin with the first occurrence of string 2 is: " << strstr1(string1, string2)
		<< endl;
}
