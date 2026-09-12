public class GirlFriend {
    private String name;
    private int age;
    private String gender;

    public void setAge(int age){
        if(age >= 18 && age <= 50){
            this.age = age;
        }
        else{
            System.out.println("非法数据");
        }
    }
    public int getAge(){
        return age;
    }
}
