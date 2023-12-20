import java.util.Scanner;

public class wtlab3b {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your marks");
    int marks=sc.nextInt();


     if(marks>=90)
     System.out.println("grade: O"); 
     if(marks>=80&&marks<90)
     System.out.println("grade: E");
    if(marks>=70&&marks<80)
    System.out.println("grade: A");
    else
    System.out.println("grade: F");


    }
}
