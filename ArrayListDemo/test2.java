import java.util.ArrayList;
public class test2 {
    public static void main(String[] args){
        ArrayList<Student> list = new ArrayList<>();
        //2. 创建学生对象
        Student s1 = new Student("zhangsan", 23);
        Student s2 = new Student("lisi", 24);
        Student s3 = new Student("wangwu", 25);
        list.add(s1);
        list.add(s2);
        list.add(s3);
        for(int i = 0; i < list.size(); i++){
            Student stu = list.get(i);
            System.out.println(stu.getName() + " " + stu.getAge());
        }
    }
}
