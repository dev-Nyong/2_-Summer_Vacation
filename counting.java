//수의 범위를 알고 입출력만 하는 거라면 이렇게 정렬하는 것이 가장 빠름
public class counting {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int[10];
		for(int i = 0 ; i<10; i++) {
			array[(int)(Math.random()*10)]++;
		}
		for(int i =0; i<array.length; i++) {
			while(array[i]-->0) {
				System.out.print(i+" ");
			}
		}
	}

}
