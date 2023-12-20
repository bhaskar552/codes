abstract class Organisation {
    String Org_name;
    int Estb_year;

    Organisation(String a, int b) {
        Org_name = a;
        Estb_year = b;
    }

    abstract void show();
}

class Employee extends Organisation {
    String name;
    int age;
    String designation;
    int msalary;

Employee(String p,int g,String r,int s,String x,int y){
super(x,y);
name=p;
age=g;
designation=r;
msalary=s;
}

void show() {
    System.out.println("Name:" + name);
    System.out.println("Age:" + age);
    System.out.println("Designation:" + designation);
    System.out.println("Monthly Salary:" + msalary);
}
}

class Department extends Organisation {
String D_name;
int D_id;

Department(String m, int n, String x, int y) {
    super(x, y);
    D_name = m;
    D_id = n;
}

void show() {
    System.out.println("Department Name:" + D_name);
    System.out.println("Department ID:" + D_id);
}
}

public class new {
public static void main(String[] args) {
Organisation b1;
Employee d1=new Employee("Rahul",21,"CEO",500000,"TCS",1934);
Department d2=new Department("Marketting",1234,"TCS",1934);
Organisation b2;
Employee d3=new Employee("Annaya",22,"SEO",900000,"Google",1980);
Department d4=new Department("Marketting",1235,"Google",1980);
b1=d1;
b1.show();
b1=d2; 
b1.show();
b2 = d3;
b2.show();
b2 = d4;
b2.show();
}
}