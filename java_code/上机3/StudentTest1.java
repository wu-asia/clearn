
public class StudentTest1 {
    public static void main(String[] args){
        System.out.println("hello");
        Student stu1 = new Student("ZhangSan", "male", 20);
        stu1.setAge(stu1.getAge() + 1);
        if(stu1.getAge() <= 20){
            stu1.print();
        }
        Student stu2 = new Student();
        stu2.setAge(10);
        stu2.setName("LiSi");
        stu2.setSex("female");
        stu2.setAge(stu2.getAge() + 1);
        if(stu2.getAge() <= 20){
            stu2.print();
        }
    }
}
