#include <iostream>
#include <fstream>
#include "ShapeReader.h"
using std::cout;
using std::endl;

const string FILE_BATH = "C:\\Users\\User\\Desktop\\ShapeCalculator\\Shapes.txt";
const string OUT_BATH = "C:\\Users\\User\\Desktop\\ShapeCalculator\\output.txt";

int main() {
    FileReader reader(FILE_BATH);
    vector<Shape*> shapes = reader.readShapes();
    std::ofstream outfile(OUT_BATH);

    for (auto shape : shapes) {
        shape->display();
        cout << "Area: " << shape->area() << endl;
        outfile << "Area: " << shape->area() << std::endl;
    }

    // Clean up memory
    for (auto shape : shapes) {
        delete shape;
    }
    shapes.clear();
    outfile.close();

    return 0;
}