import java.util.Scanner;

public class Employee {

    String name;
    int age;
    String dept_name;
    float M_salary;

    public void getInput() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Name of the employee : ");
        name = in.next();
        System.out.print("Enter the age : ");
        age = in.nextInt();
        System.out.print("Enter the Department Name : ");
        dept_name = in.next();
        System.out.print("Enter the salary : ");
        M_salary = in.nextFloat();
    }

    public void display() {
        System.out.println("The Name of the employee : " + name);
        System.out.println("The age : " + age);
        System.out.println("The Department Name : " + dept_name);
        System.out.println("The salary : \n" + M_salary);

    }

    public static void main(String[] args) {
        Employee e[] = new Employee[5];
        for (int i = 0; i < 2; i++) {
            e[i] = new Employee();
            e[i].getInput();
        }

        System.out.println("* Data Entered as below *");
        for (int i = 0; i < 5; i++) {
            e[i].display();
        }
    }
}