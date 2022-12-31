

import java.util.*;
import javax.swing.table.AbstractTableModel;

public class StudentTableModule extends AbstractTableModel {

    String[] columnNames = {"学号","姓名","班级","电话","电子邮件"};
    String[][] Data;
    public StudentTableModule(Vector<Student> students){//构造函数，传入一个Vector<Student>类型的参数
        Data = new String[students.size()][5];//初始化Data数组，其中每一行的长度为5
        for(int i = 0;i < students.size();i++){//遍历students
            Data[i][0] = students.get(i).ID;
            Data[i][1] = students.get(i).name;
            Data[i][2] = students.get(i)._class;
            Data[i][3] = students.get(i).phone;
            Data[i][4]= students.get(i).email;
        }
    }
    // 返回一共有多少行
    public int getRowCount() {
 
        return Data.length;
    }

    // 返回一共有多少列
    public int getColumnCount() {
 
        return columnNames.length;
    }

    // 获取每一列的名称
    public String getColumnName(int columnIndex) {
 
        return columnNames[columnIndex];
    }

    // 单元格是否可以修改
    public boolean isCellEditable(int rowIndex, int columnIndex) {
        return false;
    }

    // 每一个单元格里的值
    public Object getValueAt(int rowIndex, int columnIndex) {
 
        return Data[rowIndex][columnIndex];//返回每一行的每一列的值
    }

}