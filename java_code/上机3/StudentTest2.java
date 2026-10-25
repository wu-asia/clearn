import java.util.Scanner;

public class StudentTest2 {
    public static void main(String[] args){
        double Chinese, English, Math;
        Scanner sc = new Scanner(System.in);
        Chinese = sc.nextDouble();
        English = sc.nextDouble();
        Math = sc.nextDouble();
        Student stu = new Student();
        stu.setScore(Chinese, English, Math);
        stu.printScore();
        System.out.println("总成绩: " + stu.sum() + "平均成绩: " + stu.average());
    }
}
