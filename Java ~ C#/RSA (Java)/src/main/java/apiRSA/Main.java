/**
 * @date 24.10.2020
 * @author Vlad Suptelia
 * @index 1
 * @task RSA-шифрование
 * @note 'Готовое' решение через библиотеки.
 */
package apiRSA;

import java.util.Scanner;
import java.util.Arrays;

import java.security.Key;
import java.security.KeyPair;
import java.security.KeyPairGenerator;

import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;

import javax.crypto.Cipher;

import javax.crypto.BadPaddingException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.IllegalBlockSizeException;

public class Main {
    public static void main(String[] args) throws InvalidKeyException, NoSuchAlgorithmException, BadPaddingException, NoSuchPaddingException, IllegalBlockSizeException {
        String message;
        System.out.println("Введите данные для шифрования: ");
        Scanner scanner = new Scanner(System.in);
        message = scanner.nextLine();
    
    KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("RSA");
    keyPairGenerator.initialize(2048); // стандарт, 1024*2
    KeyPair keyPair = keyPairGenerator.generateKeyPair();
    
    Key privateKey = keyPair.getPrivate();
    Key publicKey = keyPair.getPublic();

    Cipher cipher = Cipher.getInstance(publicKey.getAlgorithm());
    
    cipher.init(Cipher.ENCRYPT_MODE, publicKey);
    byte[] encryptData = cipher.doFinal(message.getBytes());

    cipher.init(Cipher.DECRYPT_MODE, privateKey);
    byte[] decryptData = cipher.doFinal(encryptData);
    
    System.out.println("Текст зашифрован:  " + Arrays.toString(encryptData));
    System.out.println("Текст расшифрован: " + new String(decryptData));
    } 
}



// https://habr.com/ru/post/444814/