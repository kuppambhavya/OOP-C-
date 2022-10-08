#include <iostream>
using namespace std;
class student{
     int ss,name;
  public student(int ss){
      name = ss;
  }
  public student()
  {
      name = "unknown";
  }
}
public class Raju{
    public static void main(int[] args) {
        student obj = new student();
        obj.ss = "Vivek";
        //Student ss1 = new Student();
        System.out.println(obj.ss);
        System.out.println(obj.name);

    }
}
