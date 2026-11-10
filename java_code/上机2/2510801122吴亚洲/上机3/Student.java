public class Student {
    private String name;
    private String sex;
    private int age;
    private double iChineseScore;
    private double iEnglishScore;
    private double iMathScore;

    Student(){}
    Student(String name, String sex, int age){
        this.name = name;
        this.sex = sex;
        this.age = age;
    }   
    public void setScore(double Chinese, double English, double Math){
        iChineseScore = Chinese;
        iEnglishScore = English;
        iMathScore = Math;
    }
    public double sum(){
        return this.iChineseScore + this.iEnglishScore + this.iMathScore;
    }
    public double average(){
        return this.sum() / 3;
    }
    public void printScore(){
        System.out.println("语文成绩: " + this.iChineseScore);
        System.out.println("英语成绩: " + this.iEnglishScore);
        System.out.println("数学成绩: " + this.iMathScore);
    }
    public void setName(String name){
        this.name = name;
    }
    public void setSex(String sex){
        this.sex = sex;
    }
    public void setAge(int age){
        this.age = age;
    }
    public String getName(){
        return this.name;
    }
    public String getSex(){
        return this.sex;
    }
    public int getAge(){
        return this.age;
    }
    public void print(){
        System.out.println(this.name + " " + this.sex + " " + this.age);
    }

    public void setStudent(double Chinese, double English, double Math){
        this.iChineseScore = Chinese;
        this.iEnglishScore = English;
        this.iMathScore = Math;
    }
    public void setStudent(int age){
        this.age = age;
    }
}
