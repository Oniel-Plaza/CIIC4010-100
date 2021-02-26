  
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
class Point2D {
    private:
        double x; 
        double y;   

    public:     
        Point2D(){
            x = 0.0;
            y = 0.0;
        }

        Point2D(double x1, double y1){
            this->setX(x1);
            this->setY(y1);
        }
        
        // Setters
        void setX(double x2){x = x2;}
        void setY(double y2){y = y2;}

        // Getters 
        double getX(){return x;}
        double getY(){return y;}

        /*
        *   Returns the distance of the target object and the parameter Point2D p2.
        */
        double distance(Point2D p2){
            double deltaX = p2.getX() - this->getX();
            double deltaY = p2.getY() - this->getY();
            return sqrt(deltaX * deltaX + deltaY * deltaY);
        } 
};


/*
  Triangle class without side lengths methods implemented
*/
class Triangle {
    private:
        Point2D point1;
        Point2D point2;
        Point2D point3;
    
    public:

        /*
        * Constructs a Triangle object with the given parameters
        */
        Triangle(Point2D p1, Point2D p2, Point2D p3) {
            point1 = p1;
            point2 = p2;
            point3 = p3;
        }

        /*
        * Constructs a Triangle object with the same properties (points)
        * as the parameter Triangle, e.g. copies the target Triangle.
        */
        Triangle(Triangle &t2);

        // Getters
        Point2D getP1(){ return point1; }
        Point2D getP2(){ return point2; }
        Point2D getP3(){ return point3; }

        /*
        * Returns the perimeter of the target Triangle object
        * The perimeter is the sum of the lengths of the sides
        * HINT: Check for useful methods in the Point2D class
        */
        double perimeter();
        
        /*
        * Returns the area of the target Triangle object
        * HINT: Use Heron's formula of area using 3 sides
        */
        double area();
        
        /* 
        * Return a NEW Triangle that represents the multiplication of the target
        * Triangle by k units all around.
        */
        Triangle multiply(double k);
        
        /*
        * Return the String equilateral, isosceles or scalene depending
        * on the similarity of the sides of the triangle given.
        */
        std::string findType();

        /*
        * Return length of side A of triangle, distance from P1 -> P2
        */
        double getSideALength();

        /*
        * Return length of side B of triangle, distance from P2 -> P3
        */
        double getSideBLength();

        /*
        * Return length of side C of triangle, distance from P3 -> P1
        */
        double getSideCLength();
};

/*
* Constructs a Triangle object with the same properties (points)
* as the parameter Triangle, e.g. copies the target Triangle.
*/
Triangle::Triangle(Triangle &t2) {
    // YOUR CODE HERE
    t2.point1 = this->getP1();
    t2.point2 = this->getP2();
    t2.point3 = this->getP3();
}



/*
* Returns the perimeter of the target Triangle object
* The perimeter is the sum of the lengths of the sides
* HINT: Check for useful methods in the Point2D class
*/
double Triangle::perimeter() {
    // YOUR CODE HERE
    double s1 = this->point1.distance(getP2());
    double s2 = this->point2.distance(getP3());
    double s3 = this->point3.distance(getP1());

    double perimeter = s1 + s2 + s3;

    return perimeter;  
}


/*
* Returns the area of the target Triangle object
* HINT: Use Heron's formula of area using 3 sides
*/
double Triangle::area() {
    // YOUR CODE HERE
    return 0.0;
}


/* 
* Return a NEW Triangle that represents the multiplication of the target
* Triangle by k units all around.
*/
Triangle Triangle::multiply(double k) {
    // YOUR CODE HERE
    int xp1 = ((this->getP1().getX()) * k);
    int yp1 = ((this->getP1().getY()) * k);
    int xp2 = ((this->getP2().getX()) * k);
    int yp2 = ((this->getP2().getY()) * k);
    int xp3 = ((this->getP3().getX()) * k);
    int yp3 = ((this->getP3().getY()) * k);

    return Triangle(Point2D(xp1, yp1), Point2D(xp2, yp2), Point2D(xp3, yp3)); // Dummy return
}


/*
* Return the String equilateral, isosceles or scalene depending
* on the similarity of the sides of the triangle given.
*/
string Triangle::findType() {
    // YOUR CODE HERE
    return "type"; // Dummy return
};

int main()
{
    cout << "COPY/TRY TEST CASES HERE" << endl;
    Triangle(3,3,3)

    return 0;
}
