class static_class {
    static int a;

    static_class() {
        System.out.println("Constructor called!");
        System.out.println("Constructor is called " + a + " times.");
        a++;
    }

    static {
        a = 1;
    }
}

public class Main {

    public static void main(String[] args) {
        static_class sc = new static_class();
        static_class sc2 = new static_class();
    }
}