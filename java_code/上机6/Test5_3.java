// Test5_3.java
public class Test5_3
{
    // 用 throws 声明抛出异常，方法内部不再 try-catch
    public static void math(int a[]) throws ArrayIndexOutOfBoundsException, Exception
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            System.out.print("a[" + i + "]/" + i + "=" + (a[i] / i));
            System.out.println("    finally   i=" + i);
        }
        System.out.println("math继续！！");
    }

    public static void main(String[] args)
    {
        int[] array = {1, 2, 3, 4};
        try
        {
            math(array);
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.print("在main（）方法中捕获到了数组下标越界异常");
        }
        catch (Exception e)
        {
            System.out.print("在main（）方法中捕获到了Exception异常");
        }
        System.out.println("主程序继续！！");
    }
}