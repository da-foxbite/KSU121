/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task Упорядкувати масив розміру N по зростанню
 */
package Lab1.t4;
import java.util.Scanner;
import java.util.Arrays;

public class t4 {
    public static void main(String[] args) {
        System.out.print("\nГенерация массива размера n. n = " + "\n");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int arr[] = new int[n];
        
        System.out.print("Границы: " + "\n");
        int min = scanner.nextInt();
        int max = scanner.nextInt();
        
        // System.out.print(String.format("%d" ,a) + String.format("%d" ,b));
        
        for(int i = 0; i < arr.length; i++) {
            arr[i] = min + (int)(Math.random() * max);
        } // предпочитает значения на месте перед math.random()?
        
        System.out.print("\nМассив: " + Arrays.toString(arr) + "\n");
        
        System.out.print("\nМассив отсортирован: \n");
        Arrays.sort(arr);
        
        for(int i = 0; i <  arr.length; i++) {
            System.out.print(arr[i] + "  ");
        }
        
    }

}
