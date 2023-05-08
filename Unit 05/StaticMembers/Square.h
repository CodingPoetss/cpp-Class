#pragma once
class Square
{
private:
	double side{ 1.0 };
	static int numberOfObjects;
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	Square():Square(1.0){}

	static int getNumberOfObject() { return numberOfObjects; }
	 int getNumberOfObjectNonStatic() { return numberOfObjects; }
};


