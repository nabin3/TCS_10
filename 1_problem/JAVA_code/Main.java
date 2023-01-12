import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		int[] arr1 = {2, 5, 1, 3, 0};
		int[] arr2 = {8, 10, 5, 7, 9};

		System.out.println("Smallest number is: " + sortArr(arr1));
		System.out.println("Smallest number is: " + sortArr(arr2));
	}

	static int sortArr(int[] arr) {
		Arrays.sort(arr);
		return arr[0];
	}
}
