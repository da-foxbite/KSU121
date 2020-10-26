package Lab2.t7;

public class Cube {
    private int a;

    public Cube(int a) {
        this.a = a;
    }


    public double getSquare() {
        return (6 * Math.pow(this.a, 2));
    }

    public double getVolume() {
        return Math.pow(this.a, 3);
    }

    public double getDiag() {
        return (this.a * Math.sqrt(2));
    }
}
