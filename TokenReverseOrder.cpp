/*   name: jianxin zhu
     date: june/21/2020
 */
 
 
 #include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
	char sentence[100];
	char* strPtr = nullptr;
	char* Pointer[50];

	char sep[] = " ";
	int count = 0, i;


	cout << "Enter a line of text, then tokenized in reverse order:";
	cin.getline(sentence, 100);

	char* tokenPtr = strtok_s(sentence, sep, &strPtr);



	while (tokenPtr != NULL)
	{
		cout << tokenPtr << "\n";
		Pointer[count] = tokenPtr;
		tokenPtr = strtok_s(NULL, sep, &strPtr);
		count++;

	}

	cout << "The reverse order of your text:\n";

	for (i = count-1; i >= 0; i--)
	{
		cout << Pointer[i] << " ";
	}


}
