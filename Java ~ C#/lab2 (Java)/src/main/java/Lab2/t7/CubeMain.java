/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task Клас «куб», який описує куб з заданим ребром. 
 * Методи класу дозволяють знаходити сумарну площу граней, об'єм куба, довжину великої діагоналі.
 */
package Lab2.t7;
import java.util.Scanner;

public class CubeMain {
    public static void main(String[] args) {
        System.out.print("Введите длину ребра: " + "\n");
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        Cube cube = new Cube(a);
        
        System.out.println("S / Суммарная площадь граней: " + String.format("%.2f", cube.getSquare()));
        System.out.println("V / Объём: " + String.format("%.2f", cube.getVolume()));
        System.out.println("d / Диагональ: " + String.format("%.2f", cube.getDiag()));
    }
}