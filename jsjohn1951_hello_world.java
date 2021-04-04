package TheMostUselessWayToWriteHelloWorld;


public class TheMostUselessWayToWriteHelloWorld {

	public static void main(String[] args) {

		String[] arr1 = new String[6];
		String[] arr2 = new String[6];
		int x = 10;
		int y = 2;
		int z = 0;
		int A = 0;

		while(y != 0) {

			if(y == 2) {
			while(x > 5) {
				switch (z) {
				case 0:
					arr1[0] = "H";
				break;
				case 1:
					arr1[1] = "e";
					break;
				case 2:
					arr1[2] = "l";
					arr1[3] = arr1[2];
					break;
				case 3:
					arr1[4] = "o";
					break;
				}

				z++;
				x--;
			}

			} else {
				while(x >= 0) {
					switch (A) {
					case 0:
						arr2[0] = "w";
					break;
					case 1:
						arr2[1] = "o";
						break;
					case 2:
						arr2[2] = "r";
						break;
					case 3:
						arr2[3] = "l";
						break;

					case 4:
						arr2[4] = "d!";
						break;
					}

					A++;
					x--;

			}

		}


		y--;
	}

		x = 10;
		y = 2;
		z = 0;
		A = 0;


		while(x > 5) {

			System.out.print(arr1[z]);
			z++;
			x--;

		}
		System.out.print(" ");
		while(x >= 1) {
			System.out.print(arr2[A]);
			A++;
			x--;
		}

}
}