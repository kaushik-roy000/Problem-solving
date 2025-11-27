import java.util.Scanner;

public class One {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int first = sc.nextInt();
            for (int i = 1; i < n; i++) sc.nextInt();
            System.out.println(first == 1 ? "YES" : "NO");
        }
    }
}