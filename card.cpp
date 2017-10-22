#include "card.hpp"

SuitedCard::SuitedCard() {
	c_vector.reserve(52);
	c_vector = {
		{ Ace, Spades,Black },{ Two, Spades,Black },{ Three, Spades,Black },{ Four, Spades,Black },{ Five, Spades,Black },
		{ Six, Spades,Black },{ Seven, Spades,Black },{ Eight, Spades,Black },{ Nine, Spades,Black },{ Ten, Spades,Black },
		{ Jack, Spades,Black },{ Queen, Spades,Black },{ King, Spades,Black },

		{ Ace, Clubs,Black },{ Two, Clubs,Black },{ Three, Clubs,Black },{ Four, Clubs,Black },{ Five, Clubs,Black },
		{ Six, Clubs,Black },{ Seven, Clubs,Black },{ Eight, Clubs,Black },{ Nine, Clubs,Black },{ Ten, Clubs,Black },
		{ Jack, Clubs,Black },{ Queen, Clubs,Black },{ King, Clubs,Black },

		{ Ace, Hearts,Red },{ Two, Hearts,Red },{ Three, Hearts,Red },{ Four, Hearts,Red },{ Five, Hearts,Red },
		{ Six, Hearts,Red },{ Seven, Hearts,Red },{ Eight, Hearts,Red },{ Nine, Hearts,Red },{ Ten, Hearts,Red },
		{ Jack, Hearts,Red },{ Queen, Hearts,Red },{ King, Hearts,Red },

		{ Ace, Diamonds,Red },{ Two, Diamonds,Red },{ Three, Diamonds,Red },{ Four, Diamonds,Red },{ Five, Diamonds,Red },
		{ Six, Diamonds,Red },{ Seven, Diamonds,Red },{ Eight, Diamonds,Red },{ Nine, Diamonds,Red },{ Ten, Diamonds,Red },
		{ Jack, Diamonds,Red },{ Queen, Diamonds,Red },{ King, Diamonds,Red },

		{ None, Joker, Black },{ None, Joker, Red } };
}

SuitedCard::SuitedCard(Suit s = Clubs, Rank r = Ace, Color c = Black) {
	assert (c_vector.size == 52) {
		std::cout << "full deck" << std::endl;

}



