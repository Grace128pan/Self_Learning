
/*
 The program will demonstrate how to use text block in a simple way
 */
public class TextBlock {
    public static void main(String[] args) {
        String str = """
        Text blocks make multiple lines easy because they eliminate
            the need to use \\n escape sequences to indicate a newline.
        As a result, text blocks make the programmer's life better!
                """;
        
        System.out.println(str);

    }  
}
