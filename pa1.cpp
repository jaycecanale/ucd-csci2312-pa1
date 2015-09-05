// Jayce Canale
// 830243111
// PA 1

#include "Point.h"

//Function declarations
void setCoordsPoint1(Point &p1, double &inputX, double &inputY, double &inputZ);
void setCoordsPoint2(Point &p2, double &inputX, double &inputY, double &inputZ);
void setCoordsPoint3(Point &p3, double &inputX, double &inputY, double &inputZ);
double computeArea(Point &p1, Point &p2, Point &p3);

int main(void) {

    double inputX;
    double inputY;
    double inputZ;
    Point p1;
    Point p2;
    Point p3;


    cout << "This program will calculate the area of a three-dimensional triangle" << endl << endl;
    setCoordsPoint1(p1, inputX, inputY, inputZ);
    setCoordsPoint2(p2, inputX, inputY, inputZ);
    setCoordsPoint3(p3, inputX, inputY, inputZ);
    cout << fixed << setprecision(2) << "The area is " << computeArea(p1, p2, p3) << endl;

    return 0;
}

//************************************************
// Function Definitions

// Receives the coordinates for Point1

void setCoordsPoint1(Point &p1, double &inputX, double &inputY, double &inputZ) {
    cout << "Please input Point 1 coordinates" << endl;
    cout << "   X: " ;
    cin >> inputX;
    cout << "   Y: " ;
    cin >> inputY;
    cout << "   Z: " ;
    cin >> inputZ;
    cout << endl;

    p1.setX(inputX);
    p1.setY(inputY);
    p1.setZ(inputZ);
}

// Receives the coordinates for Point2

void setCoordsPoint2(Point &p2, double &inputX, double &inputY, double &inputZ) {
    cout << "Please input Point 2 coordinates" << endl;
    cout << "   X: " ;
    cin >> inputX;
    cout << "   Y: " ;
    cin >> inputY;
    cout << "   Z: " ;
    cin >> inputZ;
    cout << endl;

    p2.setX(inputX);
    p2.setY(inputY);
    p2.setZ(inputZ);
}

// Receives the coordinates for Point3

void setCoordsPoint3(Point &p3, double &inputX, double &inputY, double &inputZ) {
    cout << "Please input Point 3 coordinates" << endl;
    cout << "   X: " ;
    cin >> inputX;
    cout << "   Y: " ;
    cin >> inputY;
    cout << "   Z: " ;
    cin >> inputZ;
    cout << endl;

    p3.setX(inputX);
    p3.setY(inputY);
    p3.setZ(inputZ);

}

//Computes the area of the object

double computeArea(Point &p1, Point &p2, Point &p3) {

    double area = 0;
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;
    double s = 0;

    sideA = p1.distanceTo(p2);
    sideB = p2.distanceTo(p3);
    sideC = p3.distanceTo(p1);

    s = (sideA + sideB + sideC) / 2;

    area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));

    return area;
}

