import java.util.StringJoiner;
public class StringJoinerDemo1 {
    static void main(String[] args){
        // public StringJoiner(间隔符号) 创建一个StringJoiner对象，指定拼接时的间隔符号
        // public StringJoiner(间隔符号, 开始符号, 结束符号) 创建一个StringJoiner对象，指定拼接时的间隔符号、开始符号、结束符号
        // 成员方法
        // public StringJoiner add(添加内容) 添加数据，并返回对象本身
        // public int length() 返回长度
        // public String toString() 返回一个字符串(该字符串就是拼接之后的结果)
        // 1. 创建一个对象，并指定中间的间隔符号
        StringJoiner sj = new StringJoiner("---");
        sj.add("aaa").add("bbb").add("ccc");
        // 打印结果
        System.out.println(sj);
    }
}
