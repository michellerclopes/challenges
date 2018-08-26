/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculofibonacci;

/**
 *
 * @author 04279207798
 */
public class CalculoFibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        f.setN(10);
        System.out.println(f.calculo());
    }
    
}
