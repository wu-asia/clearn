
public class Student {
    private String name;
    private int age;
    private String gender;
    Student(){}
    Student(String name, int age, String gender){
        this.name = name;
        this.age = age;
        this.gender = gender;
    }
    String getName(){
        return this.name;
    }
    int getAge(){
        return this.age;
    }
    String getGender(){
        return this.gender;
    }
    
}
