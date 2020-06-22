/*   name: jianxin zhu
     date: june/21/2020
*/

#include<iostream>
#include<string>
#include<random>
#include<ctime>

using namespace std;




int main()
{
	string s1;
	int randNumber[6];
	const char* article[] = { "the","a","one","some","any" };
	const char* noun[] = { "boy","girl","dog","town","car" };
	const char* verb[] = { "drove","jumped","ran","walked","skipped" };
	const char* preposition[] = { "to","from","over","under","on" };

	default_random_engine gen{ static_cast<unsigned int>(time(nullptr)) };
	uniform_int_distribution<unsigned int>RandomNumber{ 0,4 };

	for (int i = 0; i < 6; ++i)
	{
		int j = RandomNumber(gen);
		randNumber[i] = j;
	}

	s1 = s1 + article[randNumber[0]] + " " + noun[randNumber[1]] + " " +
		verb[randNumber[2]] + " " + preposition[randNumber[3]] + " " + article[randNumber[4]]
		+ " " + noun[randNumber[5]];

	cout << "The Short Story is: " << s1 << endl;
	


	

}
