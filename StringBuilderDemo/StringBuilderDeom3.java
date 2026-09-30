import java.util.Scanner;
public class StringBuilderDeom3 {
    static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("请输入一个字符串: ");
        String str = sc.next();
        String res = new StringBuilder().append(str).reverse().toString();
        if(str.equals(res)){
            System.out.println("这个是");
        }else{
            System.out.println("这个不是");
        }
    }
}
