class Demo
{
    public int i;
    public final int j;

    public Demo()
    {
        i=20;
        j=11;
    }
}

class FinalCharacteristics
{
    public static void main(String args[])
    {
        Demo obj = new Demo();
        System.out.println("value of j: "+obj.j);
        //obj.j++;           Not allowed
    }
}