# Plaka Kodu - Şehir Eşleştirme

Bu program, kullanıcının girdiği plaka koduna göre, bir dosyadan şehir adını okuyarak, o şehrin Doğu Karadeniz Bölgesi'nde olup olmadığını kontrol eder.

## Kullanım

1.  Derleme:
    ```bash
    gcc main.c -o plaka
    ```
2.  Çalıştırma:
    ```bash
    ./plaka
    ```
3.  Program, sizden bir plaka kodu girmenizi isteyecektir.
4.  Girilen plaka koduna göre, şehir adı ve bölge bilgisi ekrana yazdırılacaktır.
5.  Eğer girilen plaka kodu dosyada bulunamazsa, "Hatali kod girdiniz." mesajı görüntülenecektir.

## Dosya Formatı

Program, "plakakodu.txt" adlı bir dosyadan veri okur. Bu dosyanın formatı şu şekildedir:
