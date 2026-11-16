// 7-4编写窗体应用程序，
// 实现人民币与欧元的换算，
// 在两个文本框中分别输入人民币值和汇率，
// 单击“转换”在结果标签中显示欧元值，
// 单击窗体的关闭图标可实现窗体的关闭。
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
public class Calculator extends Frame{
    TextField rmbField;
    TextField rateField;
    Button convertButton;
    Label resultLabel;

    Calculator(){
        setTitle("converting rmb to eur");
        setSize(400, 250);
        setLayout(new GridLayout(4,2));

        // rmb 界面
        add(new Label("rmb"));
        rmbField = new TextField();
        add(rmbField);

        // rate 界面
        add(new Label("rate"));
        rateField = new TextField();
        add(rateField);

        add(new Label("Operation"));
        convertButton = new Button("convert");
        add(convertButton);

        add(new Label("result"));
        resultLabel = new Label("waitint for converting");
        add(resultLabel);
        convertButton.addActionListener(new ActionListener() {
           @Override 
           public void actionPerformed(ActionEvent e){
            try{
                double rmb = Double.parseDouble(rmbField.getText().trim());
                double rate = Double.parseDouble(rateField.getText().trim());
                if(rmb < 0 || rate <= 0){
                    resultLabel.setText("invalid input");
                    return;

                }
                double eur = rmb / rate;
                resultLabel.setText("result: " + eur);
            }catch(NumberFormatException exception){
                System.out.println(exception);
            }
            catch(Exception exception){
                System.out.println(exception);
            }
           } 
        });

       addWindowListener(new WindowAdapter() {

            @Override
            public void windowClosing(WindowEvent e) {
                dispose();
                System.exit(0);
            }
        });
        setVisible(true);
    }
    static public void main(String[] args){
        new Calculator();
    }
    
}
