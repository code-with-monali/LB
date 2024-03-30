import java.util.*;
import java.io.*;

class program503
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create :");
        String Filename = sobj.nextLine();

        File fobj = new File(Filename);

        boolean bRet = fobj.createNewFile();

        if(bRet == true)
        {
            System.out.println("File succesfully created");
        }
        else
        {
            System.out.println("Unable to create file");
        }
    
    }
}