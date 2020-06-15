 /*    
      How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	cout << "According to isdigit:\n"
		<< (isdigit('8') ? "8 is a " : "8 is not a") << "digit number"<<endl;
	cout << (isdigit('#') ? "# is a " : "# is not a") << "digit number"<<endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isalpha:\n"
		<< (isalpha('F') ? "F is a" : "F is not a") << " Letter" << endl;
	cout << (isalpha('*') ? "* is a" : "* is not a") << " Letter" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isalnum:\n"
		<< (isalnum('F') ? "F is a" : "F is not a") << " digit or Letter" << endl;
	cout << (isalnum('8') ? "8 is a" : "8 is not a") << " digit or Letter" << endl;
	cout << (isalnum('*') ? "* is a" : "* is not a") << " digit or Letter" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isxdigit:\n"
		<< (isxdigit('F') ? "F is a" : "F is not a") << " digit or Letter" << endl;
	cout << (isxdigit('8') ? "8 is a" : "8 is not a") << " digit or Letter" << endl;
	cout << (isxdigit('*') ? "* is a" : "* is not a") << " digit or Letter" << endl;


	cout << "---------------------------------------------" << endl;
	cout << "According to islower:\n"
		<< (islower('F') ? "F is a" : "F is not a") << " Lower Letter" << endl;
	cout << (islower('f') ? "f is a" : "f is not a") << " Lower Letter" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isupper:\n"
		<< (isupper('F') ? "F is a" : "F is not a") << " Upper Letter" << endl;
	cout << (isupper('f') ? "f is a" : "f is not a") << " Upper Letter" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "Convert 'n' to upper case: " << (static_cast<char>(toupper('n')))<<endl;
	cout << "Convert 'F' to lower case: " << static_cast<char>(tolower('F')) << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isspace:\n"
		<< (isspace('\n') ? "NewLine is a" : "NewLine is not a") << " White space" << endl;
	cout << (isspace('\t') ? "Horizontal tab is a" : "Horizontal tab is not a") << " White space" << endl;
	cout << (isspace('$') ? "Dollar sign is a" : "Dollar sign is not a") << " White space" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to iscntrl:\n";
	cout << (iscntrl('\t') ? "Horizontal tab is a" : "Horizontal tab is not a") << " Control character" << endl;
	cout << (iscntrl('$') ? "Dollar sign is a" : "Dollar sign is not a") << " Control character" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to ispunct:\n"
		<< (ispunct(':') ? "':' is a" : "':' is not a") << " Punctuation character" << endl;
	cout << (ispunct('\t') ? "Horizontal tab is a" : "Horizontal tab is not a") << " Punctuation character" << endl;
	cout << (ispunct('$') ? "Dollar sign is a" : "Dollar sign is not a") << " Punctuation character" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isprint:\n"
		<< (isprint(':') ? "':' is a" : "':' is not a") << " Printing character" << endl;
	cout << (isprint('\t') ? "Horizontal tab is a" : "Horizontal tab is not a") << " Printing character" << endl;
	cout << (isprint('$') ? "Dollar sign is a" : "Dollar sign is not a") << " Printing character" << endl;

	cout << "---------------------------------------------" << endl;
	cout << "According to isgraph:\n"
		<< (isgraph(':') ? "':' is a" : "':' is not a") << " Printing character" << endl;
	cout << (isgraph('\t') ? "Horizontal tab is a" : "Horizontal tab is not a") << " Printing character" << endl;
	cout << (isgraph('$') ? "Dollar sign is a" : "Dollar sign is not a") << " Printing character" << endl;



}
