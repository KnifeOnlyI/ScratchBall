#include <iostream>

#include "Context.hpp"

Context::Context(
    sf::RenderWindow &window,
    unsigned int nbBalls,
    float ballsRadius,
    float ballsSpeed,
    bool clearScreen
)
    : _window {window}, _clearScreen {clearScreen}
{
    _window.setFramerateLimit(60);

    for (unsigned int i {0}; i < nbBalls; i++)
    {
        _balls.emplace_back(ballsRadius);

        _balls[i].getSpeed().x = ballsSpeed;
        _balls[i].getSpeed().y = ballsSpeed;
    }
}

sf::RenderWindow &Context::getWindow() const
{
    return _window;
}

sf::Event &Context::getEvent()
{
    return _event;
}

bool Context::isClearScreen() const
{
    return _clearScreen;
}

std::vector<Ball> &Context::getBalls()
{
    return _balls;
}
