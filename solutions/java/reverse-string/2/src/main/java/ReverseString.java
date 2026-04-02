import java.util.Arrays;
class ReverseString {

    String reverse(String inputString)
    {
        if (inputString == null)
            return null;
        char[] str = inputString.toCharArray();
        int len = str.length;
        int left = 0;
        int right = len - 1;
        while (left < right)
        {
            char swap = str[right];
            str[right] = str[left];
            str[left] = swap;
            left++;
            right--;
        }
        return new String(str);
    }
}
