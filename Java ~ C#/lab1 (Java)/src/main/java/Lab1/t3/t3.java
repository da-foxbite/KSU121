/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task Дане натуральне число n. Обчислити: n ∑ k=1 ( (-1)^k+1 / k(k+1) )
 */
package Lab1.t3;
import java.util.Scanner;
// cумма членов ряда
public class t3 {
    public static void main(String[] args) {
        System.out.print("\n Дано натуральное число n. n = " + "\n");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        float Sum = 0;
        for (double k = 1; k <= n; k++){
            Sum += Math.pow(-1,k+1) / (k*(k+1));
        }
        System.out.print("Результат: " + Sum);
    }
}
