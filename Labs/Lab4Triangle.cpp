  
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
        double getSideALength(){
            return point1.distance(point2);
        }


        /*
        * Return length of side B of triangle, distance from P2 -> P3
        */
        double getSideBLength(){
            return point2.distance(point3);
        }

        /*
        * Return length of side C of triangle, distance from P3 -> P1
        */
        double getSideCLength(){
            return point3.distance(point1);
        }
};

                                    // #include "Triangle.h"
                                    // /*
                                    // * Return length of side A of triangle, distance from P1 -> P2
                                    // */
                                    // double Triangle::getSideALength(){
                                    //     // YOUR CODE HERE
                                    //     return 0.0;
                                    // }


                                    // /*
                                    // * Return length of side B of triangle, distance from P2 -> P3
                                    // */
                                    // double Triangle::getSideBLength(){
                                    //     // YOUR CODE HERE
                                    //     return 0.0;
                                    // }


                                    // /*
                                    // * Return length of side C of triangle, distance from P3 -> P1
                                    // */
                                    // double Triangle::getSideCLength(){
                                    //     // YOUR CODE HERE
                                    //     return 0.0;
                                    // }

/*
* Constructs a Triangle object with the same properties (points)
* as the parameter Triangle, e.g. copies the target Triangle.
*/
Triangle::Triangle(Triangle &t2) {
    // YOUR CODE HERE
    t2.point1 = this->point1;
    t2.point2 = this->point2;
    t2.point3 = this->point3;
}


/*
* Returns the perimeter of the target Triangle object
* The perimeter is the sum of the lengths of the sides
* HINT: Check for useful methods in the Point2D class
*/
double Triangle::perimeter() {
    // YOUR CODE HERE
    // return this->getSideALength() + this->getSideBLength() + this->getSideCLength();  // Doesnt work in Moodle :/
    return this->point1.distance(point2) + this->point2.distance(point3) + this->point3.distance(point1);
}


/*
* Returns the area of the target Triangle object
* HINT: Use Heron's formula of area using 3 sides
*/
double Triangle::area() {
    // YOUR CODE HERE
    double s = (this->point1.distance(point2) + this->point2.distance(point3) + this->point3.distance(point1)) / 2.0;
    double area = sqrt(s * (s - this->point1.distance(point2)) * (s - this->point2.distance(point3)) * (s - this->point3.distance(point1)));
    return area;
}


/* 
* Return a NEW Triangle that represents the multiplication of the target
* Triangle by k units all around.
*/
Triangle Triangle::multiply(double k) {
    // YOUR CODE HERE
    float x1, x2, x3, y1, y2, y3;

    x1 = this->getP1().getX() * k;
    y1 = this->getP1().getY() * k;
    x2 = this->getP2().getX() * k;
    y2 = this->getP2().getY() * k;
    x3 = this->getP3().getX() * k;
    y3 = this->getP3().getY() * k;

    Point2D p1(x1, y1);
    Point2D p2(x2, y2);
    Point2D p3(x3, y3);

    Triangle t2(p1, p2, p3);

    return t2; // Dummy return
}


/*
* Return the String equilateral, isosceles or scalene depending
* on the similarity of the sides of the triangle given.
*/
string Triangle::findType() {
    // YOUR CODE HERE
    if((this->point1.distance(point2) == this->point2.distance(point3)) || (this->point3.distance(point1) == this->point1.distance(point2)) || (this->point2.distance(point3) == this->point3.distance(point1))){
        return "Isosceles"; // Dummy return
    }
    else if((this->point1.distance(point2) != this->point2.distance(point3)) || (this->point3.distance(point1) != this->point1.distance(point2)) || (this->point2.distance(point3) != this->point3.distance(point1))){
        return "Scalene";
    }
    else{
        return "Equilateral";
    }
}

int main(){
    // Triangle t1(Point2D(0,0), Point2D(4,0), Point2D(2,4));
    // Triangle t2(t1);
    // cout << "The triangles have equal P1: " << ((t1.getP1().getX() == t2.getP1().getX()) && (t1.getP1().getY() == t2.getP1().getY()))<< endl;
    // cout << "The triangles have equal P2: " << ((t1.getP2().getX() == t2.getP2().getX()) && (t1.getP2().getY() == t2.getP2().getY()))<< endl;
    // cout << "The triangles have equal P3: " << ((t1.getP3().getX() == t2.getP3().getX()) && (t1.getP3().getY() == t2.getP3().getY()))<< endl;


    // Triangle t(Point2D(0,0), Point2D(4,3), Point2D(4, 0));
    // double tolerance = 0.001;
    // cout << "Side A calculation passed error tolerance: " << (abs(t.getSideALength()-5)<tolerance) << endl;
    // cout << "Side B calculation passed error tolerance: " << (abs(t.getSideBLength()-3)<tolerance) << endl;
    // cout << "Side C calculation passed error tolerance: " << (abs(t.getSideCLength()-4)<tolerance) << endl;


    // Triangle t1(Point2D(0,0), Point2D(4,0), Point2D(2, 4));
    // double error = abs(t1.perimeter()-12.9443);
    // double tolerance = 0.0001;
    // cout << "Perimeter calculation passed error tolerance: " << (error<tolerance) << endl;


    // Triangle t(Point2D(0,0), Point2D(4,0), Point2D(2, 4));
    // double error = abs(t.area()-8.0);
    // double tolerance = 0.001;
    // cout << "Area calculation passed error tolerance: " << (error<tolerance) << endl;


    // Triangle t1(Point2D(0,0), Point2D(4,0), Point2D(2, 4));
    // cout << "The multiplied triangle have correct P1: " << ((t1.multiply(6).getP1().getX() == 0) && (t1.multiply(6).getP1().getY() == 0))<< endl;
    // cout << "The multiplied triangle have correct P2: " << ((t1.multiply(6).getP2().getX() == 24) && (t1.multiply(6).getP2().getY() == 0))<< endl;
    // cout << "The multiplied triangle have correct P3: " << ((t1.multiply(6).getP3().getX() == 12) && (t1.multiply(6).getP3().getY() == 24))<< endl;


    Triangle t1(Point2D(0,0), Point2D(4,0), Point2D(0, 4));
    cout << "The triangles is: " << t1.findType() << endl;

    Triangle t2(Point2D(0,6), Point2D(4,0), Point2D(0, 4));
    cout << "The triangles is: " << t2.findType() << endl;
    return 0;
}