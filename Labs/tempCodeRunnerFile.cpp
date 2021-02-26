Triangle t(Point2D(0,0), Point2D(4,0), Point2D(2, 4));
    double error = abs(t.area()-8.0);
    double tolerance = 0.001;
    cout << "Area calcu