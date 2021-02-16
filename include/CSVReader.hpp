#ifndef MLIBC_CSVREADER_H
#define MLIBC_CSVREADER_H

#include <string>
#include "Reader.hpp"

class CSVReader: public Reader {
public:
    CSVReader(std::string filename);
protected:
    virtual void process();
};

#endif
