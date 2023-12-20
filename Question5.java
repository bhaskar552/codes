import java.util.Scanner;

public class Question5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size of Array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; ++i)
            arr[i] = sc.nextInt();
        System.out.print("Enter Value to search: ");
        int key = sc.nextInt();
        for (int i = 0; i < n; ++i)
            if (arr[i] == key)
                System.out.println("Found at Index: " + i);
        sc.close();
    }
}
