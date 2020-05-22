#include "BottomReflectionBonus.h"

BottomReflectionBonus::BottomReflectionBonus(float x, float y, float radius, float ySpeed) : Bonus(x, y, radius, ySpeed){
    color = sf::Color::Cyan;
    type = bottom_reflect;
}

void BottomReflectionBonus::Trigger(std::shared_ptr<Field> field, std::shared_ptr<Bar> bar, std::shared_ptr<Ball> ball) {
    ball->SetBottomReflection(true);
    ball->SetColor(sf::Color::Blue);
}
