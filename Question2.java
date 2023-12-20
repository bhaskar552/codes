import java.util.Scanner;

class student2 {
    int a;

    student2(int n) {
        a = n;
    }

    public void show() {
        System.out.println(a);
    }

}

public class Question2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number: ");
        int n = sc.nextInt();
        student2 s1 = new student2(n);
        s1.show();
        sc.close();
    }
}