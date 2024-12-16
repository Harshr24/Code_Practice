/*import java.util.*;

public class Employee 
{
    public static void main(String[] args) 
    {
        Emplo emp = new Emplo("John", 5000);
        HrM hrM = new HrM("Jane", 6000, "HR");

        emp.work();
        hrM.work();

        System.out.println("Employee salary: " + emp.getSalary());
        System.out.println("HR Manager salary: " + hrM.getSalary());

        hrM.addEmployee(emp);
    }
} 

class Emplo 
{
    String name;
    double salary;

    public Emplo(String name, double salary) 
    {
        this.name = name;
        this.salary = salary;
    }

    public void work() 
    {
        System.out.println(name + " is working.");
    }

    public double getSalary() 
    {
        return salary;
    }

    public String getName() 
    {
        return name;
    }
}

class HrM extends Emplo 
{
    String department;

    public HrM(String name, double salary, String department) 
    {
        super(name, salary);
        this.department = department;
    }

    public void work() 
    {
        System.out.println(getName() + " is managing the " + department + " department.");
    }

    public void addEmployee(Emplo employee) 
    {
        System.out.println(getName() + " adds " + employee.getName() + " to the " + department + " department.");
    }
}   using constructor*/



public class Employee 
{ 
    public static void main(String[] args) 
    {
        Emplo emp = new Emplo();
        emp.setdata("John",5000);

        HrM hrM = new HrM();
        hrM.setdata("Riz",6000);
        hrM.setDepartment("HR");

        emp.work();
        hrM.work();

        System.out.println("Employee salary: " + emp.getSalary());
        System.out.println("HR Manager salary: " + hrM.getSalary());

        hrM.addEmployee(emp);
    }
}

class Emplo 
{
    String name; 
    double salary;

    public void setdata(String name, double salary) 
    {
        this.name = name;
        this.salary = salary;
    }

    public void work() 
    {
        System.out.println(name + " is working.");
    }

    double getSalary() 
    {
        return salary;
    }
    String getName() 
    {
        return name;
    }
}

class HrM extends Emplo 
{
    String department;

    public void setDepartment(String department) 
    {
        this.department = department;
    }

    public void work() 
    {
        System.out.println(getName() + " is managing the " + department + " department.\n");
    }

    public void addEmployee(Emplo employee) 
    {
        System.out.println("\n" + getName() + " adds " + employee.getName() + " to the " + department + " department.");
    }
}