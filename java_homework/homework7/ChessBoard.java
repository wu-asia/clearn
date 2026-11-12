
import javax.swing.*;
import java.awt.*;

public class ChessBoard extends JFrame {

    public ChessBoard() {
        setTitle("国际象棋棋盘");
        setSize(600, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        JPanel board = new JPanel(new GridLayout(8, 8));

        // 创建 8×8 棋盘
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {

                JPanel square = new JPanel();

                // 设置黑白相间的颜色
                if ((row + col) % 2 == 0) {
                    square.setBackground(Color.WHITE);
                } else {
                    square.setBackground(Color.BLACK);
                }

                board.add(square);
            }
        }

        add(board);
        setVisible(true);
    }

    public static void main(String[] args) {
        new ChessBoard();
    }
}
