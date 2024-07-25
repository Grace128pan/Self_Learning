/*
1. XOR operator(exclusive or) has an interesting property that it can be used to encode a message
R1 = X ^ Y; R2 = R1 ^ y; //in this case R2 = X
 */


public class Encode {
    public static void main(String[] args) {
        String msg = "This is a test";
        String encmsg = "";
        String decmsg = "";
        int key = 88;  //the key can be any number, but it must be the same for encoding and decoding
        int i;

        System.out.print("original message: ");
        System.out.println(msg);

        //encode the message
        for(i=0; i<msg.length(); i++) 
            encmsg = encmsg + (char)(msg.charAt(i) ^key);
        
        System.out.print("Encoded message: ");
        System.out.println(encmsg);

        //decode the message
        for(i=0; i<msg.length();i++) 
            decmsg = decmsg + (char)(encmsg.charAt(i)^key);

        System.out.print("Decoded message: ");
        System.out.println(decmsg);
        
    }
    }

