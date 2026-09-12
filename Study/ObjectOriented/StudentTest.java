public class StudentTest {
    public static void main(String[] args){
        Student s = new Student();
        Student s1 = new Student("zhangsan", 23);
        s.setAge(20);
        s.setName("lisi");
        System.out.println(s.getAge() + " " + s.getName());
        System.out.println(s1.getName());
        System.out.println(s1.getAge());
    }
}
