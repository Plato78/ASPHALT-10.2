#pragma once
#include "settings.h"
struct Car {
	sf::Texture texture;
	sf::Sprite sprite;
};
void carInit(Car& car, sf::Vector2f pos, std::string fileName, float offset) {
	car.texture.loadFromFile(fileName);
	car.sprite.setTexture(car.texture);
	car.sprite.setPosition(pos);
}
void CarDrive(Car& car) {
	car.sprite.move(0.f, car_speed);
	if (car.sprite.getPosition().y >= height) {
		car.sprite.setPosition(0.f , 0.f);
	}
}
void CarDraw(sf::RenderWindow& window, const Car& car) {
	window.draw(car.sprite);
}
