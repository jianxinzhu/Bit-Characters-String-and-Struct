/*   name: jianxin zhu
     date: june/24/2020
     
 */
 
 
#include<iostream>
using namespace std;
const int SIZE = 100;

void strCopyArray(char s1[], const char s2[])
{
	int i = 0;
	for (; s2[i] != '\0'; ++i)
	{
		s1[i] = s2[i];
	}
}
char* strCopyPoint(char *s1, const char *s2)
{
	char* ptr = s1;

	for (; (*ptr = *s2)!='\0'; ++ptr, ++s2)
	{
	}
	return ptr;
}
void strCatArray(char s1[], char s2[])
{
	int length = strlen(s1);
	int i = 0;
	for (; s2[i] != '\0'; ++i)
	{
		s1[length] = s2[i];
		length++;
	}

}
char* strCatPoint(char* s1, const char* s2)
{
	char* ptr = s1;
	for (; *ptr; ++ptr);

	while (*ptr++ = *s2++);
	*ptr = '\0';

	return ptr;
}
int main()
{
	char s1[100] = "Hello World";
	char s2[15] = "\0";
	char s3[20] = " Welcome to C++";

	const char* word = "Visual World";
	char* copyWord;
	copyWord = new char(100);

	cout << "Two string contain: '" << s1 << "' and '" << s2 << "'" << endl;

	strCopyArray(s2, s1);
	cout << "After strCopyOwn(): s1: '" << s1 << "' and s2: '"  << s2 << "'" << endl;

	strCatArray(s1, s3);
	cout << "After strCatOwn(), s1 contain: " << s1 << endl;

	strCopyPoint(copyWord, word);
	cout << "After strCopyPoint(): " << copyWord << endl;

	strCatPoint(copyWord, word);
	cout << "After strCatPoint(): " << copyWord << endl;
}
