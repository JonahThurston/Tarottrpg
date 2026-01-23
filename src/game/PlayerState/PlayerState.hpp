#ifndef PLAYERSTATE_H
#define PLAYERSTATE_H

#include "game/Deck/Deck.hpp"

class PlayerState {
    public:
    private:
        Deck drawPile;
        Deck discardPile;
        Deck hand;

};

#endif