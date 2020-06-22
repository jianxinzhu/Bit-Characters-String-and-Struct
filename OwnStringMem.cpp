/*   name: jianxin zhu
     date: june/21/2020
*/

#include<iostream>

using namespace std;

void* memCopy(void* s1, const void* s2, size_t n)
{
	char* sa = (char*)s1;
	const char* sb = (char*)s2;

	for (int i = 0; i < n; ++i)
	{
		sa[i] = sb[i];
	}

	return (void*)s1;

}
void* memMove(void* s1, const void* s2, size_t n) 
{
	char* sa = (char*)s1;
	char* sb = (char*)s2;

	char* temp = new char[n];

	for (unsigned int i = 0; i < n; ++i)
	{
		temp[i] = sb[i];
		sa[i] = temp[i];
	}
	delete []temp;

	return (void*)s1;
}
int memCmp(const void* s1, const void* s2, size_t n)
{
	char* sa = (char*)s1;
	const char* sb = (char*)s2;

	if (n != 0)
	{
		while (--n != 0)
		{
			if (*sa++ != *sb++)
			{
				return *--sa - *--sb;
			}
		}
	}
	return 0;
}

int main()
{
	char s1[17];
	char s2[] = "home sweet home";

	memCopy(s1, s2, 17);
	cout << "After memCopy(), s1 contain: " << s1 << endl;
	cout << "After memMove(), s2 contain: " << static_cast<char*>(memCopy(s2, &s2[5], 10)) << endl;
	cout << "Use memCmp(), compare s1 and s2 in 10th character: " << memCmp(s1, s2, 10) << endl;
}
