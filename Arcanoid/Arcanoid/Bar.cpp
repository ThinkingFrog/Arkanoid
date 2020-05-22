#include "Bar.h"
#include "Main.h"

Bar::Bar(float x, float y, float width, float height) {
    this->x = x;
    this->y = y;
    xStart = x;
    yStart = y;
    this->width = width;
    this->height = height;
    color = sf::Color::Blue;
    xSpeed = BAR_X_SPEED;
    stick = false;
}

void Bar::Draw(std::shared_ptr <sf::RenderWindow> window) {
    sf::RectangleShape shape(sf::Vector2f(width, height));
    shape.setPosition(x, y);
    shape.setFillColor(color);

    window->draw(shape);
}

void Bar::Move() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        if (x >= 0)
            x -= xSpeed;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        if (x + width <= defaultWindowWidth)
            x += xSpeed;
    if (stick)
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            color = sf::Color::Blue;
            stick = false;
        }
}

float Bar::GetXPos() {
    return x;
}

float Bar::GetYPos() {
    return y;
}

float Bar::GetWidth() {
    return width;
}

float Bar::GetHeight() {
    return height;
}

void Bar::SetWidth(float width) {
    this->width = width;
}

void Bar::SetColor(sf::Color color) {
    this->color = color;
}

void Bar::Reset() {
    x = xStart;
    y = yStart;
}

void Bar::SetStick(bool stick) {
    this->stick = stick;
}

bool Bar::GetStick() {
    return stick;
}