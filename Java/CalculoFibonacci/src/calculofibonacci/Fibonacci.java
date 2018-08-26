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
public class Fibonacci {
    private int n;

    public int getN() {
        return n;
    }
    public void setN(int n) {
        this.n = n>=0?n:0;
    }
    private int recursivo(int n){
        if(n==0 || n==1) return n;
        if(n>1) return recursivo(n-1)+
                recursivo(n-2);
        return -1;
    }   
    public int calculo(){
        return recursivo(this.n);
    }
}
