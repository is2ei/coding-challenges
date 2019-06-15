#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {

    public:
    void display() {
        cout << width << " " << height << endl;
    }
    int width;
    int height;
};

class RectangleArea : public Rectangle {
    public:
        void display() {
            cout << width * height << endl;
        }
        void read_input() {
            int _width;
            cin >> _width;
            this->width = _width;
            int _height;
            cin >> _height;
            this->height = _height;
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
