/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task На числовій осі розташовано три точки: A, B, C. Визначити, яка із двох останніх точок (B або C)
 * розташована ближче до A, і вивести цю точку і її відстань від точки A.
 */
package Lab1.t2;
import java.util.Scanner;
// import java.util.Arrays;
import java.awt.geom.Point2D;

public class t2 {
    public static void main(String[] args) {
        System.out.print("Введите координаты в формате 'xa ya xb yb xc yc': " + "\n");
        Scanner scanner = new Scanner(System.in);
        int[] num = new int[6];
        for(int i = 0; i < 6; i++) {
            num[i] = scanner.nextInt();
        }
        // System.out.println(Arrays.toString(num));
        float AB, AC; 
        AB = (float) Point2D.distance(num[0], num[1], num[2], num[3]);
        // BC = (float) Point2D.distance(num[2], num[3], num[4], num[5]);
        AC = (float) Point2D.distance(num[0], num[1], num[4], num[5]);
        
        if (AB < AC) {
            System.out.format("Точка B расположена ближе к А %n Координаты: (%d;%d)%n Расстояние до А: %f%n", num[2], num[3], AB);
        }
        else if (AC < AB) {
            System.out.format("Точка C расположена ближе к А %n Координаты: (%d;%d)%n Расстояние до А: %f%n", num[4], num[5], AC);
        }
        else
            System.out.println("Расстояния равны / Ошибка");
        
        //String input = scanner.nextLine();
        //String[] num = input.split(" ");  
    }
}

/* x   y
A [0] [1] 
B [2] [3]  
C [4] [5] */