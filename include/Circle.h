#pragma once

class Circle {
private:
	double radius;
	double ference;
	double area;
	static const double pi;
public:
	Circle(double);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
};