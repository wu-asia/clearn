import javax.swing.*;
import java.awt.*;
import java.util.Calendar;

public class TimeThreadDemo {
    public static void main(String[] args) {
        JFrame frame = new JFrame("实时时钟");
        frame.setSize(500, 120);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JTextField timeField = new JTextField(15);
        timeField.setFont(new Font("微软雅黑", Font.PLAIN, 24));
        frame.add(timeField);

        frame.setVisible(true);

        // 新建线程循环刷新时间
        new Thread(() -> {
            while (true) {
                Calendar cal = Calendar.getInstance();
                int hour = cal.get(Calendar.HOUR_OF_DAY);
                int minute = cal.get(Calendar.MINUTE);
                int second = cal.get(Calendar.SECOND);

                String timeStr = String.format("%02d:%02d:%02d", hour, minute, second);

                // Swing组件更新必须在事件调度线程
                SwingUtilities.invokeLater(() -> {
                    timeField.setText(timeStr);
                });

                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                    break;
                }
            }
        }).start();
    }
}