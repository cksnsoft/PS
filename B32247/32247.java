// 2025

import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        /**
         *
         */
        int[][] arr = new int[M][3];
        for (int i=0; i<M; i++) {
            for (int j=0; j<3; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }
    }
}

/*
First we need the input in an array
Next we need to use a greedy alg, and a sorting alg
The 0/1 Knapsack Problem
A backpack with a weight limit.
Figure out which treasures to pack to maximize the total value


Rules
- Every item has a weight and value.
- Your knapsack has a weight limit.
- 
*/