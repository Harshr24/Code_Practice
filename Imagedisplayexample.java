import javax.swing.*;

public class ImageDisplayExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Image Display Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Load image from file
        ImageIcon icon = new ImageIcon("C:\\Users\\HARSH RAI\\Pictures\\Lakshmi Narayan.jpg");

        // Create a JLabel with the image icon
        JLabel label = new JLabel(icon);

        // Add the label to the frame
        frame.add(label);

        // Adjust the frame size to fit the image
        frame.pack();

        // Make the frame visible
        frame.setVisible(true);
    }
}
