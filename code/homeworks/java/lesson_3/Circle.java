package lesson_3;
public class Circle extends Shape{
    Integer radius;
    public Circle(Integer radius){
        this.radius=radius;
    }
    public Integer getArea(){
        return (int)Math.PI*radius*radius;
    }
    public Integer getPerimeter(){
        return (int)Math.PI*2*radius;
    }
}