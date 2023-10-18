package com;
import java.util.Scanner;
public class NinthExperiment1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("请输入一个数字：");
        try {
            int num = scanner.nextInt();
            boolean result = PrimeNumberUtil.isPrimeNumber(num);
            //这行代码的作用是调用PrimeNumberUtil类中的isPrimeNumber方法，用于判断输入的num是否是素数。 这个方法会返回一个boolean类型的值，代表了num是不是素数。 
            //利用赋值操作符将这个返回值赋值给变量result，以便进行后续处理，例如输出判断结果。
            if (result) { //素数是true
                System.out.println(num + "是素数");
            } else { //不是素数是false
                System.out.println(num + "不是素数");
            }
        } catch (Exception e) {
            System.out.println("输入的不是整数，请重新输入！");
        }
    }
}

