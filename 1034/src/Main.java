/*
  URI 1034: Festival de Estátuas de Gelo

  @author Bruno Santos
 */


import java.io.IOException;
import java.util.Scanner;
import java.util.TreeSet;


public class Main {

    public static void main(String[] args) throws IOException {

        Scanner in = new Scanner(System.in);
        int t, n, m, counter;

        t = in.nextInt();

        while (t > 0) {
            n = in.nextInt();
            m = in.nextInt();
            counter = 0;
            TreeSet<Integer> v = new TreeSet<>();
            for (int i = 0; i < n; i++)
                v.add(in.nextInt());
            while (m > 0) {
                int e = v.floor(m);
                m -= e;
                counter++;
            }
            System.out.println(counter);
            t--;
        }
    }
}

