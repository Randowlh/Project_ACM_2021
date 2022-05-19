import java.io.FileReader;
import java.util.Scanner;
import java.io.FileWriter;
public class main {
   // 产生数组越界异常：ArrayIndexOutOfBoundsException 并处理
   public static void indexError()throws Exception {
        int[] a = new int[2];
        a[3] = 4;
   }
   // 产生算数异常：ArithmeticException 并处理 
    public static void arithmeticError()throws Exception {
          int a = 1 / 0;
    }
    // 产生NullPointerException 并处理
    public static void nullPointerError()throws Exception {
        String s = null;
        s.length();
    }
    // 产生IOException 并处理
    public static void ioError()throws Exception {
        FileWriter fw = new FileWriter("/Volumes/DRIVE/test.txt");
        while(true){
            fw.write("hello\n");
            //执行时拔出u盘
        }
    }
    // 产生FileNotFoundException: 并处理
    public static void fileNotFoundError()throws Exception {
        FileReader fr = new FileReader("test.txt");
    }
    public static void main(String[] args) {
        try {
            indexError();
        } catch (Exception e) {
            System.out.println(e);
        }
        try {
            arithmeticError();
        } catch (Exception e) {
            System.out.println(e);
        }
        try {
            nullPointerError();
        } catch (Exception e) {
            System.out.println(e);
        }
        try {
            ioError();
        } catch (Exception e) {
            System.out.println(e);
        }
        try {
            fileNotFoundError();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
