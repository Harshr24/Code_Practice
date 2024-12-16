//import java.util.*;

class Animal 
{
    public void makeSound() 
    {
        System.out.println("The animal makes a sound");
    }

    public static void main(String[] args) 
    {
        Animal ani = new Animal();
        Animal mycat = new Cat();

        ani.makeSound();
        mycat.makeSound();
    }
}

class Cat extends Animal 
{
    public void makeSound() 
    {
        System.out.println("The cat barks");
    }
}