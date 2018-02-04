#include <iostream>
#include <random>

using namespace std;

    enum card_suits{HEARTS, DIAMONDS, CLUBS, SPADES};
    enum ranks{ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

    random_device random_number_generator;
    mt19937 seed_random(random_number_generator());
    uniform_int_distribution<int> suits(0,3);
    uniform_int_distribution<int> ranks(0,12);

class Cards {
    public:
        virtual void draw() = 0;
};

class Hearts: public Cards {
    public:
        void draw()
        {
            cout << card_suits(0) << " of " << ranks(seed_random) << endl;
        }
};

class Diamonds: public Cards {
    public:
        void draw()
        {
            cout << card_suits(1) << " of " << ranks(seed_random) << endl;
        }
};

class Clubs: public Cards {
    public:
        void draw()
        {
            cout << card_suits(2) << " of " << ranks(seed_random) << endl;
        }
};

class Spades: public Cards {
    public:
        void draw()
        {
            cout << card_suits(3) << " of " << ranks(seed_random) << endl;
        }
};

class Card_Factory {
    public:
        Cards *draw_card(card_suits suits)
        {
            Cards *card = NULL;

            switch(suits)
            {
            case HEARTS:
                card = new Hearts();
                break;
            case DIAMONDS:
                card = new Diamonds();
                break;
            case CLUBS:
                card = new Clubs();
                break;
            case SPADES:
                card = new Spades();
                break;
            default:
                card = NULL;
                break;
            }
            return card;
        }
};

int main()
{
    Card_Factory *card_factory = new Card_Factory();

    for (int i = 0; i < 5; i++) {
    Cards *card = card_factory->draw_card(card_suits(suits(seed_random)));

    cout << "Your " << (i + 1) << "." << " card is: ";
    if (card)
        card->draw();
    else
        cout << "There is no such card.";
    }

    return 0;
}
