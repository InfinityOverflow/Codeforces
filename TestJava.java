import java.util.*;
public class TestJava
{
    
    public static void main()
    {
        String a,b;
        Scanner sc =new Scanner(System.in);
        a=sc.nextLine();
        b=sc.nextLine();
        String c="";
        for(int i=a.length()-1;i>=0;i--)
        {
           c=c+a.charAt(i);
        }
        if(c==b)
        System.out.println("YES");
        else
        System.out.println("NO");
        sc.close();
    }
}