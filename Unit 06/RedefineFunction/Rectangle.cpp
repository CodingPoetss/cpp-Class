#include"Rectangle.h"


//Rectangle::Rectangle() = default;
Rectangle::Rectangle(double w, double h, Color c, bool f) :width{ w }, height{ h }, Shape{c,f}{

}
double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double width) { this->width = width; }
double Rectangle::getHeight() const { return height; }
void Rectangle::setHeight(double height) { this->height = height; }

double Rectangle::getArea() { return width * height; }

string Rectangle::toString() {
	return ("Rectangle:width " + std::to_string(width) + ","
		+ "height " + std::to_string(height) + "," +
		colorToString() +" " + filledToString());
}