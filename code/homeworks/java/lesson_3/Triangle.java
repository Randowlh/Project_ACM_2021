package lesson_3;
//继承Shape类
public class Triangle extends Shape{
    //定义三个属性
    Integer a,b,c;
    //构造方法
    public Triangle(Integer a,Integer b,Integer c){
        this.a=a;
        this.b=b;
        this.c=c;
    }
    //重写父类的方法
    public Integer getArea(){
        //计算三角形面积
        Integer p=(a+b+c)/2;
        return (int)Math.sqrt(p*(p-a)*(p-b)*(p-c));
    }
    public Integer getPerimeter(){
        //计算三角形周长
        return a+b+c;
    }
}
