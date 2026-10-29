public class Card {
    // 花色 S黑桃 H红桃 D方块 C梅花
    private String type;
    // 比较序号：2=1,3=2 ... K=12, A=13
    private int order;
    // 显示名称："2","3"... "J","Q","K","A"
    private String name;

    public Card(String type, int order, String name) {
        this.type = type;
        this.order = order;
        this.name = name;
    }

    // getter
    public String getType() {
        return type;
    }
    public int getOrder() {
        return order;
    }
    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return type + "-" + name;
    }
}