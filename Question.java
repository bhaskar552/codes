class A {
    final void func() {
        System.out.println("This is a final method.");
    }
}

final class B extends A {
    void func() {
        System.out.println("Illegal!");
    }
}
class c extends B
{
    void func()
    {
        System.out.println("legal");
    }
} 

public class Question {
    public static void main(String args[]) {
        c obj = new c();
        obj.func();
    }
}