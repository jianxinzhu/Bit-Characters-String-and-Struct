/*   name: jianxin zhu
     date: june/24/2020
*/


#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int MAX_LEN = 100;

int compare(const void* a, const void* b)
{
	return strcmp(*(const char**)a, *(const char**)b);
}

int main()
{
	char* s1[10];
	int i;
	cout << "Enter towns and Alphabetise them in order:\n";

	for (i = 0; i < 10; i++)
	{
		char* s = new char[MAX_LEN];
		fgets(s, MAX_LEN, stdin);
		s1[i] = s;

	}
	qsort(s1, 10, sizeof(char*), compare);
	cout << "The order: \n";
	for (i = 0; i < 10; i++)
	{
		cout << s1[i];
	}
	cout << endl;
}
