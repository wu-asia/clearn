import java.util.ArrayList;
import java.util.List;

public class PokerGame {
    public static void main(String[] args) {
        List<Card> allCards = new ArrayList<>();
        String[] suits = {"S", "H", "D", "C"};
        String[] cardNames = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

        // 生成52张牌
        for (String suit : suits) {
            for (int order = 1; order <= 13; order++) {
                String name = cardNames[order - 1];
                allCards.add(new Card(suit, order, name));
            }
        }

        // 手写 Fisher-Yates 洗牌
        shuffle(allCards);

        List<Card> east  = new ArrayList<>();
        List<Card> south = new ArrayList<>();
        List<Card> west  = new ArrayList<>();
        List<Card> north = new ArrayList<>();

        // 发牌：东、南、西、北循环发
        for (int i = 0; i < allCards.size(); i++) {
            Card c = allCards.get(i);
            switch (i % 4) {
                case 0: east.add(c); break;
                case 1: south.add(c); break;
                case 2: west.add(c); break;
                case 3: north.add(c); break;
            }
        }

        System.out.println("==== 东家手牌 ====");
        System.out.println(east);
        System.out.println("==== 南家手牌 ====");
        System.out.println(south);
        System.out.println("==== 西家手牌 ====");
        System.out.println(west);
        System.out.println("==== 北家手牌 ====");
        System.out.println(north);
    }

    // Fisher-Yates 洗牌算法
    public static void shuffle(List<Card> cards) {
        for (int i = cards.size() - 1; i > 0; i--) {
            // 随机下标：0 ~ i
            int randIndex = (int) (Math.random() * (i + 1));
            // 交换
            Card temp = cards.get(i);
            cards.set(i, cards.get(randIndex));
            cards.set(randIndex, temp);
        }
    }

    // 比较两张牌大小，按order比较
    public static int compareCard(Card c1, Card c2) {
        return Integer.compare(c1.getOrder(), c2.getOrder());
    }
}