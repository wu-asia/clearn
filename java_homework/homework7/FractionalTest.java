import java.util.Scanner;
public class FractionalTest {
    public static void main(String[] args){
        System.out.print("请输入一个整数(支持十进制和十六进制): ");
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(new Fractional(s).fractional());
    }   
}
