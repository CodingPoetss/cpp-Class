#pragma once
#include<string>
class Vec2D
{
private:
	double x_;
	double y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
	// 将向量使用字符串的形式表示
	std::string toString();
	// 向量相加
	Vec2D add(Vec2D secondVec2D);
	Vec2D subtract(Vec2D secondVec2D);
	double dot(Vec2D secondVec2D);
	Vec2D multiply(double multiplier);
	Vec2D negative();
};

