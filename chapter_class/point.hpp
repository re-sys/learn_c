class Point {
public:
    Point(double x, double y);
    double getX() const;
    double getY() const;
    void print() const;
    
private:
    double x_;
    double y_;
};
