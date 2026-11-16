import java.awt.*;

import javax.swing.border.Border;

import java.awt.event.*;
public class Cal extends Frame{
    TextField display;
    String operator;
    boolean startNewNumber = true;
    double firstNumber;

    Cal(){
        setTitle("awt calculator");
        setSize(400,400);
        setLayout(new BorderLayout());

        // display
        display = new TextField("0");
        display.setEditable(false);
        add(display, BorderLayout.NORTH);

        // button
        Panel buttonPanel = new Panel();
        buttonPanel.setLayout(new GridLayout(4,4));
        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "C", "0", "=", "+"
        };
        for(String name : buttons){
            Button button = new Button(name);
            buttonPanel.add(button);
            button.addActionListener(new ActionListener() {
                @Override 
                public void actionPerformed(ActionEvent e){
                    handleInput(e.getActionCommand());
                    // System.out.println(e.getActionCommand());
                }
            });
        }

        add(buttonPanel, BorderLayout.CENTER);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e){
                dispose();
                System.exit(0);
            }
        });
        setVisible(true);
    }
    private void handleInput(String command){
        if(command.matches("[0-9]")){
            if(startNewNumber){
                display.setText(command);
                startNewNumber = false;
            }else if(display.getText().equals("0")){
                display.setText(command);
            }else{
                display.setText(display.getText() + command);
            }
            return;
        }
        if(command.equals("C")){
            display.setText("0");
            operator = null;
            startNewNumber = true;
            firstNumber = 0;
            return;
        }
        if(command.equals("+") || 
            command.equals("-") || 
            command.equals("*") || 
            command.equals("/")){
            startNewNumber = true;
            firstNumber = Double.parseDouble(display.getText());
            operator = command;
            return;
        }
        if(command.equals("=")){
            if(operator == null || startNewNumber){
                return;
            }
            double secondNumber = Double.parseDouble(display.getText());
            double ret = 0.0;
            switch(operator){
                case "+":
                    ret = firstNumber + secondNumber;
                    break;
                case "-":
                    ret = firstNumber - secondNumber;
                    break;
                case "*":
                    ret = firstNumber * secondNumber;
                    break;
                case "/":
                    if(secondNumber == 0){
                        display.setText("divide by zero");
                        operator = null;
                        startNewNumber = true;
                        firstNumber = 0;
                        return;
                    }
                    ret = firstNumber / secondNumber;
                    break;
            }
            display.setText("" + ret);
            operator = null;
            firstNumber = 0;
            startNewNumber = true;
            return;
        }
    }
    static public void main(String[] args){
        new Cal();
    }
}
