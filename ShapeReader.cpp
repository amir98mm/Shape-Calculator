#include "ShapeReader.h"

FileReader::FileReader(string f) : filename(f) {}

vector<Shape*> FileReader::readShapes() {
    vector<Shape*> shapes;
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        string type;
        double param1, param2;
        stringstream ss(line);
        ss >> type >> param1 >> param2;
        Shape* shape;
        if (type == "rectangle") {
            shape = new Rectangle(param1, param2);
        } else if (type == "circle") {
            shape = new Circle(param1);
        } else {
            continue;
        }
        shapes.push_back(shape);
    }
    return shapes;
}
