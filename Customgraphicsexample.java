import javax.swing.*;
import java.awt.*;

public class CustomGraphicsExample extends JPanel {
   // @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        // Draw a blue filled rectangle
        g.setColor(Color.BLUE);
        g.fillRect(50, 50, 100, 100);

        // Draw a red line
        g.setColor(Color.RED);
        g.drawLine(150, 50, 250, 150);

        // Draw a green oval
        g.setColor(Color.GREEN);
        g.drawOval(300, 50, 100, 100);
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Custom Graphics Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        CustomGraphicsExample panel = new CustomGraphicsExample();
        frame.add(panel);
        frame.setSize(500, 200);
        frame.setVisible(true);
    }
}
