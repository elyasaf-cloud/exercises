import java.util.Arrays;
class ReverseString {

    String reverse(String inputString)
    {
        char[] source = inputString.toCharArray();
        int len = source.length;
        if (len == 0)
            return "";
        char[] reversed = new char[len];
        for (int i = len - 1; i >= 0; i--)
        {
            reversed[len - 1 - i] = source[i];
        }
        return new String(reversed);
    }
}
