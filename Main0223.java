import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] arr1 = BuildArray.建立随机数组();
        int[] arr2 = BuildArray.建立顺序数组();
        int[] arr3 = BuildArray.建立逆序数组();
        int[] arr4 = BuildArray.建立相等数组();
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        System.out.println(Arrays.toString(arr3));
        System.out.println(Arrays.toString(arr4));
        System.out.println("============================");
        Sort.shellSort(arr1);
        Sort.shellSort(arr2);
        Sort.shellSort(arr3);
        Sort.shellSort(arr4);
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
        System.out.println(Arrays.toString(arr3));
        System.out.println(Arrays.toString(arr4));
    }
}
