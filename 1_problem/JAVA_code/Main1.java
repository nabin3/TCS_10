public class Main1 {

	public static void main(String[] args) {
		int[] arr = {23, 6, 34, 2, 4, 89, 5};
		System.out.println("Smallest element is: " + small_in(arr));
	}

	static int small_in(int[] arr) {
		int min = arr[0];
		for (int i = 0; i < arr.length; i++) {
			if (min > arr[i])
				min = arr[i];
		}
		return min;
	}
}


