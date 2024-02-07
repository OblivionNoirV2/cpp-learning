#include <iostream>
#include <cstdint> 

int main() {
    uint64_t x = 64;
    
    int64_t signedX = static_cast<int64_t>(x);

    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Working! Signed x: " << signedX;

    return 0;
}
