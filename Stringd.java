// TODO: the study process of java
public class Stringd {
    static void main(String[] args){
        // public StringBuilder append(任意类型)
        // public StringBuilder reverse() 反转容器中的内容
        // public int length() 返回长度(字符出现的次数)
        // public String toString() 通过toString()可以实现将StringBuilder转变为String
        //1. 创建对象
        StringBuilder sb = new StringBuilder("abc");
        //2. 添加元素
        sb.append(1);
        sb.append(2.3);
        sb.append(true);
        sb.reverse();

        //打印
        //普及：
        //因为StringBuilder是Java已经写好的类
        //java在底层对他做了一些特俗处理
        //打印对象不是他的地址值而是属性值。
        System.out.print("the class sb: ");
        System.out.println(sb);
        int len = sb.length();
        System.out.println("the String's length is: " + len);
    }
}
