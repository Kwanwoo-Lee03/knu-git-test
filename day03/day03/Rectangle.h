#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace Geometry {
	class Rectangle {
		double width; 
		double height;
	public:
		Rectangle(double w, double h); // 생성자
		 
		double getArea(); // 면적 계산 함수
	};
}

#endif 
