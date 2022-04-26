package lesson_2;
public class Rectangle {
    private double a;
    private double b;
    public Rectangle(double a,double b) {
        this.a=a;
        this.b=b;
    }
    public double getPerimeter() {
        return 2*(a+b);
    }
    public double getArea() {
        return a*b;
    }
}
