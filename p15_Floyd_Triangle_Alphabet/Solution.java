public class Solution {
    public static void main(String[] args) {
        int n = 5;
        int charCode = 65; // Starting character 'A'

        for (int i = 1; i <= n; i++) {

            StringBuilder row = new StringBuilder();

            for (int j = 1; j <= i; j++) {

                row.append((char) charCode).append(" ");
                charCode++;
            }

            System.out.println(row.toString().trim());
        }
    }
}
