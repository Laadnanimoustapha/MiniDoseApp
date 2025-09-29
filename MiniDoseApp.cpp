#include <iostream>
#include <string>
using namespace std;
// in the future i will make it an app using QT 
// fonction calcule la dose 
float calculerDosage(float poids, int choix) {
    float doseParKg;

    switch (choix) {
        case 1: // Paracétamol
            doseParKg = 15;
            break;
        case 2: // Amoxicilline
            doseParKg = 20;
            break;
        case 3: // Ibuprofène
            doseParKg = 10;
            break;
        default:
            cout << "Choix invalide !" << endl;
            return -1;
    }

    //  dose = poids × dose/kg
    return poids * doseParKg;
}

int main() {
    string nomPatient;
    float poids;
    int choixMedicament;

    cout << "===== Calculateur simple de dose de médicament =====" << endl;

    cout << "Entrez le nom du patient (optionnel) : ";
    getline(cin, nomPatient);

    cout << "Entrez le poids du patient (kg) : ";
    cin >> poids;

    if (poids <= 0) {
        cout << "⚠️ Poids invalide ! Veuillez réessayer." << endl;
        return 1;
    }

    //les médicaments
    cout << "Choisissez un médicament :" << endl;
    cout << "1. Paracétamol (15 mg/kg)" << endl;
    cout << "2. Amoxicilline (20 mg/kg)" << endl;
    cout << "3. Ibuprofène (10 mg/kg)" << endl;
    cout << "Votre choix (1-3) : ";
    cin >> choixMedicament;

    float dosage = calculerDosage(poids, choixMedicament);

    if (dosage > 0) {
        string nomMedicament;
        switch (choixMedicament) {
            case 1: nomMedicament = "Paracétamol"; break;
            case 2: nomMedicament = "Amoxicilline"; break;
            case 3: nomMedicament = "Ibuprofène"; break;
        }

        // afficher le résultat
        cout << "\n==== Résultat ====" << endl;
        if (!nomPatient.empty()) {
            cout << "Nom du patient : " << nomPatient << endl;
        }
        cout << "Dosage recommandé : " << dosage << " mg de " << nomMedicament << endl;
    }

    return 0;
}
