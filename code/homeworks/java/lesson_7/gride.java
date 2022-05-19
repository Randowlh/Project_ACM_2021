import java.awt.*;

import javax.swing.*;

public class gride {

    public static void main(String[] args) {

        JFrame jf = new JFrame("测试窗口");

        jf.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        GridBagLayout gridBag = new GridBagLayout();    // 布局管理器

        GridBagConstraints c = null;                    // 约束

        JPanel panel = new JPanel(gridBag);

        JButton btn01 = new JButton("Button01");

        //将btn02、btn03按GridBagLayout放到JPanel中

        JButton btn02 = new JButton("Button02");

        JButton btn03 = new JButton("Button03");

        GridBagLayout igridBag = new GridBagLayout();    // 布局管理器

        GridBagConstraints ic = null;                    // 约束

        JPanel iPanel = new JPanel(igridBag);

        ic = new GridBagConstraints();

        ic.insets = new Insets(0, 10, 0, 10);

        igridBag.addLayoutComponent(btn02, ic);

        ic = new GridBagConstraints();

        ic.insets = new Insets(0, 10, 0, 10);

        igridBag.addLayoutComponent(btn02, ic);

        iPanel.add(btn02);

        iPanel.add(btn03);



        JTextField txt02 = new JTextField("TextField");



        JComboBox<String> cbx01 = new JComboBox<String>(new String[]{"选项A", "选项B", "选项C"});

        JComboBox<String> cbx02 = new JComboBox<String>(new String[]{"选项A", "选项B", "选项C"});



        /* 添加 组件 和 约束 到 布局管理器 */

        //btn01

        c = new GridBagConstraints();

        c.anchor = GridBagConstraints.WEST;

        c.insets = new Insets(2, 10, 2, 10);

        c.gridx = 0;

        c.gridy = 0;

        gridBag.addLayoutComponent(btn01, c);

        //btn02

        c = new GridBagConstraints();

        c.anchor = GridBagConstraints.EAST;

        c.insets = new Insets(2, 10, 2, 10);

        c.gridwidth = GridBagConstraints.REMAINDER;

        gridBag.addLayoutComponent(iPanel, c);



        //txt

        c = new GridBagConstraints();

        c.fill = GridBagConstraints.BOTH;

        c.insets = new Insets(2, 10, 2, 10);

        c.weightx = 1;

        c.weighty = 1;

        c.gridwidth = GridBagConstraints.REMAINDER;

        gridBag.addLayoutComponent(txt02, c);



        //cbx01

        c = new GridBagConstraints();

        c.anchor = GridBagConstraints.WEST;

        c.insets = new Insets(2, 10, 2, 10);

        gridBag.addLayoutComponent(cbx01, c);

        //cbx02

        c = new GridBagConstraints();

        c.anchor = GridBagConstraints.EAST;

        c.insets = new Insets(2, 10, 2, 10);

        c.gridwidth = GridBagConstraints.REMAINDER;

        gridBag.addLayoutComponent(cbx02, c);

        /* 添加 组件 到 内容面板 */

        panel.add(btn01);

        panel.add(iPanel);

        panel.add(txt02);

        panel.add(cbx01);

        panel.add(cbx02);

        jf.setContentPane(panel);

        jf.setSize(600, 400);

        jf.setLocationRelativeTo(null);

        jf.setVisible(true);

    }

}