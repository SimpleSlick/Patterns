import java.util.Scanner;

public class program{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 0; i < n; i++){
            char ch = (char)('A' + i);
            String row = Character.toString(ch).repeat(i + 1);

            System.out.println(row + " ");
        }

        scan.close();
    }
}