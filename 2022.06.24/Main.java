import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

class person {
	String name;
	int ko;
	int en;
	int ma;

	person(String name, int k, int e, int m) {
		this.name = name;
		ko = k;
		en = e;
		ma = m;
	}

	public String toString() {
		return name + '\n';
	}
}

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(br.readLine());
		person[] p = new person[N];
		StringTokenizer st;
		for (int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			p[i] = new person(st.nextToken(), Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()),
					Integer.parseInt(st.nextToken()));
		}
		Arrays.sort(p, new Comparator<person>() {

			@Override
			public int compare(person o1, person o2) {
				// TODO Auto-generated method stub
				if (o1.ko == o2.ko) {
					if (o1.en == o2.en) {
						if (o1.ma == o2.ma) {
							return o1.name.compareTo(o2.name);
						}
						return o2.ma - o1.ma;
					}
					return o1.en - o2.en;
				}
				return o2.ko - o1.ko;
			}

		});
		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < N; i++) {
			sb.append(p[i]);
		}
		System.out.println(sb);
	}
}