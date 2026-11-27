import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class LotteryDemo {
    // 六个标签
    private static JLabel[] labels = new JLabel[6];
    // 六个线程
    private static NumberThread[] threads = new NumberThread[6];
    // 全局控制标记，控制所有线程是否继续滚动
    private static boolean isRunning = true;

    public static void main(String[] args) {
        JFrame frame = new JFrame("选号程序");
        frame.setSize(520, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout(FlowLayout.CENTER, 15, 30));

        // 初始化6个标签，每个标签显示数字
        for (int i = 0; i < 6; i++) {
            labels[i] = new JLabel("0");
            labels[i].setFont(new Font("黑体", Font.BOLD, 50));
            labels[i].setPreferredSize(new Dimension(65, 65));
            labels[i].setHorizontalAlignment(SwingConstants.CENTER);
            frame.add(labels[i]);
        }

        // 停止按钮
        JButton stopBtn = new JButton("停止");
        stopBtn.setFont(new Font("黑体", Font.PLAIN, 24));
        stopBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                isRunning = false;
            }
        });
        frame.add(stopBtn);

        frame.setVisible(true);

        // 开启6个独立线程，一个线程控制一个标签
        for (int i = 0; i < 6; i++) {
            threads[i] = new NumberThread(labels[i]);
            threads[i].start();
        }
    }

    // 数字滚动线程类
    static class NumberThread extends Thread {
        private JLabel label;
        private Random random = new Random();

        public NumberThread(JLabel label) {
            this.label = label;
        }

        @Override
        public void run() {
            while (isRunning) {
                // 随机生成 0~9 的数字
                int num = random.nextInt(10);
                // Swing UI更新必须在事件调度线程
                SwingUtilities.invokeLater(() -> {
                    label.setText(num + "");
                });
                try {
                    Thread.sleep(80);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}