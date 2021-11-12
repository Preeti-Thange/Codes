import java.util.Scanner;

class Demo{
    public float Division(int x, int y) throws ArithmeticException
    {
        float ans = 0.0f;
        ans = x/y;
        return ans;
    }
}

class Exception3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1=0, no2=0;
        float result =0.0f;
        Demo obj = new Demo();
        System.out.println("Enter the Fisrt number");
        no1 = sobj.nextInt();

        System.out.println("Enter the second number");
        no2 = sobj.nextInt();
        
        try
        {
        result = obj.Division(no1, no2);
        System.out.println("Dvision is: "+result);
        }
        catch(ArithmeticException obj1)
        {
            System.out.println("Exception occured");
        }
    }
}