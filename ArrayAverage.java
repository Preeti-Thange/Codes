import java.util.*;

class Array
{
    public int arr[];

    public Array(int iSize)
    {
        arr = new int[iSize];
    }
    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Elements are: ");
        for(int i=0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }
    }

    public int Average()
    {
        int iSum=0;
        for(int i=0; i<arr.length; i++)
        {
            iSum = iSum + arr[i];
        }
        return iSum/arr.length;
    }
}

class ArrayAverage
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int size = sobj.nextInt();

        Array obj = new Array(size);
        obj.Accept();

        int iRet=obj.Average();
        System.out.println("Average of number of array is: " +iRet);
    }
}