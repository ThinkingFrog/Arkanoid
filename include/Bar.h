#pragma once
#include <memory>
#include <SFML/Graphics.hpp>

/**
*Bottom bar object class
*/
class Bar {
private:
    sf::RectangleShape* bar;
    float xSpeed;   /**Needed only for moving bricks*/
    float xStart, yStart;
    bool stick; /**If ball should stick to bar on next interaction or not*/
public:
    Bar(float x, float y, float width, float height);
    ~Bar();

    void Draw(std::shared_ptr <sf::RenderWindow> window);
    
    /**Move bar using A and D keys or Left and Right arrows*/
    void Move();    

    /**Set to starting position*/
    void Reset();

    /**Return stick boolean field*/
    bool GetStick();

    float GetXPos();
    float GetYPos();
    float GetWidth();
    float GetHeight();

    void SetStick(bool stick);
    void SetWidth(float width);
    void SetColor(sf::Color color);
};

