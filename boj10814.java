import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Person {
	int age;
	String name;

	Person(int age, String name) {
		this.age = age;
		this.name = name;
	}

	public String toString() {
		return age + " " + name + "\n";
	}
}

public class boj10814 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		Person arr[] = new Person[N];
		for (int i = 0; i < N; i++) {
			arr[i] = new Person(sc.nextInt(), sc.next());
		}
		Arrays.sort(arr, new Comparator<Person>() {
			
			public int compare(Person s1, Person s2) {
				return s1.age - s2.age;
			}
		});

		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < N; i++) {
			sb.append(arr[i]);
		}
		System.out.println(sb);
	}
}
