
import java.io.*;

class CreateFile
{
    public static void main(String Arg[]) throws Exception
    { 
        File fobj= new File("Infosystems.txt");  // Object of File is Created

        if(fobj.createNewFile())
        {
            System.out.println("File succesfully created");
        }
        else
        {
            System.out.println("Unable to create the file");
        }
    }
}