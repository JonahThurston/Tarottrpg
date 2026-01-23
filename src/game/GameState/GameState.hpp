#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include <string>
#include "game/PlayerState/PlayerState.hpp"
#include "game/Deck/Deck.hpp"
#include "game/CardDefinition/CardDefinition.hpp"

class GameState {
    public:
        void addCardToPlayer(CardDefinition card);
        void playCard();
        Deck peekDrawPile();
        Deck peekDiscardPile();
        Deck seeHandPile();
    private:
        std::vector<PlayerState> players;
        std::string testPrint();
        int selectedPlayerIndex = 0;
};

#endif