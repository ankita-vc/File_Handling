
import java.io.*;

class ReadFile
{
    public static void main(String Arg[]) throws Exception
    {
        FileInputStream fobj = new FileInputStream("Infosystems.txt");
        int i = 0;

        while((i = fobj.read()) != -1)  // we dont know about the no number of bytes in the file
        {
            System.out.print((char)i);  // Typecasting (integer is converted into string of charcters)
        }
        fobj.close();
    }
}

/*
-1 indiactes EOF (end of file) as it is an integer but we want the content in strig format so we performed typecasting
*/