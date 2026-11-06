// 第二题：有以下15位身份证数据,
// 假设被存在sfzMessage中;
// String sfzMessage=“370102770102413, 
// 370102760807911, 370102660810114,…”
// 现在把这组数据变为18位，
// 结果为“ 37010219770102413A, 
// 37010219760807911B, 370102196608101149”
// 为简单实现，
// 最后一位可随机产生”10X23456789”中的任何一个来补充

import java.lang.StringBuffer;

public class CharTest {
    public static void main(String[] args){
        String sfzMessage = 
        "370102770102413, 370102760807911, 370102660810114 ";
        char ch[] = {'1', '0', 'X', '2', '3', '4', '5', '6', '7', '8', '9'};
        String[] strArr = sfzMessage.split(",");
        for(int i = 0; i < strArr.length; i++){
            int num = (int) (Math.random() * (10 + 1));
            StringBuffer sb = new StringBuffer(strArr[i].trim());
            sb.insert(6, "19");
            sb.append(ch[num]);
            strArr[i] = sb.toString();
        }
        for(int i = 0; i < strArr.length; i++){
            System.out.println(strArr[i]);
        }
}
}
