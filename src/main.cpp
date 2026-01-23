#include <SFML/Graphics.hpp>
#include "game/GameState/GameState.hpp"
#include <iostream>

int main()
{
    GameState game = GameState();
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Tarottrpg");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
                std::cout << game.testPrint() << std::endl;
            }
        }

        window.clear();
        window.display();
    }
}
