import java.util.Scanner;

public class pattern{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();

        for(int i = 1; i <= n; i++){
            StringBuilder row = new StringBuilder();

            for(int j = 1; j <= i; j++){
                if((i + j) % 2 == 0){
                    row.append("1 ");
                }else{
                    row.append("0 ");
                }
            }

            System.out.println(row);
        }

        scan.close();
    }
}