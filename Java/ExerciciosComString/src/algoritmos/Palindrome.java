/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package algoritmos;

/**
 *
 * @author 04279207798
 */
public class Palindrome {
    public boolean verifica(String palavra){
        int i=0, j=0;
        //Tratamento
        String palavraMinuscula = palavra.toLowerCase(), palavraTratada="";
        for(i=0; i<palavra.length(); i++){
            if(palavraMinuscula.charAt(i)>=(int)'a' && palavraMinuscula.charAt(i)<=(int)'z')
                palavraTratada += palavraMinuscula.charAt(i);
        }
        //Vericacao
        for(i=0, j=palavraTratada.length()-1; i<j; i++, j--){
            if(palavraTratada.charAt(i)!=palavraTratada.charAt(j))
                break;
        }
        if(i<j) return false;
        return true;
    }
}
