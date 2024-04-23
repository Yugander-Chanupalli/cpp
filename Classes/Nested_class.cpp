#include <iostream>

using namespace std;
class Rectangle{
    public:
    int wid,hei;
    void display(){
        cout<< wid <<" "<< hei<<"\n";
    }
    
};
class RectangleArea : public Rectangle{
    public:
        void read_input(){
            cin >> wid >> hei;
        }
        void display(){
        cout<< wid * hei;
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


// member variables should be same to access in both base class and inherent class
