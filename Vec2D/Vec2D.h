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
	// ������ʹ���ַ�������ʽ��ʾ
	std::string toString();
	// �������
	Vec2D add(Vec2D secondVec2D);
	Vec2D subtract(Vec2D secondVec2D);
	double dot(Vec2D secondVec2D);
	Vec2D multiply(double multiplier);
	Vec2D negative();
};

