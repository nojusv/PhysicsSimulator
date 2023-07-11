#include "SinglePendulum.h"
#include <iostream>
SinglePendulum::SinglePendulum(int screenWidth) {
	pivotPoint = screenWidth / 2;
	radius = 100;
	pendulumPoint = new Circle(50, 50, 10);
}

SinglePendulum::~SinglePendulum() {
	delete(pendulumPoint);
}
void SinglePendulum::draw(GLFWwindow* window) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_LINES);
	for (int i = 0; i < pendulumPoint->getVertices().size(); i++) {
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(-std::get<0>(pendulumPoint->getVertices()[i]), -std::get<1>(pendulumPoint->getVertices()[i]), 0.0f);
	}
	glEnd();
}

void SinglePendulum::update() {
	pendulumPoint->calcVertices();
}