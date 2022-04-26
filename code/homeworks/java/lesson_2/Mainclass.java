package lesson_2;
public class Mainclass {
    public static void main(String[] args) {
        Circle c = new Circle(5);
        Rectangle r = new Rectangle(5, 5);
        Triangle t = new Triangle(5, 5, 5);
        System.out.println(c.getPerimeter());
        System.out.println(c.getArea());
        System.out.println(r.getPerimeter());
        System.out.println(r.getArea());
        System.out.println(t.getPerimeter());
        System.out.println(t.getArea());
    }
}
