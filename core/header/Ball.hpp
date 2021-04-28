#ifndef SCRATCHBALL_BALL_HPP
#define SCRATCHBALL_BALL_HPP

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>

class Ball
{
public:

    explicit Ball(float radius = 10.0);

    [[nodiscard]] const sf::Vector2f &getPosition() const;

    [[nodiscard]] sf::Vector2f &getSpeed();

    [[nodiscard]] float getRadius() const;

    [[nodiscard]] const sf::Color &getColor() const;

    [[nodiscard]] sf::CircleShape &getShape();

    Ball &setRadius(float radius);

    Ball &setColor(sf::Uint8 r, sf::Uint8 g, sf::Uint8 b);

private:

    sf::Vector2f _speed {1, 1};
    sf::CircleShape _shape;
};

#endif //SCRATCHBALL_BALL_HPP
