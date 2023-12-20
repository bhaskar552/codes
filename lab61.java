class TwoD {
    int length;
    int breadth;

    void cost(int l, int b) {
        length = l;
        breadth = b;
        System.out.println("The cost for 2D plastic will be " + (length * breadth * 40));
    }
}

class ThreeD extends TwoD {
    int height;

    void cost2(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
        System.out.println("The cost for 3D plastic will be " + (length * breadth * height * 60));
    }

    public static void main(String args[]) {
        ThreeD b1 = new ThreeD();
        b1.cost2(10, 5, 20);
        b1.cost(10, 20);
    }
}
