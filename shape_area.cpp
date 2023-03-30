#include <bits/stdc++.h>

using namespace std;

/* Create a class to house the methods for calculating the area of  the triangle and square */
class shape_area
{
public: double areaOfTriangle(double a, double b, double c)
    {
        /* Area of a Triangle using Heron´s formula */
        double s = (a + b + c) / 2;

        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

public: double areaOfSquare(double d)
    {
        /* Area of a Square given diagonal */
        double area = (d * d) / 2;

        return area;
    }
};


int main()
{
    /* Create instance of the shape_area class */
    shape_area sa;
    
    /* Prompt and read the three sides of the triangle from the user */
    cout << "Type in each of the 3 sides of the triangle seprated by space with the enter key";
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    /* Prompt and read the diagonal of the square from the user */
    cout << "Type in the diagonal of the square and hit the enter key";
    double diagonal;
    cin >> diagonal;

    /* Print the values of the triangle and shape area */
    cout << "Area of Triangle is: " << sa.areaOfTriangle(side1, side2, side3) << endl;
    cout << "Area of Square is: " << sa.areaOfSquare(diagonal) << endl;

    return 0;
}