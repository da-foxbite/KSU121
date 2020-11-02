/**
 * @date 24.10.2020
 * @author Vlad Suptelia
 * @index 2
 * @task RSA-шифрование
 * @note Реализован без библиотек security и crypto.
 * @TODO добавить "промежуточный" вывод сообщения в зашифрованном виде
 */
package noapiRSA;

import java.util.Scanner; // попробовать datainputstream
import java.util.Random;
import java.math.BigInteger;

import java.io.IOException;

import java.util.Arrays; // по хорошему нужен другой метод перевода
 

public class RSA {
    private BigInteger p;
    private BigInteger q;
    private BigInteger N;
    private BigInteger phi;
    private BigInteger e;
    private BigInteger d;
    private int bitlength = 1024;
    private Random r;

    /* 
    *  1) p и q - большие простые числа, одной длинны 
    *  2) N (модуль) = p*q 
    *  3) phi = (p-1)*(q-1)
    *  4) e (экспонента), выбирается, формула (1 < e < phi)
    *  5) d (секр. експонента) == e^-1 (mod phi)
    */
    
    public RSA()
    {
        r = new Random();
        p = BigInteger.probablePrime(bitlength, r);
        q = BigInteger.probablePrime(bitlength, r);
        N = p.multiply(q);
        phi = p.subtract(BigInteger.ONE).multiply(q.subtract(BigInteger.ONE));
        
        e = BigInteger.probablePrime(bitlength / 2, r);
        while (phi.gcd(e).compareTo(BigInteger.ONE) > 0 && e.compareTo(phi) < 0)
        {
            e.add(BigInteger.ONE);
        }
        
        d = e.modInverse(phi);
    }
    
     // 6) открытый ключ: e и N
     // 7) закрытый ключ: d и N
    public RSA(BigInteger e, BigInteger d, BigInteger N)
    {
        this.e = e;
        this.d = d;
        this.N = N;
    }
 
    public static void main(String[] args) throws IOException
    {
        RSA rsa = new RSA();
        
        String teststring;
        System.out.println("Введите данные для шифрования: ");
        Scanner scanner = new Scanner(System.in);
        teststring = scanner.nextLine();
        
        System.out.println("Текст:              " + teststring);
        
        //вывод в любой форме кроме итоговой для наглядности
        System.out.println("\nТекст, ASCII:       " + Arrays.toString(teststring.getBytes()));
        
        byte[] encrypted = rsa.encrypt(teststring.getBytes());
        byte[] decrypted = rsa.decrypt(encrypted);
        
        System.out.println("Текст расшифрован:  " + new String(decrypted));
    }

     // 8*) данные^e mod n
     // 9*) шифр^d mod n
    public byte[] encrypt(byte[] message)
    {
        return (new BigInteger(message)).modPow(e, N).toByteArray();
    }
    public byte[] decrypt(byte[] message)
    {
        return (new BigInteger(message)).modPow(d, N).toByteArray();
    }

    
}



// https://ru.wikipedia.org/wiki/RSA#Пример