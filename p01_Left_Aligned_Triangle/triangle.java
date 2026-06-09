import java.util.Scanner;

public class triangle{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 1; i <= n; i++){
            System.out.println("*".repeat(i));
        }
        
        scan.close();
    }
}