# GenerowanieLabiryntu
Projekt ZAP2

/*===========================INSTRUKCJA DO WERSJI ALPHA=============================

1) Należy wpisać rozmiar tablicy jako liczby całkowite (wysokość, szerokość),
a następnie numer wiersza, który ma być początkiem ścieżki.

Przykładowo dla 40 90 14 wygeneruje się labirynt o wymiarach 40x90 i początku
w punkcie (14,0).
NIE należy podować rozmiaru tablicy większego niż 40x90, ze względu na ograniczony
sposób wyświetlania i czas generowania tablicy.

2) Po pewnym czasie (dla tablicy 40x90 ok. 10s - bedzie poprawione w nastepnych
wersjach) wyświetli się wygenerowana tablica. Możemy się poruszać za pomocą klawiszy
WASD po cienkim obszarze między białymi liniami,
tzn. ║ umożliwia chodzeni do góry i w dół, a ╚ do góry i w prawo, itd.

Nasz "pionek" to pole czerwone. Celem jest dojście do otwartej czesci labiryntu po
jego prawej stronie (znaku ╠ ).

Po dojściu do końca wyświetlony zostanie czas przechodzenia.

Aby przerwać przechodzenie wcześniej należy nacisnąć P.

3) Zostaniemy zapytani o to, czy gramy dalej. Należy wcisnąć 0. 1 powoduje wyciek
pamięci!


*/==================================================================================