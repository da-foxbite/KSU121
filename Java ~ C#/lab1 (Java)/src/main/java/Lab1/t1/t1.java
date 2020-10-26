/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task  Обчислити довжину окружності, площа кругу й обсяг кулі того самого радіуса
 */
package Lab1.t1;
import java.util.Scanner;
// import org.apache.commons.math3.util.Precision;

public class t1 {
    public static void main(String[] args) {
        System.out.print("Введите радиус: " + "\n");
        Scanner scanner = new Scanner(System.in);
        int r = scanner.nextInt();
        Circle circle = new Circle(r);
        
        System.out.println("C / длина окружности: " + String.format("%.4g", circle.getLength()));
        System.out.println("S / площадь круга: " + String.format("%.4g", circle.getSquare()));
        System.out.println("V / объём шара: " + String.format("%.4g", circle.getVol()));
    }
}

/* или
public class t1 {
   public static void main(String[] args) {
    System.out.print("Введите радиус круга: " + "\n");
    Scanner scanner = new Scanner(System.in);
    int radius = scanner.nextInt();
    System.out.println("C: " + 2*Math.PI*radius);
    System.out.println("S: " + Math.PI*Math.pow(radius,2));
    System.out.println("V: " + 4/3*Math.PI*Math.pow(radius,3));}
   }
*/