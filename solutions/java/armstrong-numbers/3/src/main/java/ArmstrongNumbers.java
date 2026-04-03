class ArmstrongNumbers {

    static int pow(int base, int exponent) {
        int result = 1;
        for (int count = 0; count < exponent; count++) {
            result *= base;
        }
        return result;
    }
    boolean isArmstrongNumber(int numToCheck) {
        int sum = 0;
        String copy = String.valueOf(numToCheck);

        for (int i = 0; i < copy.length(); i++) {
            sum += pow(copy.charAt(i) - '0', copy.length());
        }

        return sum == numToCheck;
    }

}
