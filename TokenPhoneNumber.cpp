/*   name: jianxin zhu
     date: june/22/2020
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char phoneNumber[100];
	const char *PhoneNumber[3] = { "Area code:","Three Digit:","Last Four Number:"};
	char sep[] = "-";
	int i = 0;
	char* nextPtr = nullptr;

	cout << "Enter Your number xxx-xxx-xxxx:";
	cin.getline(phoneNumber, 100);

	char* tokenPtr{ strtok_s(phoneNumber, sep, &nextPtr) };

	while (tokenPtr != NULL)
	{
		cout << PhoneNumber[i]<<"'"<<tokenPtr << "'\n";
		tokenPtr =  strtok_s(NULL,sep,&nextPtr);
		i++;
	}


}
