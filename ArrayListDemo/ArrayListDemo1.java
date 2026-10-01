
import java.util.ArrayList;
public class ArrayListDemo1 {
    public static void main(String[] args){
        //1. 创建集合的对象
        // 泛型：限定集合中的存储类型
        // ArrayList<String> list = new ArrayList<String>();
        //JDK7:
        ArrayList<String> list = new ArrayList<>();
        // 此时我们创建的是ArrayList的对象，而ArrayList是java已经写好的一个类
        // 这个类的底层做了一些处理
        // 打印对象不是地址值，而是集合中存储数据的内容
        // 在展示的时候会拿出[]把所有的数据进行包裹
        System.out.println(list);
        /**
         *  boolean add(E e) 添加
         *  boolean remove(E e) 删除
         *  E remove(int index)
         *  E set(int index, E e) 修改
         *  E get(int index) 查询
         *  int size() 获取长度
         */
        //2. 添加元素
        boolean res = list.add("aaa");
        System.out.println(list);
        
        list.add("bbb");
        list.add("ccc");
        boolean res1 = list.remove("aaa");
        System.out.println(res1);
        boolean res2 = list.remove("ddd");
        System.out.println(res2);

        String str1 = list.remove(0);
        System.out.println(str1);
        System.out.println(list);
        list.add("aaa");
        list.add("bbb");
        list.add("ddd");

        System.out.println(list.get(0));
        
    }
}
