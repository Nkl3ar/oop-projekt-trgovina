U mainu su primjeri korištenja funkcija        

Cijena
        -struktura podataka, sprema vrijednost i valuta (npr. 20 HRK, 39.23 EUR)

Veci, MixedInfo
        -template funkcije
misao
        -template klasa

Osoba
        -primjer abstraktne bazne klase
Kupac
        -nasljeđuje Osobu
        -primjer polimorfizma, košarica (vector koji sprema pointere na proizvode)

Proizvod
        -primjer bazne klase
        -također imaju static metodu i varijablu (counter postojećih proizvoda)
        -override operatora ==
        -copy constructor preko pointer i reference

Kamen, Odjeca
        -Nasljeduju Proizvod
        -također imaju static metodu i varijablu (counter)
        -override operatora ==
        -copy constructor preko reference

Iznimka, IznimkaMoraPostojati
         -ručno napisane iznimke

Kamen,Proizvod,Kupac
        -baca iznimku
        -Kupac i Proizvod bacaju ručno napisane iznimke
        -Kamen i Proizvod bacaju built in iznimke

sve klase imaju osnovne gettere, settere i neke metode relevantne njima (info, validacija podataka)

vjerojatno ima još tog ali sam zaboravio