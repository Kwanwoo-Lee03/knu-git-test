#include "Rectangle.h"

// 클래스 멤버를 정의 - 클래스 멤버를 정의할 때도 namespace 안에 넣는다
namespace Geometry {
	Rectangle::Rectangle(double w, double h) { width = w; height = h; }

	double Rectangle::getArea() { return width * height; }
}