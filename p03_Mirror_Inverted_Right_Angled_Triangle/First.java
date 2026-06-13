import java.util.Scanner;

public class First{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 1; i <= n; i++){
            String spaces = " ".repeat(i);
            String stars = "*".repeat(n - i + 1);

            System.out.println(spaces + stars);
        }

        scan.close();
    }
}