import java.util.Scanner;

public class matrix {
    public void gethighest(int arr[][],int n)
    {
        int smalll = arr[0][0];
        int bigl = arr[0][0];
        int smallr = arr[0][0];
        int bigr = arr[0][0];
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                if (k == j) {
                    if (arr[k][j] > bigl) {
                        bigl = arr[k][j];
                    }
                    if (arr[k][j] < smalll)
                        ;
                    {
                        smalll = arr[k][j];
                    }
                }
                if (k + j == n - 1) {
                    if (arr[k][j] > bigr) {
                        bigr = arr[k][j];
                    }
                    if (arr[k][j] < smallr)
                        ;
                    {
                        smalll = arr[k][j];
                    }
                }
            }
        }
        System.out.println("Right diagonal smallest element " + smallr + " Biggest Element Of right Diagonal " + bigr);
        System.out.println("Left diagonal smallest element " + smalll + " Smallest Element Of left Diagonal " + bigl);
    }
    public static void main(String[] args) {
        int n, indexl = 0, indexr = 0;
        System.out.println("Enter order of matrix : ");
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        int ar[][] = new int[n][n];
        System.out.println("Enter Elements Of Matrix : ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ar[i][j] = s.nextInt();
            }
        }
        matrix m = new matrix();
        m.gethighest(ar, n);
    }
}