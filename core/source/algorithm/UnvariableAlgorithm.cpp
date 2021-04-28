#include "algorithm/UnvariableAlgorithm.hpp"
#include "util/RandomUtil.hpp"

UnvariableAlgorithm::UnvariableAlgorithm(Context &context)
    : BaseAlgorithm(context)
{}

void UnvariableAlgorithm::load() const
{
    for (Ball &ball : getContext().getBalls())
    {
        ball.getShape().setPosition(
            RandomUtil::getFloat(
                0, static_cast<int>(static_cast<float>(getContext().getWindow().getSize().x) - ball.getRadius() * 2)
            ),
            RandomUtil::getFloat(
                0, static_cast<int>(static_cast<float>(getContext().getWindow().getSize().y) - ball.getRadius() * 2)
            )
        );
    }
}

void UnvariableAlgorithm::update() const
{
    for (Ball &ball : getContext().getBalls())
    {
        ball.getShape().move(ball.getSpeed());

        if (ball.getPosition().x >= static_cast<float>(getContext().getWindow().getSize().x) - (ball.getRadius() * 2))
        {
            ball.getSpeed().x = -ball.getSpeed().x;
        }
        else if (ball.getPosition().x <= 0)
        {
            ball.getSpeed().x = std::abs(ball.getSpeed().x);
        }

        if (ball.getPosition().y >= static_cast<float>(getContext().getWindow().getSize().y) - (ball.getRadius() * 2))
        {
            ball.getSpeed().y = -ball.getSpeed().y;
        }
        else if (ball.getPosition().y <= 0)
        {
            ball.getSpeed().y = std::abs(ball.getSpeed().y);
        }
    }
}
