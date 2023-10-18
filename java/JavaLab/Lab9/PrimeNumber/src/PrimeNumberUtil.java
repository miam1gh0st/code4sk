package com;
class PrimeNumberUtil {
    public static boolean isPrimeNumber(int num) { //判断是否是素数，若是素数返回true,不是素数返回false
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

