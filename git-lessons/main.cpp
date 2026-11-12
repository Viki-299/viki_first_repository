#include <iostream>
int main(){
    std::cout << "w x y z" << std::endl;
    for (int w = 0; w < 2; w++ ) {
        for (int x = 0; x < 2; x++){
            for (int y = 0; y < 2; y++){
                for (int z = 0; z < 2; z++){
                    bool f = (!(!z || x)) || (!y || w) || (!y);
                    if (!f){
                        std::cout << w << " " << x << " " << y << " " << z << '\n';
                    }

                }
            }
        }
    }
    return 0;
}