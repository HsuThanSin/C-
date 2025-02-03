#include <iostream>
using namespace std;
//Base Class Shape
class Shape {
public:
    void setWidth(int W) {
            width = w;
    }
    void setWidth(int h) {
            height = h;
    }
protected:
    int width;
    int height;

};
//Base class PaintCosts
class PaintCost{
public:
    int getCost(int area) {
        return area * 70;
    }
};
//Derive Class Rectangle
class Rectangle: public Shape, public PaintCost{
public:
    int getArea() {
        return(width * height);
    }
};

int main()
{
    Rectangle Rect;
    int area;
    Rect.secWidth(5)
    Rect.setHeight(7);
    area = Rect.getArea();
    cout << "Total Area:" << Rect.getArea()<<endl;
    cout << "Total paint cost: $"<<Rect.getCost(area)<< endl;
    return 0;
}
