import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
//long 타입
public class boj11652 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		long arr[] = new long[N];
		int count = 1;
		int max = 1;
		int maxIdx = 0;

		for (int i = 0; i < N; i++) {
			arr[i] = Long.parseLong(br.readLine());
		}
		Arrays.sort(arr);

		for (int i = 1; i < N; i++) {
			if (arr[i] == arr[i - 1]) {
				count++;
			} else {
				count = 1;
			}
			if (count > max) {
				max = count;
				maxIdx = i;
			}
		}
		System.out.println(arr[maxIdx]);

	}
}
