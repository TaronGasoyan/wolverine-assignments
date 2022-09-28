#include <iostream>
#include <fstream>
#include <string>

void eraseInd(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ',') {
            str.erase(str.begin() + i);
        }
    }
}
int main() {
    std::ifstream fin;
    std::ofstream fout;
    fin.open("asm.txt");
    fout.open("output.txt");

    if (!fin.is_open()) {
        std::cout << "File isn't open" << std::endl;
    } else {
        std::string str;
        std::string str1;
        while (!fin.eof()) {
            fin >> str;
            eraseInd(str);
            fout << str << std::endl;
        }
    }
    fin.close();
    fout.close();

}
