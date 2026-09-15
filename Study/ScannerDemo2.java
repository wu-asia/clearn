import java.util.Scanner;
public class ScannerDemo2 {
    public static void main(String[] args){
        // 普通变量时数据值
        // 引用数据类型是地址值
        String s1 = "abc";
        String s2 = "abc";
        System.out.println(s1 == s2);// true
        String s3 = new String("abc");// 在堆中的地址值
        String s4 = "Abc";// 在串池中创建
        System.out.println(s3 == s4);// false

        // boolean equals 方法 严格相等
        System.out.println(s3.equals(s4)); // false;
        // 忽略大小写 equalsIgnoreCase 方法 不区分英文大小写
        System.out.println(s3.equalsIgnoreCase(s4)); // true;

        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();

        String str2 = "abc";
        System.out.println(str1 == str2); // false
        // 结论：一般比较字符串使用equals方法

        // 方法charAt() 
        for(int i = 0; i < str1.length(); i++){
            System.out.println(str1.charAt(i));
        }
    }
}
