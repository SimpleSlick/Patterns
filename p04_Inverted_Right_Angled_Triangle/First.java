import java.util.Scanner;

public class First{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = n; i >= 1; i--){
            System.out.println("*".repeat(i));
        }

        scan.close();
    }
}