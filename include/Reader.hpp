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
    Matrix& getMatrix();
protected:
    Matrix matrix;
    std::ifstream file;

    // Processes the file and creates a Matrix data structure from it. This
    // is a pure virtual function, and it is implemented differently by each
    // concrete readers.
    virtual void process() = 0;
};

#endif