// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>

using namespace std;

double PointDist(double x, double y) {
    return hypot(x, y);
}

double PointDist(double x1, double y1, double x2, double y2) {
    return hypot(x2 - x1, y2 - y1);
}

int main() {
    double x, y;
    cout << "Enter point (x y): ";
    cin >> x >> y;
    cout << "Distance to origin: " << PointDist(x, y) << "\n";

    double x1, y1, x2, y2;
    cout << "Enter two points (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Distance between points: " << PointDist(x1, y1, x2, y2) << "\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
