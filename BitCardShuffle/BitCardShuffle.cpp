/*   name: jianxin zhu
     date: 17/june/2020
*/

#include<iostream>
#include<iomanip>
#include<random>
#include"DecksOfCard.h"


using namespace std;

DecksOfCard::DecksOfCard()
{
	for (size_t i = 0; i < deck.size(); ++i)
	{
		deck[i].face = i % faces;
		deck[i].suit = i / faces;
		deck[i].color = i / (faces * color);
	}
}
void DecksOfCard::deal() const
{
	for (size_t k1 = 0, k2 = (k1 + deck.size() / 2); k1 < deck.size() / 2 - 1; ++k1, ++k2)
	{
		cout << "Card: " << setw(3) << deck[k1].face
			<< " Suit: " << setw(2) << deck[k1].suit
			<< " Color: " << setw(2) << deck[k1].color
			<< "   " << "Card: " << setw(3) << deck[k2].face
			<< " Suit: " << setw(2) << deck[k2].suit
			<< " Color: " << setw(2) << deck[k2].color << endl;
	}
}
void DecksOfCard::shuffleCard()
{
	for (size_t i = 0; i < deck.size(); ++i)
	{
		int j = rand() % numberOfCard;
		bitCard temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}
int main()
{
	DecksOfCard card;
	card.shuffleCard();
	card.deal();
}
