/*
设计一个求n!的方法， 结果为一个长整数。
编写一个程序从键盘输入一个数给整数K赋值，
然后调用求n!的方法求K!，在程序中规划处理如下异常，
多异常的捕捉在次序上有讲究吗？
1.输入的数不是一个整数，而是一个实数则不计算；
2.输入的数据时一个十六进制表示形式的串，入0x1a，
则取串的后续部分"1a"转换为十进制数，再进行计算。
提示：通过Integer.parseInt(String, 16)方法可以将串按十六进制识别转换为十进制。 */


public class Fractional {
    private String s;
    private long n;
    Fractional(){}
    Fractional(String s){
        if(s.startsWith("0x") || s.startsWith("0X")){
            try{
                String tmp = s.substring(2);
                long num = Long.parseLong(tmp, 16);
                // System.out.println(num);
                if(num < 0){
                    throw new IllegalArgumentException("请输入大于零的整数");
                }
                this.n = num;
            }
            catch(NumberFormatException e){
                System.out.println("请输入正确形式的十六进制, " + e);
            }
        }
        else{
            try{
                long num = Long.parseLong(s);
                if(num < 0){
                    throw new IllegalArgumentException("请输入大于零的整数");
                }
                this.n = num;
            }
            catch(NumberFormatException e){
                System.out.println("输入正确的十进制数字, " + e);
            }
        }
    }
    public long fractional(){
        if(this.n == 0){
            return 1l;
        }
        long ret = 1;
        for(int i = 1; i <= this.n; i++){
            ret *= i;
        }
        return ret;
    }
    
}


