
import java.awt.*;
import java.awt.event.*;

class NumberConvert extends Frame{

    TextField numField;
    Label resultLabel;
    Button convertButton;
    String[] ones = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen"
    };
    String[] tens = {
        "", "", "twenty", "thirty", "forty", "fifty",
        "sixty", "seventy", "eighty", "ninety"
    };
    NumberConvert(){
        setTitle("numbers convert to English");
        setSize(600, 600);
        setLayout(new GridLayout(4, 1));

        // 数字界面
        add(new Label("number: "));
        numField = new TextField();
        add(numField);

        // 按钮
        add(new Label("Operation"));
        convertButton = new Button("convert");
        add(convertButton);

        //结果
        add(new Label("result"));
        resultLabel = new Label();
        resultLabel.setText("waiting for converting");
        add(resultLabel);

        convertButton.addActionListener(new ActionListener() {
            @Override  
            public void actionPerformed(ActionEvent e){
                try{
                    int num = Integer.parseInt(numField.getText().trim());
                    if(num < 0 || num > 100){
                        resultLabel.setText("Please input number between 0 and 100");
                        return;
                    }
                    String ret;
                    if(num >= 0 && num < 20){
                        ret = ones[num];
                    }else if(num >= 20 && num < 100){
                        if(num % 10 == 0)
                            ret = tens[num / 10];
                        else
                        ret = tens[num / 10] + "-" + ones[num % 10];
                    }else{
                        ret = "one hundred";
                    }
                    resultLabel.setText(ret);
                    // System.out.println(num);
                }catch(NumberFormatException exception){
                    resultLabel.setText("Please input an integer");
                }
                catch(Exception exception){
                    resultLabel.setText(exception.toString());
                    System.out.println(exception);
                }

            }
        });
        addWindowListener(new WindowAdapter(){
            @Override 
            public void windowClosing(WindowEvent e){
                dispose();
                System.exit(0);
            }
        });
        setVisible(true);
    }
    static public void main(String[] args){
        new NumberConvert();
    }
}