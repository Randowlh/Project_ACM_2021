//using Java Swing to create a calculator by zwj 19041805
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Main{
    JFrame frame;
    JPanel panel;
    JTextField textField;
    JButton button0, button1, button2, button3, button4, button5, button6, button7, button8, button9, buttonAdd, buttonSub, buttonMul, buttonDiv, buttonEqual, buttonClear, buttonDelete,buttonSqrt, buttonPercent, buttonDot,buttonInv,buttonRev;
    JLabel label;
    String input = "";
    double num1, num2, result;
    int operator;
    public static void main(String[] args){
        java.awt.EventQueue.invokeLater(Main::new);
    }
    public Main(){
        frame = new JFrame("Calculator");
        frame.setVisible(true);
        frame.setSize(500, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());
        panel = new JPanel();
        GridBagLayout layout = new GridBagLayout();
        GridBagConstraints gbc = new GridBagConstraints();
        panel.setLayout(layout);
        textField = new JTextField();
        textField.setEditable(false);
        textField.setHorizontalAlignment(JTextField.RIGHT);
        textField.setFont(new Font("Arial", Font.BOLD, 20));
        textField.setBounds(0, 0, 400, 100);        
        frame.add(textField, BorderLayout.NORTH);
        label = new JLabel("");
        frame.add(label, BorderLayout.SOUTH);
        button0 = new JButton("0");
        button0.setFont(new Font("Arial", Font.BOLD, 20));
        button0.addActionListener(e -> {
            input += "0";
            textField.setText(input);
        });
        button1 = new JButton("1");
        button1.setFont(new Font("Arial", Font.BOLD, 20));
        button1.addActionListener(e -> {
            input += "1";
            textField.setText(input);
        });
        //panel.add(button1);
        button2 = new JButton("2");
        button2.setFont(new Font("Arial", Font.BOLD, 20));
        button2.addActionListener(e -> {
            input += "2";
            textField.setText(input);
        });
        //panel.add(button2);
        button3 = new JButton("3");
        button3.setFont(new Font("Arial", Font.BOLD, 20));
        button3.addActionListener(e -> {
            input += "3";
            textField.setText(input);
        });
        //panel.add(button3);
        button4 = new JButton("4");
        button4.setFont(new Font("Arial", Font.BOLD, 20));
        button4.addActionListener(e -> {
            input += "4";
            textField.setText(input);
        });
        //panel.add(button4);
        button5 = new JButton("5");
        button5.setFont(new Font("Arial", Font.BOLD, 20));
        button5.addActionListener(e -> {
            input += "5";
            textField.setText(input);
        });
        //panel.add(button5);
        button6 = new JButton("6");
        button6.setFont(new Font("Arial", Font.BOLD, 20));
        button6.addActionListener(e -> {
            input += "6";
            textField.setText(input);
        });
        //panel.add(button6);
        button7 = new JButton("7");
        button7.setFont(new Font("Arial", Font.BOLD, 20));
        button7.addActionListener(e -> {
            input += "7";
            textField.setText(input);
        });
        //panel.add(button7);
        button8 = new JButton("8");
        button8.setFont(new Font("Arial", Font.BOLD, 20));
        button8.addActionListener(e -> {
            input += "8";
            textField.setText(input);
        });
        //panel.add(button8);
        button9 = new JButton("9");
        button9.setFont(new Font("Arial", Font.BOLD, 20));
        button9.addActionListener(e -> {
            input += "9";
            textField.setText(input);
        });
        //panel.add(button9);
        buttonAdd = new JButton("+");
        buttonAdd.setFont(new Font("Arial", Font.BOLD, 20));
        buttonAdd.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = "";
            operator = 1;
        });
        //panel.add(buttonAdd);
        buttonSub = new JButton("-");
        buttonSub.setFont(new Font("Arial", Font.BOLD, 20));
        buttonSub.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = "";
            operator = 2;
        });
        //panel.add(buttonSub);
        buttonMul = new JButton("*");
        buttonMul.setFont(new Font("Arial", Font.BOLD, 20));
        buttonMul.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = "";
            operator = 3;
        });
        //panel.add(buttonMul);
        buttonDiv = new JButton("/");
        buttonDiv.setFont(new Font("Arial", Font.BOLD, 20));
        buttonDiv.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = "";
            operator = 4;
        });
        //panel.add(buttonDiv);
        buttonEqual = new JButton("=");
        buttonEqual.setFont(new Font("Arial", Font.BOLD, 20));
        buttonEqual.addActionListener(e -> {
            num2 = Double.parseDouble(input);
            switch (operator) {
                case 1 -> result = num1 + num2;
                case 2 -> result = num1 - num2;
                case 3 -> result = num1 * num2;
                case 4 -> {
                    if(num2==0){
                        result=0;
                    }else
                    result = num1 / num2;}
            }
            num1=result;
            input = Double.toString(result);
            textField.setText(input);
        });
        //panel.add(buttonEqual);
        buttonClear = new JButton("C");
        buttonClear.setFont(new Font("Arial", Font.BOLD, 20));
        buttonClear.addActionListener(e -> {
            input = "";
            textField.setText(input);
        });
        buttonDelete = new JButton("<-");
        buttonDelete.setFont(new Font("Arial", Font.BOLD, 20));
        buttonDelete.addActionListener(e -> {
            input = input.substring(0, input.length() - 1);
            textField.setText(input);
        });
        buttonSqrt = new JButton("sqrt");
        buttonSqrt.setFont(new Font("Arial", Font.BOLD, 20));
        buttonSqrt.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = Double.toString(Math.sqrt(num1));
            textField.setText(input);
        });
        buttonPercent = new JButton("%");
        buttonPercent.setFont(new Font("Arial", Font.BOLD, 20));
        buttonPercent.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = Double.toString(num1 / 100);
            textField.setText(input);
        });
        buttonDot = new JButton(".");
        buttonDot.setFont(new Font("Arial", Font.BOLD, 20));
        buttonDot.addActionListener(e -> {
            input += ".";
            textField.setText(input);
        });
        buttonInv=new JButton("1/x");
        buttonInv.setFont(new Font("Arial", Font.BOLD, 20));
        buttonInv.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = Double.toString(1/num1);
            textField.setText(input);
        });
        buttonRev=new JButton("+/-");
        buttonRev.setFont(new Font("Arial", Font.BOLD, 20));
        buttonRev.addActionListener(e -> {
            num1 = Double.parseDouble(input);
            input = Double.toString(num1*-1);
            textField.setText(input);
        });
        gbc.ipady = 20;
        //panel.add(buttonClear);
        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(button1, gbc);
        // panel.add(button1);
        gbc.gridx = 1;
        gbc.gridy = 0;
        panel.add(button2, gbc);
        gbc.gridx = 2;
        gbc.gridy = 0;
        panel.add(button3, gbc);
        gbc.gridx = 0;
        gbc.gridy = 1;
        panel.add(button4, gbc);
        gbc.gridx = 1;
        gbc.gridy = 1;
        panel.add(button5, gbc);
        gbc.gridx = 2;
        gbc.gridy = 1;
        panel.add(button6, gbc);
        gbc.gridx = 0;
        gbc.gridy = 2;
        panel.add(button7, gbc);
        gbc.gridx = 1;
        gbc.gridy = 2;
        panel.add(button8, gbc);
        gbc.gridx = 2;
        gbc.gridy = 2;
        panel.add(button9, gbc);
        gbc.gridwidth = 2;
        gbc.gridx = 0;
        gbc.gridy = 3;
        // button0.setBounds(0, 0, 100, 100);
        gbc.fill =GridBagConstraints.HORIZONTAL;
        panel.add(button0,gbc);
        gbc.gridx = 2;
        gbc.gridy = 3;
        panel.add(buttonDot, gbc);
        gbc.gridwidth = 1;
        gbc.gridx = 4;
        gbc.gridy = 0;
        panel.add(buttonAdd, gbc);
        gbc.gridx = 4;
        gbc.gridy = 1;
        panel.add(buttonSub, gbc);
        gbc.gridx = 4;
        gbc.gridy = 2;
        panel.add(buttonMul, gbc);
        gbc.gridx = 4;
        gbc.gridy = 3;
        panel.add(buttonDiv, gbc);
         gbc.gridx = 5;
         gbc.gridy = 0;
//         gbc.gridheight = 2;
         panel.add(buttonSqrt, gbc);
        gbc.gridx = 5;
        gbc.gridy = 1;
        panel.add(buttonPercent, gbc);
        gbc.gridx = 5;
        gbc.gridy = 2;
        panel.add(buttonInv, gbc);
        gbc.gridx = 5;
        gbc.gridy = 3;
        panel.add(buttonRev, gbc);
        gbc.gridx = 6;
        gbc.gridy = 0;
        gbc.gridheight = 3;
        gbc.fill=GridBagConstraints.VERTICAL;
        panel.add(buttonDelete, gbc);
        gbc.gridheight =1;
        gbc.gridwidth =2;
        gbc.gridx = 6;
        gbc.gridy = 3;
        panel.add(buttonEqual, gbc);
        frame.add(panel);
    }
}