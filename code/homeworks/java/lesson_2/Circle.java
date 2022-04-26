package lesson_2;
public class Circle {
    private double r;
    public Circle(double r) {
        this.r=r;
    }
    public double getPerimeter() {
        return 2*Math.PI*r;
    }
    public double getArea() {
        return Math.PI*r*r;
    }
}
