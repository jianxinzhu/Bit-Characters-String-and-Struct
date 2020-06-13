/*    How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/

#ifndef DeckOfCard_H
#define  DeckOfCard_H

#include<array>
#include<string>
using namespace std;

struct Card
{
	string face;
	string suit;
};

class DeckOfCard
{
public:
	static const int numberOfCard = 52;
	static const int face = 13;
	static const int suit = 4;

	DeckOfCard();
	void shuffle();
	void deal() const;

private:
	array<Card, numberOfCard> deck;
};
#endif
