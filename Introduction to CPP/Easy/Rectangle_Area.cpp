#include <iostream>

using namespace std;
class Rectangle {
protected:
	int x,y;

public:
	void display(){
		cout <<x<<" "<<y<<endl;
	}
};
class RectangleArea : public Rectangle {
private:

public:
	void read_input(){
		cin >>x>>y;
	}
	void display(){
		cout <<x*y;
	}
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}
