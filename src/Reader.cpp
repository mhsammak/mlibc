#include <string>
#include <fstream>
#include <filesystem>
#include "../include/Matrix.hpp"
#include "../include/Reader.hpp"

Reader::Reader(std::string filename) {
    file.open(filename, std::ios::in);
    if (file.is_open()) {
        process();
        file.close();
    } else {
        throw "Error occured while reading file!";
    }
}

Matrix& Reader::getMatrix() {
    return matrix;
}
