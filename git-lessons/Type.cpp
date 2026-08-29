# include <iostream>
class Rectangle{
    public:
    Rectangle(double w, double h):width(w),height(h){}
    double width;
    double height;
    double area() const {return width * height;}
}; 
int main(){
    Rectangle MyRect(5.0,8.0);
    std::cout << "Area " << MyRect.area() << std::endl;
    return 0;
}