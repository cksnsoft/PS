// 2025

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        float hour_angle;
        float min_angle;
        Scanner scanner = new Scanner(System.in);
        hour_angle = scanner.nextInt();
        min_angle = scanner.nextInt();
        if (hour_angle % 30 == min_angle / 12) System.out.println("O");
        else System.out.println("X");
    }
}