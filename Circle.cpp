#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath> 
#include <iostream>

Circle::Circle(int x, int y, int radius) {
	this->x = x;
	this->y = y;
	this->radius = radius;
}

void Circle::calcVertices() {
	vertices.clear();
	const float intrvl = (2 * M_PI) / precision;
	float xTemp, yTemp;
	for (int i = 0; i < precision; i++) {
		xTemp = x + radius * cos(i * intrvl);
		yTemp = y + radius * sin(i * intrvl);
		vertices.push_back(std::make_tuple(xTemp, yTemp));
	}
}

std::vector<std::tuple<float, float>> Circle::getVertices() {
	return vertices;
}