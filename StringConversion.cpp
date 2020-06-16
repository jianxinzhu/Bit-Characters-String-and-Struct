  /*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	const char* s1 = "99";
	const char* s2 = "51.2% are admited";
	const char* s3 = "1234567abc";
	char* stringPtr = nullptr;
	double d = atof(s1);
	int i = atoi(s1);
	long i1 = atol(s1);
	double d2 = strtod(s2, &stringPtr);
	

	cout << "The string '99' is converted to double: " << d
		<< "\nThe value divided by 2 is:" << d / 2 << endl;

	cout << "The string '99' is converted to integer: " << i
		<< "\nThe value divided by 2 is:" << i / 2 << endl;

	cout << "The string '99' is converted to long int: " << i1
		<< "\nThe value times 100 is:" << i1 * 100 << endl;

	cout << "The string: " << s2 << " is converted to value: " << d2
		<< " and the string: " << stringPtr << endl;

	long i2 = strtol(s3, &stringPtr, 0);

	cout << "The string: " << s3 << " is converted to value: " << i2
		<< " and the string: " << stringPtr << "\nThe converted value plus 500 is: "
		<< i2 + 500 << endl;
	unsigned long i3 = strtoul(s3, &stringPtr, 0);
	cout << "The string: " << s3 << " is converted to unsigned value: " << i3
		<< " and the string: " << stringPtr << "\nThe converted value minus 500 is: "
		<< i3 - 500 << endl;
}
