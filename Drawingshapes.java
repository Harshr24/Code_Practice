// Define the interface
interface Drawable {
    void draw();
}

// Implement the interface in classes representing shapes
class Circle implements Drawable {
    private int radius;

    Circle(int radius) {
        this.radius = radius;
    }

    public void draw() {
        System.out.println("Drawing a circle with radius " + radius);
    }
}

class Square implements Drawable {
    private int sideLength;

    Square(int sideLength) {
        this.sideLength = sideLength;
    }

    public void draw() {
        System.out.println("Drawing a square with side length " + sideLength);
    }
}

// Example usage
public class DrawingShapes {
    public static void main(String[] args) {
        Circle circle = new Circle(5);
        Square square = new Square(8);

        circle.draw();  // Output: Drawing a circle with radius 5
        square.draw();  // Output: Drawing a square with side length 8
    }
}
