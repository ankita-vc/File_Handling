
import java.io.*;

class WriteFile
{
    public static void main(String Arg[]) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("Infosystems.txt");
        String str = "India is my country";

        byte Arr[] = str.getBytes();  // conversion of string i.e characters(1 byte) into bytes(2 bytes)  UNICODE (UTF= unicode transformation format)
        fobj.write(Arr);
        fobj.close();
    }
}