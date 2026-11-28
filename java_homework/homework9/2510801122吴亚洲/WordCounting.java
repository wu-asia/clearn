import java.util.HashMap;
import java.util.Map;

public class WordCounting {
    public static void main(String[] args){
        Map<String, Integer> map = new HashMap<>();
        map.put("beginWithW", 0);
        map.put("len3", 0);
        map.put("containOr", 0);
        for(String s : args){
            if(s.startsWith("w")){
                map.put("startWithW", map.get("starWithW") + 1);
            }
            else if(s.length() == 3){
                map.put("len3", map.get("len3") + 1);

            }
            else if(s.contains("or")){
                map.put("containOr", map.get("containOr") + 1);
            }
            System.out.println("以w开头单词数量：" + map.get("startWithW"));
            System.out.println("长度为3单词数量：" + map.get("len3"));
            System.out.println("包含or单词数量：" + map.get("containOr"));
        }
    }
}
