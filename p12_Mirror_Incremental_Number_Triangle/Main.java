import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();

        for (int i = 1; i <= n; i++) {
            String rowContent = "";

            for (int j = 0; j < i; j++) {
                rowContent += (i + j) + " ";
            }

            rowContent = rowContent.trim();

            String lastRow = "";

            for (int j = 0; j < n; j++) {
                lastRow += (n + j) + " ";
            }

            lastRow = lastRow.trim();

            String spaces = " ".repeat(lastRow.length() - rowContent.length());

            System.out.println(spaces + rowContent);
        }

        input.close();
    }
}