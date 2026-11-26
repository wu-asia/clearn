
public class TestWeather {
    public static void main(String[] args){
        Weather wt = new Weather();
        wt.setDate("2026/10/1");
        wt.setDist("xxx");
        wt.setTemp(20.5);
        wt.setWindSpeed(2.1);
        wt.setWet(22.3);
        System.out.println("日期: " + wt.getDate() + "\n"
        + "地点: " + wt.getDist() + "\n" +
        "温度:" + wt.getTemp() + "\n"
        + "风速: " + wt.getWindSpeed() + "\n"
        + "湿度: " + wt.getWet());
    }
}
