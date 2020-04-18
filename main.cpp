#include <iostream>

int main() {
    std::cout << "P3\n3 100\n255\n";

    for (int i=0;i<100;i++){
        std::cout << "255 0 0 0 255 0 0 0 255\n";
    }
}