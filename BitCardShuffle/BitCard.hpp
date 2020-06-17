/*    name: jianxin zhu
      date: 17/june/2020
*/

#ifndef DecksOfCard_H
#define DecksOfCard_H
#include<array>

struct  bitCard
{
	unsigned face : 4;
	unsigned suit : 2;
	unsigned color : 1;
};

class DecksOfCard
{
public:
	static const int faces = 13;
	static const int color = 2;
	static const int numberOfCard = 52;

	DecksOfCard();
	void deal() const;
	void shuffleCard();

private:
	std::array<bitCard, numberOfCard>deck;
};
#endif
