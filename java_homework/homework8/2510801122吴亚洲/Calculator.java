
import java.awt.*;
import java.awt.event.*;

class Calculator extends Frame {

    TextField display;

    double firstNumber;
    String operator;
    boolean startNewNumber = true;

    Calculator() {

        // 设置窗体
        setTitle("AWT Calculator");
        setSize(350, 450);
        setLayout(new BorderLayout(5, 5));

        // 显示区域
        display = new TextField("0");
        display.setEditable(false);
        add(display, BorderLayout.NORTH);

        // 按钮区域
        Panel buttonPanel = new Panel();
        buttonPanel.setLayout(new GridLayout(4, 4, 5, 5));

        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "C", "0", "=", "+"
        };

        // 创建按钮并注册监听器
        for (String name : buttons) {

            Button button = new Button(name);
            buttonPanel.add(button);

            button.addActionListener(new ActionListener() {

                @Override
                public void actionPerformed(ActionEvent e) {

                    handleInput(e.getActionCommand());

                }
            });
        }

        add(buttonPanel, BorderLayout.CENTER);

        // 窗体关闭事件
        addWindowListener(new WindowAdapter() {

            @Override
            public void windowClosing(WindowEvent e) {
                dispose();
                System.exit(0);
            }
        });

        setLocationRelativeTo(null);
        setVisible(true);
    }

    // 处理按钮输入
    private void handleInput(String command) {

        // 数字输入
        if (command.matches("[0-9]")) {

            if (startNewNumber) {
                display.setText(command);
                startNewNumber = false;
            } else if (display.getText().equals("0")) {
                display.setText(command);
            } else {
                display.setText(display.getText() + command);
            }

            return;
        }

        // 清空
        if (command.equals("C")) {
            display.setText("0");
            firstNumber = 0;
            operator = null;
            startNewNumber = true;
            return;
        }

        // 运算符
        if (command.equals("+") ||
            command.equals("-") ||
            command.equals("*") ||
            command.equals("/")) {

            firstNumber = Double.parseDouble(display.getText());
            operator = command;
            startNewNumber = true;
            return;
        }

        // 等于号
        if (command.equals("=")) {

            if (operator == null || startNewNumber) {
                return;
            }

            double secondNumber =
                Double.parseDouble(display.getText());

            double result = 0;

            switch (operator) {

                case "+":
                    result = firstNumber + secondNumber;
                    break;

                case "-":
                    result = firstNumber - secondNumber;
                    break;

                case "*":
                    result = firstNumber * secondNumber;
                    break;

                case "/":
                    if (secondNumber == 0) {
                        display.setText("Cannot divide by zero");
                        operator = null;
                        startNewNumber = true;
                        return;
                    }
                    result = firstNumber / secondNumber;
                    break;
            }

            display.setText(String.valueOf(result));

            operator = null;
            startNewNumber = true;
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}
