class Square
{
    private:
        double side1,
        side2,
        side3,
        side4;

    public:
    //Getters
    double getSide1() { return side1; }
    double getSide2() { return side2; }
    double getSide3() { return side3; }
    double getSide4() { return side4; }

    //Setters
    void setSide1(double s1) { side1 = s1; }
    void setSide2(double s2) { side2 = s2; }
    void setSide3(double s3) { side3 = s3; }
    void setSide4(double s4) { side4 = s4; }

    //Constructors
    Square(double s1, double s2, double s3, double s4) 
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
    }

    //Instance methods
    double getSumSides();
    double getArea();
};