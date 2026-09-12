import java.util.Scanner;

public class First{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        // top portion
        for(int i = 1; i <= n; i++){
            System.out.println("*".repeat(i));
        }

        // bottom portion
        for(int i = n - 1; i >= 1; i--){
            System.out.println("*".repeat(i));
        }
        
        scan.close();
    }
}