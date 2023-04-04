#include<iostream>
using namespace std;

class Point // class name
{
private:
	int x, y;
public:
	Point(int x1, int y1) { x = x1; y = y1; } //Constructor

	// Copy constructor
	// classname(const classname &old_obj)
	Point(const Point &p1) {x = p1.x; y = p1.y; }
	

	int getX()		 { return x; } //member functions
	int getY()		 { return y; } //member functions
};

int main()
{
	Point p1(30, 105); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here, initialized p2 using p1
	Point p3 = p2;
	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); // 10 & 15
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY(); // 10 & 15
	cout << "\np3.x = " << p3.getX() << ", p3.y = " << p3.getY();

	return 0;
	//Shallow Copy
}

