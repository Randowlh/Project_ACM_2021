//using Java Swing to create a class address list by zwj 19041805
//结合Swing中的Table组件，创建一个班级通讯录，其UI主界面类似下图，并带有几个功能按钮。
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
public class Main{
    JFrame frame;//主窗口
    JPanel panel;//主面板
    JTextField textField;//文本框
    JButton  btn_import,btn_output,add,delete;//按钮
    //通讯录表格
    JTable table;//表格
    Font font = new Font("Arial", Font.BOLD, 20);
    //学生信息Vector
    Vector<Student> students = new Vector<>();//学生信息
    public static void main(String[] args){
        java.awt.EventQueue.invokeLater(Main::new);//调用主函数
    }
    public Main(){
        frame = new JFrame("通讯录");//创建窗口
        frame.setVisible(true);//设置窗口可见
        frame.setSize(700, 800);//设置窗口大小
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//设置窗口关闭按钮
        frame.setLayout(new BorderLayout());//设置布局管理器
        panel = new JPanel();//创建面板
        GridBagLayout layout = new GridBagLayout();//创建网格布局管理器
        GridBagConstraints gbc = new GridBagConstraints();//创建网格布局约束
        gbc.fill = GridBagConstraints.BOTH;//设置约束填充方式
        panel.setLayout(layout);//设置面板布局管理器
        //设定全局字体

        //从文件导入通讯录
        btn_import = new JButton("从文件导入");//创建按钮
        btn_import.setFont(font);//设置字体
        btn_import.addActionListener(e -> {//添加监听器
            //跳出对话框，获取文件路径
            JFileChooser jfc = new JFileChooser();
            jfc.showOpenDialog(null);//设置可以选择文件
            String filePath = jfc.getSelectedFile().getAbsolutePath();//获取文件路径
            //读取文件
            String[] lines = new String[0];
            try{
                lines = new java.io.BufferedReader(new java.io.FileReader(filePath)).lines().toArray(String[]::new);//读取文件
            }catch(Exception e1){
                e1.printStackTrace();//打印异常信息
            }
            //导入新数据
            for(String line : lines){
                String[] data = line.split(" ");//分割字符串
                students.add(new Student(data[0],data[1],data[2],data[3],data[4]));//添加学生信息
            }
            //刷新表格
            table.setModel(new StudentTableModule(students));//设置表格模型,刷新表格
        });
        btn_output = new JButton("导出到文件");//创建按钮
        btn_output.setFont(font);//设置字体
        btn_output.addActionListener(e -> {
            //跳出对话框，获取文件路径
            JFileChooser jfc = new JFileChooser();
            jfc.showSaveDialog(null);//设置可以选择文件
            String filePath = jfc.getSelectedFile().getAbsolutePath();//获取文件路径
            //写入文件
            try{
                java.io.PrintWriter pw = new java.io.PrintWriter(filePath);//创建文件写入器
                for(Student student : students){//遍历学生信息
                    pw.print(student.ID);
                    pw.print(' ');
                    pw.print(student.name);
                    pw.print(' ');
                    pw.print(student._class);
                    pw.print(' ');
                    pw.print(student.phone);
                    pw.print(' ');
                    pw.println(student.email);
                    //写入一行
                }
                pw.close();//关闭文件写入器
            }catch(Exception e1){
                e1.printStackTrace();//打印异常信息
            }
        });
        //添加学生
        add = new JButton("添加学生");
        add.setFont(font);
        add.addActionListener(e -> {
            //跳出对话框，获取文件路径
            JTextField ID = new JTextField();//学号文本框
            JTextField name = new JTextField();//姓名文本框
            JTextField _class = new JTextField();//班级文本框
            JTextField phone = new JTextField();//电话文本框
            JTextField email = new JTextField();//邮箱文本框
            JPanel panel = new JPanel();//创建面板
            GridBagLayout layout2 = new GridBagLayout();//创建网格布局管理器
            GridBagConstraints gbc2 = new GridBagConstraints();//创建网格布局约束
            gbc2.gridx = 0;
            gbc2.gridy = 0;
            gbc2.gridwidth = 1;
            gbc2.gridheight = 1;
            gbc2.weightx = 1;
            gbc2.weighty = 1;
            gbc2.fill = GridBagConstraints.BOTH;//设置约束填充方式
            panel.setLayout(layout2);
            panel.add(new JLabel("学号"),gbc2);//添加学号标签
            gbc2.gridx = 1;
            gbc2.gridwidth = 3;
            panel.add(ID,gbc2);
            gbc2.gridx = 0;
            gbc2.gridy = 1;
            gbc2.gridwidth = 1;
            panel.add(new JLabel("姓名"),gbc2);//添加姓名标签
            gbc2.gridx = 1;
            gbc2.gridwidth = 3;
            panel.add(name,gbc2);
            gbc2.gridx = 0;
            gbc2.gridy = 2;
            gbc2.gridwidth = 1;
            panel.add(new JLabel("班级"),gbc2);//添加班级标签
            gbc2.gridx = 1;
            gbc2.gridwidth = 3;
            panel.add(_class,gbc2);
            gbc2.gridx = 0;
            gbc2.gridy = 3;
            gbc2.gridwidth = 1;
            panel.add(new JLabel("手机"),gbc2);//添加手机标签
            gbc2.gridx = 1;
            gbc2.gridwidth = 3;
            panel.add(phone,gbc2);
            gbc2.gridx = 0;
            gbc2.gridy = 4;
            gbc2.gridwidth = 1;
            panel.add(new JLabel("电子邮件"),gbc2);//添加电子邮件标签
            gbc2.gridx = 1;
            gbc2.gridwidth = 3;
            panel.add(email,gbc2);
            //no logos
            JOptionPane.showMessageDialog(null,panel,"添加学生",JOptionPane.PLAIN_MESSAGE);//跳出对话框
            //添加学生
            students.add(new Student(ID.getText(),name.getText(),_class.getText(),phone.getText(),email.getText()));//添加学生信息
            table.setModel(new StudentTableModule(students));//设置表格模型,刷新表格

        });
        delete = new JButton("删除学生");
        delete.setFont(font);
        delete.addActionListener(e -> {
            //跳出对话框，获取文件路径
            JTextField ID = new JTextField();//学号文本框
            JPanel panel = new JPanel();//创建面板
            GridBagLayout layout3 = new GridBagLayout();//创建网格布局管理器
            GridBagConstraints gbc3 = new GridBagConstraints();//创建网格布局约束
            gbc3.gridx = 0;
            gbc3.gridy = 0;
            gbc3.gridwidth = 3;
            gbc3.gridheight = 1;
            gbc3.weightx = 1;
            gbc3.weighty = 1;
            gbc3.fill = GridBagConstraints.BOTH;
            panel.setLayout(layout3);
            //设定字体
            JLabel tt=new JLabel("学号:");  
            tt.setFont(font);
            panel.add(tt,gbc3);
            gbc3.gridy = 1;
            panel.add(ID,gbc3);
            JOptionPane.showMessageDialog(null, panel, "删除学生", JOptionPane.PLAIN_MESSAGE);//跳出对话框
            //删除学生
            for(int i = 0; i < students.size(); i++){//遍历学生列表
                if(students.get(i).ID.equals(ID.getText())){//如果学号相同
                    students.remove(i);//删除学生
                    break;
                }
            }
            //刷新表格
            table.setModel(new StudentTableModule(students));//设置表格模型,刷新表格
        });
        gbc.ipady = 20;
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.gridwidth = 1;
        gbc.gridheight = 1;
        panel.add(btn_import, gbc);
        //导出通讯录
        gbc.gridx = 1;
        gbc.gridy = 0;
        gbc.gridwidth = 1;
        gbc.gridheight = 1;
        panel.add(btn_output, gbc);
        //添加联系人
        gbc.gridx = 2;
        gbc.gridy = 0;
        gbc.gridwidth = 1;
        gbc.gridheight = 1;
        panel.add(add, gbc);
        //删除联系人
        gbc.gridx = 3;
        gbc.gridy = 0;
        gbc.gridwidth = 1;
        gbc.gridheight = 1;
        panel.add(delete, gbc);
        //通讯录表格
        table = new JTable(new StudentTableModule(students));//创建表格
//        table.setFont(font);
        JScrollPane scrollPane = new JScrollPane(table);//创建滚动面板
        //列表框自适应大小
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.gridwidth = 4;
        gbc.gridheight = 1;
        panel.add(scrollPane, gbc);
        frame.add(panel);

    }
}