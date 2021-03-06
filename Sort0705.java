package sort;

import java.util.Arrays;
import java.util.Random;

public class Sort {
    public static void main(String[] args) {
        int size = 10;
        int[] orderArray = buildOrderArray(size);
        int[] disorderArray = buildDisorderArray(size);
        int[] randomArray = buildRandomArray(size);
        int[] sameArray = buildSameArray(size);
        System.out.println("排序前");
        System.out.println(Arrays.toString(orderArray));
        System.out.println(Arrays.toString(disorderArray));
        System.out.println(Arrays.toString(sameArray));
        System.out.println(Arrays.toString(randomArray));

        heap(orderArray);
        heap(disorderArray);
        heap(sameArray);
        heap(randomArray);

        System.out.println("======================");
        System.out.println("排序后");
        System.out.println(Arrays.toString(orderArray));
        System.out.println(Arrays.toString(disorderArray));
        System.out.println(Arrays.toString(sameArray));
        System.out.println(Arrays.toString(randomArray));
    }



    private static int[] buildRandomArray(int size) {
        Random random = new Random();
        int[] nums = new int[10];
        for (int i = 9; i >= 0; i--) {
            nums[i] = random.nextInt(100);
        }
        return nums;
    }

    private static int[] buildSameArray(int size) {
        int[] nums = new int[10];
        for (int i = 9; i >= 0; i--) {
            nums[i] = 5;
        }
        return nums;
    }

    private static int[] buildDisorderArray(int size) {
        int[] nums = new int[10];
        for (int i = 9; i >= 0; i--) {
            nums[i] = i;
        }
        return nums;
    }

    private static int[] buildOrderArray(int size) {
        int[] nums = new int[10];
        for (int i = 0; i < size; i++) {
            nums[i] = i;
        }
        return nums;
    }

    private static void insert(int[] array) {
        //插扑克牌
        for(int i = 1; i < array.length; i++){ //无序数组
            int val = array[i];
            int j = i-1;
            for(; j >= 0; j--){ // 有序数组
                if(val < array[j]) {
                    array[j+1] = array[j];
                }else{
                    break;
                }
            }
            array[j+1] = val;
        }
    }


    private static void shell(int[] disorderArray) {
        int len = disorderArray.length;
        while(len > 1){
            shellFunction(disorderArray,len);
            len = (len/3)+1;
        }
        shellFunction(disorderArray,1);
    }

    private static void shellFunction(int[] disorderArray, int len) {
        for(int i = 1; i < disorderArray.length; i++){
            int val = disorderArray[i];
            int j = i - len;
            for(; j >= 0 ;j-= len){
                if(disorderArray[j] > val){
                    disorderArray[j+len] = disorderArray[j];
                }else{
                    break;
                }
            }
            disorderArray[j+len] = val;
        }
    }

    private static void select(int[] orderArray) {
        for(int i = orderArray.length; i > 0; i--){
            int j = 0;
            int index = 0;
            for(; j < i ; j++){
                if(orderArray[j] > orderArray[index]){
                    index = j;
                }
            }
            swap(orderArray,i-1,index);
        }
    }

    private static void swap(int[] orderArray, int i, int index) {
        int t = orderArray[i];
        orderArray[i] = orderArray[index];
        orderArray[index] = t;
    }

    private static void heap(int[] disorderArray) {
        buildTree(disorderArray,disorderArray.length);
        for(int i = disorderArray.length-1; i >= 0; i--){
            swap(disorderArray,i,0);
            shiftDown(disorderArray,i,0);
        }
    }

    private static void shiftDown(int[] array, int size, int index) {
        int left = index * 2 + 1;
        while(left < size){
            int min = left;
            int right = left+1;
            if(right < size){
                min = array[left] > array[right] ? left : right;
            }
            if(array[min] < array[index]){
                break;
            }
            swap(array,min,index);
            index = min;
            left = index * 2 + 1;
        }
    }

    private static void buildTree(int[] array,int size) {
        for(int i = (array.length-1-1)/2 ; i >= 0; i--){
            shiftDown(array,size,i);
        }
    }
}
