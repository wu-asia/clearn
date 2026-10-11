import java.util.ArrayList;
public class TestDemo1 {
    public static void main(String[] args){
        ArrayList<Student> list = new ArrayList<>();
        Student stu1 = new Student("zhangsan", 23, "male");
        Student stu2 = new Student("lisi", 24, "female");
        Student stu3 = new Student("wangwu", 25, "male");
        list.add(stu1);
        list.add(stu2);
        list.add(stu3);
        System.out.println(StudentUtil.getMax(list));
    }
}
