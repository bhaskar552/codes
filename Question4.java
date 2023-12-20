import java.util.Scanner;

public class Question4 {

    static void findSum(int[] arr) {
        int sum = 0;
        for (int i : arr) {
            sum += i;
        }
        System.out.println(sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size of Array: ");
        int n = sc.nextInt();4
        
        int arr[] = new int[n];
        for (int i = 0; i < n; ++i)
            arr[i] = sc.nextInt();
        findSum(arr);
        sc.close();
    }
}
