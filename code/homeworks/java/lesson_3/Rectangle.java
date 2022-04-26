package lesson_3;

public class Rectangle extends Shape{
    Integer width,height;
    public Rectangle(Integer width,Integer height){
        this.width=width;
        this.height=height;
    }
    public Integer getArea(){
        return width*height;
    }
    public Integer getPerimeter(){
        return 2*(width+height);
    }
}
