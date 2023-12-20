class plate {
    int length;
    int width;

    void calc(int l, int b) {
        length = l;
        width = b;
        System.out.println("the area of plate is " + (length * width));
    }

}

class box extends plate {
    int height;

    void calc1(int l, int b, int h) {
        length = l;
        width = b;
        height = h;
        System.out.println("the area of box is " + (length * width * height));
    }

}

class woodbox extends box {
    int thick;

    void calc2(int l, int b, int h, int t) {
        length = l;
        width = b;
        height = h;
        thick = t;
        System.out.println("the area of wooden box is" + (length * width * height * thick));
    }

    public static void main(String args[]) {
        woodbox w1 = new woodbox();
        w1.calc2(2, 3, 4, 5);
        w1.calc1(4, 7, 9);
        w1.calc(3, 6);
    }

}
