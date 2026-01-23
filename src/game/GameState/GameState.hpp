#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include <string>
#include "game/PlayerState/PlayerState.hpp"


class GameState {
    public:
        std::vector<PlayerState> players;
        std::string testPrint();
    private:
};

#endif