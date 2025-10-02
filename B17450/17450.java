// 2025

import java.util.Scanner;

class Main {
    static float[] effectivity = new float[3];
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] arr = new int[3][2];
        for (int i=0; i<3; i++) {
            for (int j=0; j<2; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }
        
        for (int i=0; i<3; i++) {
            int cost = arr[i][0] * 10;
            if (cost >= 5000) cost = cost - 500;
            
            effectivity[i] = (float)(arr[i][1] * 10) / cost;
            // System.out.println(effectivity[i]);
        }

        float max = -1;
        int max_index = 0;

        for (int i=0; i<3; i++) {
            if (effectivity[i] > max) {
                max_index = i;
                max = effectivity[i];
            }
        }

        // System.out.println(max_index);

        switch(max_index) {
            case 0:
                System.out.println("S");
                break;
            case 1:
                System.out.println("N");
                break;
            case 2:
                System.out.println("U");
                break;
        }
    }
}
