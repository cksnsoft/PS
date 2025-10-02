// 2025

import java.util.Scanner;

class A1181 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String[] arr = new String[n];
        for (int i=0; i<n; i++) {
            arr[i] = scanner.nextLine();
        }

        // algorithmic thinking
        // 1. sort arr
        // 1-1. String length
        // 1-2. Alphabetical order
        // 2. Remove repeated String



        for (int i=0; i<n; i++) {
            System.out.println(arr[i]);
        }
    }
}