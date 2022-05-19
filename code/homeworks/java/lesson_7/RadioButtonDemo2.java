package JAVA.gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RadioButtonDemo2 extends JFrame  {
    String[] data1 = {"请选择年级","2017级","2018级","2019级"};
    String[] data2 = {"请选择班级","1班","2班","3班"};
    JLabel info1 = new JLabel();
    JLabel info2 = new JLabel();
    ActionListen actionListen = new ActionListen();

    public RadioButtonDemo2(){
        super();
        setLayout(new GridLayout(2,1));
        this.add(content(data1,Color.RED,info1));
        this.add(content(data2,Color.GREEN,info2));
        this.setVisible(true);
        this.setSize(300,300);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public JPanel content(String[]data,Color color,JLabel info){
        JPanel JP = new JPanel(new GridLayout(3,1));
        JP.setBackground(color);
        JP.add(new JLabel(data[0]));
        JPanel jp = new JPanel();
        jp.setBackground(color);
        JRadioButton[] jb = new JRadioButton[data.length];
        ButtonGroup bg = new ButtonGroup();
        for (int i = 1; i < data.length; i++) {
            jb[i]=new JRadioButton(data[i]);
            bg.add(jb[i]);
            jp.add(jb[i]);
            jb[i].addActionListener(actionListen);
        }
        JP.add(jp);
        JP.add(info);
        return JP;
    }

    class ActionListen implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();
            if (command.equals(data1[1]) | command.equals(data1[2]) | command.equals(data1[3])) {
                info1.setText("你选择的是" + command);
            } else if (command.equals(data2[1]) | command.equals(data2[2]) | command.equals(data2[3])) {
                info2.setText("你选择的是" + command);
            }
        }
    }

    public static void main(String[] args) {

        new RadioButtonDemo2();
    }





}

