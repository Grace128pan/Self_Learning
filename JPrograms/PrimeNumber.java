/*
1.
    //write a program that finds all the prime numbers between 2 and 100
    //2 3 5 7 11 13 17 19 23 `29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
 */

 package JPrograms;

 public class PrimeNumber {
    public static void mian(String[] args) {
        int start = 2;
        int end = 100;

        System.out.println("prime numbers between 2 and 100 are: ");

        for(int number = start; number<= end; number++) {
            if(isPrime(number)) {
                System.out.println(number);
            }
        }
    }

    public static boolean isPrime(int number) {
        if(number <=1) {
            return false;
        }
        
        for(int i=2; i<=Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
 }