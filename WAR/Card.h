#include <string>
#ifndef CARDS_H
#define CARDS_H

using namespace std;

class Card{
public:

	//Default constructor assigns random rank & suit to card.
	Card();
	~Card();
	//Accessors
	string get_rank() const;
	string get_suit() const;

	//Compare rank of two cards, e.g. Eight<Jack is true.
	//Assume Ace is always low (value 1).
	//Should use the rank2num() function.
	bool operator< (Card card2) const;

	//This function converts card rank to number.
	//Returns a number from 1 to 13.
	//Useful for comparing cards.
	//e.g. Three->3, Ace->1, King->13
	int rank2num() const;

private:
	string rank;  //Ace, Two - Ten, Jack, Queen, King
	string suit;  //Hearts, Diamonds, Clubs, Spades
};

#endif