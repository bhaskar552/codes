class student_marks {
    int avg_marks1 = 85;

    class student_2 {
        int avg_marks2 = 80;
    }

    void marks() {
        student_2 s2 = new student_2();
        if (avg_marks1 > s2.avg_marks2)
            System.out.println("Student 1 has higher marks.");
        else
            System.out.println("Student 2 has higher marks.");
    }

}

public class Main2{

    public static void main(String[] args) {
        student_marks sm = new student_marks();
        sm.marks();
    }
}