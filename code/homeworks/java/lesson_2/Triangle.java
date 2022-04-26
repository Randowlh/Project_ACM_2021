package lesson_2;
public class Triangle {
    private double a;
    private double b;
    private double c;
    public Triangle(double a,double b,double c) {
        this.a=a;
        this.b=b;
        this.c=c;
    }
    public double getPerimeter() {
        return a+b+c;
    }
    public double getArea() {
        double p=(a+b+c)/2;
        return Math.sqrt(p*(p-a)*(p-b)*(p-c));
    }
}