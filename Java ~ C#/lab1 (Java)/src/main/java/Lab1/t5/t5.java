/**
 * @date 24.09.2020
 * @author Vlad Suptelia
 * @index 7
 * @task На площині задані 5 точок з координатами (x0,y0), (x1,y1) … , (x4,y4). Знайти дві найближчі точки
 */
package Lab1.t5;
import java.util.Scanner;
// import java.util.Arrays;
import java.awt.geom.Point2D;

// по сути не выполняет тз, надо переделать
public class t5 {
    public static void main(String[] args) {
        
        System.out.print("\nПять точек на координатной плоскости." + "\n");
        Scanner scanner = new Scanner(System.in);
        int[] num = new int[10];
        for(int i = 0; i < 10; i++) {
            num[i] = scanner.nextInt();
        }
        // System.out.println(Arrays.toString(num));
        
        // это не код а преступление перед человечеством ну да ладно
        float AB, AC, AD, AE, BC, BD, BE, CD, CE, DE; 
        AB = (float) Point2D.distance(num[0], num[1], num[2], num[3]);
        AC = (float) Point2D.distance(num[0], num[1], num[4], num[5]);
        AD = (float) Point2D.distance(num[0], num[1], num[6], num[7]);
        AE = (float) Point2D.distance(num[0], num[1], num[8], num[9]);
        BC = (float) Point2D.distance(num[2], num[3], num[4], num[5]);
        BD = (float) Point2D.distance(num[2], num[3], num[6], num[7]);
        BE = (float) Point2D.distance(num[2], num[3], num[8], num[9]);
        CD = (float) Point2D.distance(num[4], num[5], num[6], num[7]);
        CE = (float) Point2D.distance(num[4], num[5], num[8], num[9]); 
        DE = (float) Point2D.distance(num[5], num[6], num[8], num[9]);
        
        float[] dots = new float[10];
        dots[0] = AB; dots[1] = AC; dots[2] = AD; dots[3] = AE;
        dots[4] = BC; dots[5] = BD; dots[6] = BE;
        dots[7] = CD; dots[8] = CE;
        dots[9] = DE;
        
        System.out.format(" AB = %.2f%n AC = %.2f%n AD = %.2f%n AE = %.2f%n BC = %.2f%n BD = %.2f%n BE = %.2f%n CD = %.2f%n CE = %.2f%n "
                + "DE = %.2f%n%n ", dots[0], dots[1], dots[2], dots[3], dots[4], dots[5], dots[6], dots[7], dots[8], dots[9]);
        
        // Arrays.sort(dots);
        // System.out.println(" Наименьшее расстояние между точками равно " + dots[0]);
        
        System.out.format("Наименьшее расстояние между точками равно %.2f", FindMin.getMinValue(dots));
        // TODO: вывод идентификатора переменной при её соответствии минимальному значению (вместо вывода всего массива)
        
        /* x   y
        A [0] [1] 
        B [2] [3]  
        C [4] [5] 
        D [6] [7] 
        E [8] [9] */
    }
}


/* либо двухмерные массивы и циклы либо сохранение рассудка
        
        int[][] matrixP;
        matrixP = new int[5][2];
        
        int a,b;
        for (int i=0; i<5; i++){
                a = scanner.nextInt();
                b = scanner.nextInt();
                matrixP[i]= Math.abs(a-b);
        }    
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(matrixP[i][j] + "  ");
            }
        System.out.println();
	}
        
        int min = Math.abs(matrixP[0][1]-matrixP[0][0]);
        int x1=matrixP[0][0], x2=matrixP[0][1];
        for (int i = 1; i < 5; i++) {
           if (Math.abs(matrixP[i][1]-matrixP[i][0]) < min){
               min = Math.abs(matrixP[i][1]-matrixP[i][0]);
               x1=matrixP[i][0];
               x2=matrixP[i][1];
           }
        }
        
        System.out.println(x1 + "  " + x2);
        */

/* 0   1
0 [x1][y1]
1 [x2][y2]
2 [x3][y3]
3 [x4][y4]
4 [x5][y5] */