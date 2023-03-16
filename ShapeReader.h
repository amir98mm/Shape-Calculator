
#ifndef SHAPECALCULATOR_SHAPEREADER_H
#define SHAPECALCULATOR_SHAPEREADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Rectangle.h"
#include "Circle.h"
using std::string;
using std::vector;
using std::ifstream;
using std::stringstream;

class FileReader {
private:
    string filename;
public:
    FileReader(string f);

    vector<Shape*> readShapes();
};

#endif //SHAPECALCULATOR_SHAPEREADER_H
