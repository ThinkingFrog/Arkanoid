#pragma once
#include <SFML/Graphics.hpp>

class Bar {
private:
    float width, height;
    float x, y;
    sf::Color color;
public:
    Bar(float x, float y, float width, float height);
    ~Bar() {}
    void Draw(std::shared_ptr <sf::RenderWindow> window);
};

