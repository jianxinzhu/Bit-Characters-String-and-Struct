/*  name: jianxin zhu
    date: june/24/2020
*/


#include<iostream>

using namespace std;

int strCompare(const char s1[], const char s2[])
{
	int i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		++i;
	}
	return s1[i] - s2[i];

}

int strComparePointer(const char* s1, const char* s2)
{

	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
int strLen(const char* s1)
{
	int i = 0;
	for (; s1[i] != '\0'; ++i);
	return i;
}

int main()
{
	char s1[20] = "Hello, Welcome";
	char s2[20] = "Hello, Welcome";

	const char* word = "Hello";
	const char* word2 = "Hello";

	cout << "Compare s1 and s2:" << strCompare(s1, s2) << endl;

	cout << "Compare s1 and s2:" << strComparePointer(word, word2) << endl;

	cout << "The length of s1: " << strLen(s1) << endl;

}
