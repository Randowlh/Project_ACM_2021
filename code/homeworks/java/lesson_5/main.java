import java.util.Scanner;
import java.io.FileWriter;
import java.io.FileReader;
public class main {
//在磁盘上新建一个文本文件，并写入9*9的乘法表；    
    public static void writefile() {
        try {
            FileWriter fw = new FileWriter("test.txt");
            for (int i = 1; i <= 9; i++) {
                for (int j = 1; j <= i; j++) {
                    fw.write(i + "*" + j + "=" + i * j + "\t");
                }
                fw.write("\n");
            }
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }       
    }
//读取9*9乘法表文件，并将其复制入另外-个文件；
    public static void readfile() {
        try {
            FileWriter fw = new FileWriter("test2.txt");
            Scanner sc = new Scanner(new FileReader("test.txt"));
            while (sc.hasNext()) {
                fw.write(sc.nextLine() + "\n");
            }
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
    //逐行读取一个文本文件，并将其内容打印出来；
    public static void readfile2(String filename) {
        try {
            Scanner sc = new Scanner(new FileReader(filename));
            while (sc.hasNext()) {
                System.out.println(sc.nextLine());
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
    public static void main(String[] args) {    
        main m = new main();
        writefile();
        readfile();
        readfile2("test2.txt");
    }

}
