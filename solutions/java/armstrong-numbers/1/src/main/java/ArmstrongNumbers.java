class ArmstrongNumbers {

    static int pow(int base, int exponent) {
        int result = 1;
        for (int count = 0; count < exponent; count++) {
            result *= base;
        }
        return result;
    }
    boolean isArmstrongNumber(int numToCheck) {
        int numDigits = 0;
        int copy = numToCheck;
        
        while (copy > 0) {
            numDigits++;
            copy /= 10;
        }

        copy = numToCheck;
        int sum = 0;
        while (copy > 0) {
            sum += (pow(copy % 10, numDigits));
            copy /= 10;
        }

        return sum == numToCheck;
    }

}
