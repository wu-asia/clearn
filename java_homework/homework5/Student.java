public class Student {
    private String id;
    private int age;
    private String gender;
    private String name;
    Student(){}
    Student(String id, String name, String gender, int age){
        this.id = id;
        this.name = name;
        this.gender = gender;
        this.age = age;
    }
    public void setId(String id){
        this.id = id;
    }
    public void setName(String name){
        this.name = name;
    }
    public void setGender(String gender){
        this.gender = gender;
    }
    public void setAge(int age){
        this.age = age;
    }
    public String getId(){
        return this.id;
    }
    public String getName(){
        return this.name;
    }
    public String getGender(){
        return this.gender;
    }
    public int getAge(){
        return this.age;
    }
    public void print(){
        System.out.print("学号:" + this.id + '\n' 
            + "姓名: " + this.name + '\n' 
            + "性别: " + this.gender + '\n'
            + "年龄: " + this.age + '\n'
        );
    }
}
