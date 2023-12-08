# Proiect Sincretic - Turnurile Hanoi

**În anul 1883, matematicianul francez Edouard Lucas a propus problema turnurilor din Hanoi, o problemă-joc inspirată din legenda unui templu hindus.**

![turnurilehanoi](https://12belize.com/wp-content/uploads/2020/09/Wooden-Tower-of-Hanoi-Lucas-Tower.jpg)
### Leganda:

Atunci când lumea a fost creată, preoţilor dintr-un templu din Benares (India) le-au fost dăruite 3 ace de diamant şi 64 discuri de aur.
 Preoţilor li s-a poruncit să depună pe acul din stânga toate discurile, în ordine descrescătoare a diametrelor, apoi să mute întregul turn astfel format pe acul din dreapta, folosind acul din mijloc ca intermediar,mutând câte un disc odată şi fără a pune un disc mai mare peste un disc mai mic.
În conformitate cu legenda, Dumnezeu le-a zis oamenilor: ***Cand veti termina de mutat turnul, atunci lumea se va sfarsi.***

![turnurilehanoi](https://vietnamdiscovery.com/wp-content/uploads/2019/10/Tran-quoc-pagoda-from-outside-@lozjeffries.jpg)

####Stiai ca...?

Dacă preoţii ar lucra zi şi noapte, făcând o mutare în fiecare secundă, le-ar lua mai mult de 580 miliarde de ani pentru a termina mutarea turnului format din cele 64 discuri.
              Interesant este că unii oameni de știință au estimat că aproximativ peste atâția ani, Sistemul Solar ar dispărea...

**Formula cu ajutorul careia gasim numarul minim de mutari pentru realizarea problemei este: 2^n - 1** (n reprezinta numarul de turnuri).

###Formularea problemei:
 Se dau trei tije A, B, C și N discuri de diametre diferite, stivuite inițial pe tija A în ordinea descrescătoare a diametrelor, formând un con. Să se determine secvența de mutări ale discurilor de pe tija inițială A către tija finală C, folosind B ca tijă intermediară, având în vedere următoarele restricții:
1. La fiecare mișcare se va muta un singur disc.
2. Un disc se poate plasa doar asupra unui disc mai mare ca diametru.

Problema se rezolva recursiv, folosind metoda ***Divide et Impera***, iar algoritmul de rezolvare este urmatorul:

Pasul 1: - mutarea a n-1 discuri de pe tija a pe tija b , utilizând ca tijă intermediară tija c ;
Pasul 2: - mutarea discului rămas pe tija c ;
Pasul 3: - mutarea a n-1 discuri de pe tija b pe tija c , utilizând ca tijă intermediară tija a .
