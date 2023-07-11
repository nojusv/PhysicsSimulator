#include "Circle.h"
#include <GLFW/glfw3.h>

class SinglePendulum {
private:
	int pivotPoint, radius;
	Circle* pendulumPoint;
public:
	SinglePendulum(int screenWidth);
	~SinglePendulum();
	void draw(GLFWwindow* window);
	void update();
};

