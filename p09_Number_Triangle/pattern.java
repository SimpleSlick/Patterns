import java.util.Scanner;

public class pattern{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int row = scan.nextInt();

        for(int i = 1; i <= row; i++){
            String rowNum = Integer.toString(i).repeat(i);
            System.out.println(rowNum);
        }

        scan.close();
    }
}