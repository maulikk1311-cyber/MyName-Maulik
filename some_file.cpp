#include <iostream>

consteval int GetValue(){
    return 3;
}

int main(){

    constexpr int result = GetValue();
    std::cout << result << std::endl;

    return 0;
}