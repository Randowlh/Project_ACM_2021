package lesson_3;

public class Main {
    public void showArea(Shape shape){
        System.out.println(shape.getArea());
    }
    public void showPerimeter(Shape shape){
        System.out.println(shape.getPerimeter());
    }
    public static void main(String[] args) {
        Main main=new Main();
        Triangle triangle=new Triangle(3,4,5);
        main.showArea(triangle);
        main.showPerimeter(triangle);
        Circle circle=new Circle(5);
        main.showArea(circle);
        main.showPerimeter(circle);
        Rectangle rectangle=new Rectangle(5,6); 
        main.showArea(rectangle);
        main.showPerimeter(rectangle);
    }
}
