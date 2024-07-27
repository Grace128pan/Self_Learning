class Cipher1 {
    private String key;

    public Cipher1(String key) {
        if(key.length()!=8) {
            throw new IllegalArgumentException("Key must be 8 characters long.");
        }
        this.key = key;

    }

    public String encode(String message) {
        char[] msgArray = message.toCharArray();
        char[] keyArray = key.toCharArray();
        char[] encodedArray = new char[msgArray.length];

        for(int i=0; i<msgArray.length; i++) {
            encodedArray[i] = (char)(msgArray[i] ^keyArray[i%keyArray.length]);
        }
        return new String(encodedArray);
    }
    public String decode(String encodedMessage) {
        return encode(encodedMessage);
    }
}

public class CipherTest {
    public static void main(String[] args) {
        String key = "12345678";
        Cipher1 encoder = new Cipher1(key);

        String message = "I really love you!";
        System.out.println("original message: " + message);

        String encodedMessage = encoder.encode(message);
        System.out.println("encoded message: " + encodedMessage);

        String decodedMessage = encoder.decode(encodedMessage);
        System.out.println("Decoded message: " + decodedMessage);
    }
}
