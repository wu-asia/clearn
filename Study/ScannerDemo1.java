// import java.util.Scanner;

public class ScannerDemo1 {
    public static void main(String[] args){
        String name = "the";
        String schoolName = "itcasd";
        System.out.println(name + schoolName);
        // 1.使用直接复制的方式获取一个字符串对象
        String s1 = "abc";
        System.out.println(s1);
        // 2.使用new的方式来获取一个字符串对象
        // 空参构造：可以获取空的字符串对象
        String s2 = new String();
        System.out.println(s2);

        // 传递一个字符串，更具传递的字符串内容来创建一个对象
        String s3 = new String(s1);
        System.out.println(s3);

        // 传递一个字符数组，根据字符数组中的额内容再次创建一个字符串对象
        // 需求：修改字符串内容，可以修改字符数组
        // abc --> {'a', 'b', 'c'} --> {'Q', 'b', 'c'} --> "Qbc"
        char[] ch = {'a', 'b', 'c'};
        String s4 = new String(ch);
        System.out.println(s4);
        // ch[0] = 'Q';
        // System.out.println(s4);

        // 字节数组创建一个数组
        byte[] bytes = {97, 98, 99, 100};
        String s5 = new String(bytes);
        System.out.println(s5);

        // 当使用双引号直接赋值时，系统会减产该字符串在串池中是否已经存在
        // 不存在：创建新的
        // 存在：直接复用
        
    }
}
