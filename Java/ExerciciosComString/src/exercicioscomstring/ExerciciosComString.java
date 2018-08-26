/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicioscomstring;

import algoritmos.Palindrome;

/**
 *
 * @author 04279207798
 */
public class ExerciciosComString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Palindrome palavra = new Palindrome();
        System.out.print(palavra.verifica("La tem metal")?"É ":"Não é ");
        System.out.println("Palíndrome");
        System.out.print(palavra.verifica("Apos a sopa")?"É ":"Não é ");
        System.out.println("Palíndrome");
        System.out.print(palavra.verifica("A torre da derrota")?"É ":"Não é ");
        System.out.println("Palíndrome");

    }
    
}
