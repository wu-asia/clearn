
import java.awt.*;
import java.awt.event.*;

public class CurrencyConverter extends Frame {

    TextField rmbField;
    TextField rateField;
    Label resultLabel;
    Button convertButton;

    public CurrencyConverter() {

        // 设置窗体
        setTitle("Converter between rmb and eur");
        setSize(400, 250);
        setLayout(new GridLayout(4, 2, 10, 10));

        // 人民币输入框
        add(new Label("rmb:"));
        rmbField = new TextField();
        add(rmbField);

        // 汇率输入框
        add(new Label("rate(rmb/eur): "));
        rateField = new TextField("7.8");
        add(rateField);

        // 转换按钮
        add(new Label("Operation"));
        convertButton = new Button("convert");
        add(convertButton);

        // 结果标签
        add(new Label("convert result: "));
        resultLabel = new Label("Waiting for convert");
        add(resultLabel);

        // 注册按钮监听器
        convertButton.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {

                try {
                    // 获取文本框内容
                    double rmb = Double.parseDouble(
                        rmbField.getText().trim()
                    );

                    double rate = Double.parseDouble(
                        rateField.getText().trim()
                    );

                    // 判断输入是否合法
                    if (rmb < 0 || rate <= 0 ||
                        !Double.isFinite(rmb) ||
                        !Double.isFinite(rate)) {

                        resultLabel.setText("Input invalid");
                        return;
                    }

                    // 计算欧元
                    double euro = rmb / rate;

                    // 显示结果
                    resultLabel.setText(
                        String.format("%.2f Euro", euro)
                    );

                } catch (NumberFormatException ex) {

                    resultLabel.setText("Please input true number");
                }
            }
        });

        // 设置窗体关闭事件
        addWindowListener(new WindowAdapter() {

            @Override
            public void windowClosing(WindowEvent e) {
                dispose();
                System.exit(0);
            }
        });

        // 窗体居中
        setLocationRelativeTo(null);

        // 显示窗体
        setVisible(true);
    }

    public static void main(String[] args) {
        new CurrencyConverter();
    }
}
