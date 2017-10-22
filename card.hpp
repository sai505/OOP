#pragma once
namespace card {
	enum Suit { Clubs=1, Diamonds, Hearts, Spades };
	enum Rank {
		Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
		Jack, Queen, King};
	enum Color { Black=1, Red };
}
namespace Gambling {
	class Gambling {

	};
	
	class SuitedCard:Gambling {
		
	public:
		SuitedCard(suit = card::Clubs, rank=card::Ace, Color=card::Black) {}
	private:
		card::Suit suit;
		card::Rank rank;
		card::Color color;

	};
}