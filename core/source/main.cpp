#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

#include "algorithm/UnvariableAlgorithm.hpp"
#include "Context.hpp"

void load(BaseAlgorithm &algo);

void update(BaseAlgorithm &algo);

void draw(Context &context);

int main()
{
    sf::ContextSettings settings {0, 0, 16};
    sf::RenderWindow window {sf::VideoMode {640, 480}, "ScratchBall", sf::Style::None, settings};
    Context context {window, 10, 20};
    UnvariableAlgorithm algo {context};

    load(algo);

    while (window.isOpen())
    {
        while (window.pollEvent(context.getEvent()))
        {
            if (context.getEvent().type == sf::Event::Closed)
            {
                window.close();
            }
        }

        update(algo);
        draw(context);

        context.getWindow().display();
    }

    return 0;
}

void load(BaseAlgorithm &algo)
{
    algo.load();
}

void update(BaseAlgorithm &algo)
{
    algo.update();
}

void draw(Context &context)
{
    if (context.isClearScreen())
    {
        context.getWindow().clear(sf::Color::Black);
    }

    for (Ball &ball : context.getBalls())
    {
        context.getWindow().draw(ball.getShape());
    }
}