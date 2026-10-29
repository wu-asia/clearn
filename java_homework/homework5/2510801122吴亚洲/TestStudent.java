import java.lang.foreign.SymbolLookup;
import java.util.ArrayList;
import java.util.Scanner;
public class TestStudent {
    public static void main(String[] args){
        ArrayList<Student> stuArr = new ArrayList<>();
        int num;
        Scanner sc = new Scanner(System.in);
        do{
            Menu();
            num = sc.nextInt();
            switch(num){
                case 1:
                    String id = sc.next();
                    String name = sc.next();
                    String gender = sc.next();
                    int age = sc.nextInt();
                    stuArr.add(new Student(id, name, gender, age));
                    break;
                case 2:
                    String delId = sc.next();
                    boolean flag = false;
                    for(int i = 0; i < stuArr.size(); i++){
                        if(stuArr.get(i).getId().equals(delId)){
                            stuArr.remove(i);
                            flag = true;
                            System.out.println("删除成功");
                            break;
                        }
                    }
                    if(!flag){
                        System.out.println("为找该学号的学生");
                    }
                    break;
                    case 3:
                        for(Student s : stuArr){
                            s.setAge(s.getAge() + 1);
                        }
                        break;
                    case 4:
                        for(Student s : stuArr){
                            s.print();
                        }
                    case 5:
                        int n = stuArr.size();
                        for(int i = 0; i < n - 1; i++){
                            for(int j = 0; j < n - 1 - i; j++){
                                Student s1 = stuArr.get(j);
                                Student s2 = stuArr.get(j + 1);
                                if(s1.getName().compareTo(s2.getName()) > 0){
                                    Student tmp = stuArr.get(j);
                                    stuArr.set(j, stuArr.get(j + 1));
                                    stuArr.set(j + 1, tmp);
                                }
                            }
                        }
                        for(Student s : stuArr){
                            s.print();
                        }
                        break;
            }
        }while(num != 0);
        sc.close();
    }
}

static void Menu(){
    System.out.println("1.增加一个学生");
    System.out.println("2.根据学号删除某个学生");
    System.out.println("3.将所有的学生的年龄增加一岁");
    System.out.println("4.按照数组中的顺序输出所有学生的信息");
    System.out.println("5.将所有的学生姓名排序输出");
}
