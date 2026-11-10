
interface Task{
    public abstract void doTask();
}
class GraduateStudent implements Task{
    private String taskInfo;
    GraduateStudent(){}
    GraduateStudent(String taskInfo){
        this.taskInfo = taskInfo;
    }
    public void setTaskInfo(String taskInfo){
        this.taskInfo = taskInfo;
    }
    public String getTaskInfo(){
        return this.taskInfo; 
    }
    @Override 
    public void doTask(){
        System.out.println("学生信息" + this.taskInfo);
    }
}
public class GraduateStudentTest {
    public static void main(String[] args){
        GraduateStudent s1 = new GraduateStudent("计算机科学");
        System.out.println("他的课题: " + s1.getTaskInfo());
    }
}
