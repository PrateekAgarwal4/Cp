import java.util.Scanner;
import java.util.ArrayList;
class Main
{
    public static int IsPrime(int n)
    {
       int temp=0;
       for(int i=2;i<n;i++)
       {
           if(n%i==0)
           {
               temp=1;
               break;
           }
       }
       if(temp==1)
         return 0;
       else 
         return 1;
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int first=sc.nextInt();
		int last=sc.nextInt();
		int count=0;
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=first;i<=last;i++)
		 if(IsPrime(i)==1)
		   al.add(i);
		for(int i=0;i<al.size();i++)
		{
		    int a=al.get(i);
		    for(int j=i+1;j<al.size();j++)
		    {
		        int b=al.get(j);
		        if((b-a) == 6)
		          count++;
		    }
		}

if(count==0)
System.out.println("No Prime Pairs");
else
System.out.println(count);
		
	}
}
