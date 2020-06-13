/*    How To Program C++ 10th Edition
      Author: Paul Deitel, Harvey Deitel
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include"DeckOfCard.h"

DeckOfCard::DeckOfCard()
{
	static string suits[suit] = { "Hearts", "Diamonds","Clubs","Spades" };
	static string faces[face] = { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight",
	"Nine","Ten","Jack","Queen","King" };
	for (size_t i = 0; i < deck.size(); ++i)
	{
		deck[i].face = faces[i % face];
		deck[i].suit = suits[i / face];
	 }
	srand(static_cast<size_t>(time(nullptr)));
}
void DeckOfCard::shuffle()
{
	for (size_t i = 0; i < deck.size(); ++i)
	{
		int j{ rand() % numberOfCard };
		Card temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}
void DeckOfCard::deal() const
{
	for (size_t i = 0; i < deck.size(); ++i)
	{
		cout << right << setw(5) << deck[i].face << " of "
			<< left << setw(8) << deck[i].suit << ((i + 1) % 2 ? '\t':'\n');
	}
}
