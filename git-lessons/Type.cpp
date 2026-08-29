# include <iostream>
class Rectangle{
    public:
    Rectangle(double w, double h):width(w),height(h){}
    double width;
    double height;
    double area() const {return width * height;}
};

class Circle{
    public:
    Circle(double r):radius(r){}
    double radius;
    double circumference() const {return 2 * 3.14 * radius;}
};

int main(){
    Rectangle MyRect(5.0,8.0);
    std::cout << "Area " << MyRect.area() << std::endl;

    Circle MyCirc(10);
    std::cout << "Circum ference " << MyCirc.circumference() << std::endl;

    return 0;
}