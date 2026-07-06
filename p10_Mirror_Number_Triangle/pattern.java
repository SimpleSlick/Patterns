import java.util.Scanner;

public class pattern{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 1; i <= n; i++){
            String spaces = " ".repeat(n - i);
            String numbers = Integer.toString(i).repeat(i);

            System.out.println(spaces + numbers);
        }

        scan.close();
    }
}