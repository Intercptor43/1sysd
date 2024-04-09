Début
Pour i allant de 0 à longueur(tableau) - 1
    min_index = i
    Pour j allant de i + 1 à longueur(tableau) - 1
        Si tableau[j] < tableau[min_index] Alors
            min_index = j
        Fin Si
    Fin Pour
    Échanger tableau[i] avec tableau[min_index]
Fin Pour
Fin
