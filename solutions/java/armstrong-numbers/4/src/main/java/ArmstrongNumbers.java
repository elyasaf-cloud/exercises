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
        int len = String.valueOf(numToCheck).length();
        int temp = numToCheck;
        
        while (temp > 0) {
            sum += pow(temp % 10, len);
            temp /= 10;
        }

        return sum == numToCheck;
    }

}
