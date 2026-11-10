
public class StudentTest3 {
    public static void main(String[] ages){
        Student stu = new Student();
        stu.setStudent(20.2, 20.3, 30.4);
        stu.setStudent(10);
        stu.printScore();
        System.out.println("年龄:" + stu.getAge());
    }
}
