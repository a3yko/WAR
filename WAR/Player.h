#pragma once
#include <string>

using namespace std;

class Player {
public:
	//Construct Player with specified starting money.
	Player(int start_money);
	~Player();
	//Accessor
	int get_money() const;

	//Mutator updates money by specified amount.  Send negative # to decrement.
	//e.g. frodo.change_money(500); adds $500 to Frodo's total amount.
	//     frodo.change_money(-500); removes $500 from Frodo's total amount.
	void change_money(int update);

private:
	int money;  //Amount of money player has.
};