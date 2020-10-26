package Lab1.t5;

public class FindMin {
    public static float getMinValue(float[] dots){
        float minValue = dots[0];
        for(int i = 0; i < dots.length; i++){
            if(dots[i] < minValue){
                minValue = dots[i];
            }
        }
        return minValue;
    }
}