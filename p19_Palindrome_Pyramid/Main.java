public class Main
{
    public static void main(String[] args){
        int n = 5;

        for (int i = 1; i <= n; i++){
            String row = "";

            String spaces = "";

            for (int k = 1; k <= n - i; k++){
                spaces += "  ";
            }

            for (int j = 1; j <= i; j++){
                row += j;
            }

            for (int j = i - 1; j >= 1; j--){
                row += j;
            }

            System.out.println(spaces + row);
        }
    }
}