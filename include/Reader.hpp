#ifndef MLIBC_READER_H
#define MLIBC_READER_H

#include <string>
#include <fstream>
#include "Matrix.hpp"

class Reader {
public:
    // Reads the given file and loads it into memory. Here the `filename`
    // argument refers to the absolute path of the file.
    Reader(std::string filename);

    // Returns the loaded data in a Matrix data structure.
    virtual Matrix& getMatrix() = 0;
protected:
    Matrix matrix;
    std::ifstream file;
};

#endif