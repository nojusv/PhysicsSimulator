#include <vector>

class Circle {
private:
	int x, y, radius;
	const int precision = 20;
	std::vector<std::tuple<float, float>> vertices;
public:
	Circle(int x, int y, int radius);
	void calcVertices();
	std::vector<std::tuple<float, float>> getVertices();
};