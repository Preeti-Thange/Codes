import java.lang.*;

class Demo
{
    //overloading by changing the data type
    public int add(int no1, int no2)
    {
        System.out.println("Inside first add");
        return no1+no2;
    }
    public float add(float no1, float no2)
    {
        System.out.println("Inside second add");
        return no1+no2;
    }
}

class overloading
{
    public static void main(String arg[])
    {
        System.out.println("Inside main...");
        Demo obj;  //reference
        obj = new Demo();
        System.out.println("Addition of 2 integers: "+obj.add(10,11));
        System.out.println("Addition of 2 integers: "+obj.add(10.5f,11.3f));

        //using iret fret in application
 }
}