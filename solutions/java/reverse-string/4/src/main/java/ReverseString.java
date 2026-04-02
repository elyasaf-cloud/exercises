class ReverseString
{
    String reverse(String inputString)
    {       
        char[] reversed = new char[inputString.length()];
        for (int i = inputString.length() - 1; i >= 0; i--)
        {
            reversed[inputString.length() - 1 - i] = inputString.charAt(i);
        }
        return new String(reversed);
    }
}
