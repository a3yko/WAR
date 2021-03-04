#include "stdafx.h"
#include "Card.h"
#include <time.h>
#include <iostream>
using namespace std;

Card::Card()
{
	Card first ,second;
	srand(time(NULL));
	int ranks= rand() % 13 + 1;
	int suits = rand() % 4 + 1;
	switch (ranks)
	{
	case 1:
		rank = "Ace";
		break;
	case 2:
		rank = "2";
		break;
	case 3:
		rank = "3";
		break;
	case 4:
		rank = "4";
		break;
	case 5:
		rank = "5";
		break;
	case 6:
		rank = "6";
		break;
	case 7:
		rank = "7";
		break;
	case 8:
		rank = "8";
		break;
	case 9:
		rank = "9";
		break;
	case 10:
		rank = "10";
		break;
	case 11:
		rank = "Jack";
		break;
	case 12:
		rank = "Queen";
		break;
	case 13:
		rank = "King";
		break;
	}

	switch (suits)
	{
	case 1:
		suit = "Spades";
		break;
	case 2:
		suit = "Diamonds";
		break;
	case 3:
		suit = "Clubs";
		break;
	case 4:
		suit = "Hearts";
		break;
	}

}


Card::~Card()
{
}

string Card::get_rank() const
{
	
	return rank;

}

string Card::get_suit() const
{
	return suit;
}

bool Card::operator< (Card second) const
{	
	return 0;
}


int Card::rank2num() const
{
	return 0;
}