#ifndef SCRATCHBALL_CONTEXT_HPP
#define SCRATCHBALL_CONTEXT_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Event.hpp>
#include <vector>
#include <chrono>

#include "Ball.hpp"

class Context
{
public:

    explicit Context(sf::RenderWindow &window,
                     unsigned int nbBalls = 10,
                     float ballsRadius = 5,
                     float ballsSpeed = 5,
                     bool clearScreen = true);

    [[nodiscard]] sf::RenderWindow &getWindow() const;

    [[nodiscard]] sf::Event &getEvent();

    [[nodiscard]] bool isClearScreen() const;

    [[nodiscard]] std::vector<Ball> &getBalls();

private:

    sf::RenderWindow &_window;
    sf::Event _event {};
    bool _clearScreen;
    std::vector<Ball> _balls;
};

#endif //SCRATCHBALL_CONTEXT_HPP
