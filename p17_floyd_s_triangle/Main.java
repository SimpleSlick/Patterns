public class Main {
    public static void main(String[] args) {
        int n = 4;
        int counter = 1;

        for (int i = 1; i <= n; i++) {
            String row = "";

            for (int j = 1; j <= i; j++) {
                row += " " + counter;
                counter++;
            }

            System.out.println(row);
        }
    }
}