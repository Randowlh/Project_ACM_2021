//定义Student class，包含ID（学号），name(姓名)， class（班级），电话（phone number），电子邮箱（email） 等数据段；
public class Student {
    public String ID,name,_class,phone,email;
    public Student(String ID,String name,String _class,String phone,String email){
        this.ID = ID;//设置学号
        this.name = name;//设置姓名
        this._class = _class;//设置班级
        this.phone = phone;//设置电话
        this.email = email;//设置邮箱
    }
}
