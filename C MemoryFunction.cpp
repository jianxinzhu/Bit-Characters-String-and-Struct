/*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[17];
	char s2[] = "Hello World";

	memcpy(s1, s2, 12);

	cout << "The String S2: " << s2 << "\nAfter memcpy(), String S1: " << s1 << endl;
	cout << "After memmove(), String 1: " << static_cast<char*>(memmove(s1, &s1[6], 5)) << endl;
	cout << "Use memcmp, return 0, when two STRING are equal."
		<< "\nreturn 1, when first STRING is greater than second STRING." 
	<< "\nreturn -1, when first STRING is lower than second STRING." << endl;

	char s3[] = "ABCDHIL";
	char s4[] = "ABCDEFG";
	cout << "The String 1: '" << s3<<"'" << " and The String 2: '" << s4 <<"'"<< endl;

	cout << "Compare the first character of two string: " << memcmp(s3, s4, 2)
		<< "\nCompare the fifth character of two string: " << memcmp(s3, s4, 5)
		<< "\nCompare the seventth character of two string: " << memcmp(s4, s3, 5)<<endl;

	cout << "Use memchr(), the remainder of string1 after searching 'D': "
		<< static_cast<char*>(memchr(s3, 'D', 8)) << endl;

	cout << "Use memset(), after setting the 'A' in string1: "
		<< static_cast<char*>(memset(s3, 'A', 4)) << endl;
}
