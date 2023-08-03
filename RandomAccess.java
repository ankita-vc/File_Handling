
import java.io.*;

class RandomAccess
{
    public static void main(String Arg[]) throws Exception
    {
        RandomAccessFile fobj = new RandomAccessFile("Infosystems.txt","rw");

        fobj.writeUTF("abcdefghij");

        fobj.seek(0);              // For Original file
        System.out.println("Data from file : "+fobj.readUTF());

        fobj.seek(5);
        fobj.writeUTF("****");

        fobj.seek(0);    // For updated file
        System.out.println("Data from file : "+fobj.readUTF());

    }
}