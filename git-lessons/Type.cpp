# include <iostream>

class Pair{
        public:
            Pair(int a, int b) : first(a), second(b){}
        private:
            int first;
            int second;
    };

struct Point {
        int x;
        int y;
    };

int main(){
    
    Point p;
    p.x = 10;
    p.y = 5;
 
    Pair a(10, 20);

    return 0;
    




}