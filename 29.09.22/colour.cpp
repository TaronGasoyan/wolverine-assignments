#include <iostream>
#include <map>
#include <string>

enum class colour {red, blue, green, black};

std::string toString(const colour& col) {
    std::map<colour, std::string> colours;
    colours[colour::red] = "red";
    colours[colour::blue] = "blue";
    colours[colour::green] = "green";
    colours[colour::black] = "black";
    
    return colours[col];
}

colour toEnum(const std::string& col) {
    std::map<std::string, colour> colours;
    colours["Red"] = colour::red;
    colours["Blue"] = colour::blue;
    colours["Green"] = colour::green;
    colours["black"] = colour::black;

    return colours[col];
}

int main() {
    std::cout << toString(colour::red) << std::endl;
    std::cout << (int)toEnum("red") << std::endl;

    return 0;
}
