import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        for (int i = 1; i <= n; i++) {
            StringBuilder row = new StringBuilder();

            for (int j = 0; j < i; j++) {
                row.append(i + j).append(" ");
            }

            System.out.println(row.toString().trim());
        }

        scan.close();
    }
}