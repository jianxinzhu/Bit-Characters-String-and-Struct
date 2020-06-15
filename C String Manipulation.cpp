/*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char x[40]{ "Welcome to C++" };
	char s[]{ ", Here is a Visual World" };
	char y[25];
	char z[40];

	strcpy_s(y, x);
	cout << "The 'x' string: " << x << endl;
	cout << "The 'y' string: " << y << endl;

	strncpy_s(z, x, 7);
	z[8] = '\0';

	cout << "The 'z' string: " << z << endl;

	strcat_s(x, s);

	cout << "After strcat_s, The 'x' string: " << x << endl;

	strncat_s(z, s, 6);
	cout << "After strcat_s, the 'z' string: " << z << endl;

	const char *s1 = "Welcome to New York";
	const char *s2 = "Welcome to New York";
	const char *s3 = "Welcome to Boston";

	cout << "---------------------------------------\n";
	cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns4 = " << s3 << endl;
	cout << "strcmp(s1, s2) =" << strcmp(s1, s2) << "\nstrcmp(s1, s3) = "
		<< strcmp(s1, s3) << "\nstrcmp(s3, s1) =" << strcmp(s3, s1) << endl;

	char sentence[]{ "Hello World Welcome to C++" };
	char sep[] = " ";
	char* next_token;
	cout << "The sentence is: " << sentence << ", The length is = " << strlen(sentence) << endl;
	cout << "The sentence will be tokenizaed is:\n"
		<< sentence << "\nThe token are:\n";

	char* tokenPtr{ strtok_s(sentence, sep, &next_token) };

	while (tokenPtr != NULL)
	{
		cout << tokenPtr << "\n";
		tokenPtr = strtok_s(NULL, sep, &next_token);
	}
}
