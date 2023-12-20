import java.util.Scanner;

class student {
    int a;

    student() {
        a = 10;
    }

    public void show() {
        System.out.println(a);
    }

}

public class Question1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        student s1 = new student();
        s1.show();
        sc.close();
    }
}