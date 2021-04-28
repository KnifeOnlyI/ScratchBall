#include "Ball.hpp"

Ball::Ball(float radius)
    : _shape {radius}
{
}

const sf::Vector2f &Ball::getPosition() const
{
    return _shape.getPosition();
}

sf::Vector2f &Ball::getSpeed()
{
    return _speed;
}

float Ball::getRadius() const
{
    return _shape.getRadius();
}

const sf::Color &Ball::getColor() const
{
    return _shape.getFillColor();
}

sf::CircleShape &Ball::getShape()
{
    return _shape;
}

Ball &Ball::setRadius(float radius)
{
    _shape.setRadius(radius);

    return *this;
}

Ball &Ball::setColor(sf::Uint8 r, sf::Uint8 g, sf::Uint8 b)
{
    _shape.setFillColor(sf::Color {r, g, b});

    return *this;
}
