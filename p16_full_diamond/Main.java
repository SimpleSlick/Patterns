public class Main {
    public static void main(String[] args) {
        int n = 5;

        // Top portion
        for (int i = 1; i <= n; i++) {
            String spaces = " ".repeat(n - i);
            String stars = "* ".repeat(i);

            System.out.println(spaces + stars);
        }

        // Bottom portion
        for (int i = n - 1; i >= 1; i--) {
            String spaces = " ".repeat(n - i);
            String stars = "* ".repeat(i);

            System.out.println(spaces + stars);
        }
    }
}