package Lab1.t1;

public class Circle {
    private double r;

    public Circle(double r) {
        this.r = r;
    }


    public double getLength() {
        return 2 * Math.PI * this.r;
    }

    public double getSquare() {
        return Math.PI * Math.pow(this.r, 2);
    }

    public double getVol() {
        return 4 / 3 * Math.PI * Math.pow(this.r, 3);
    }
}
