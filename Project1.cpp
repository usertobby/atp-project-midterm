#include <iostream>
using namespace std;

int main() {
    int days;
    int knowledge = 70;
    int mentalHealth = 75;
    int energy = 90;
    int choice;

    // Banner
    cout << "|---------------------------------------------|" << endl;
    cout << "|========== College Routine Tracker ==========|" << endl;
    cout << "|---------------------------------------------|" << endl << endl;
    
    // Days loop
    for (days = 0; days < 7; days++) {
        cout << "===============================================" << endl;
        cout << "                   Day: " << days + 1 << "              " << endl;
        cout << "===============================================" << endl << endl;
        cout << "-- Status saat ini --  " << endl;
        cout << "Knowledge      : " << knowledge << endl;
        cout << "Mental Health  : " << mentalHealth << endl;
        cout << "Energy         : " << energy << endl;

        // Deklarasi variabel untuk lama waktu belajar, hangout, dan istirahat
        int jamStudy = 0, jamHangout = 0, jamRest = 0;
        int totalJamAktivitas = 0;
        int jamInput;

        // While buat total dan sisa waktu per hari
        while (totalJamAktivitas < 24) {
            cout << "\nSisa waktu: " << (24 - totalJamAktivitas) << " jam\n";
            cout << "\nApa yang kamu ingin lakukan?" << "\n";
            cout << "[1] Study" << "\n";
            cout << "[2] Hangout " << "\n";
            cout << "[3] Rest " << "\n\n";
            cout << "Pilihanmu: ";
            cin >> choice;

            cout << "Selama berapa jam? ";
            cin >> jamInput;

            // Validasi input jam
            if (jamInput < 1) {
                jamInput = 1;
            }
            if (jamInput > 24) {
                jamInput = 24;
            }
            if (totalJamAktivitas + jamInput > 24) {
                jamInput = 24 - totalJamAktivitas;
            }

            // Pilihan aktivitas
            switch (choice) {
                case 1:
                    jamStudy += jamInput;
                    knowledge += jamInput * 2;
                    mentalHealth -= jamInput * 2;
                    energy -= jamInput * 3;
                    cout << "\nKamu belajar selama " << jamInput << " jam.\n";
                break;

                case 2:
                    jamHangout += jamInput;
                    knowledge -= jamInput * 2;
                    mentalHealth += jamInput * 3;
                    energy -= jamInput * 2;
                    cout << "\nKamu main dengan teman selama " << jamInput << " jam.\n";
                break;

                case 3:
                    jamRest += jamInput;
                    mentalHealth += jamInput * 2;
                    energy += jamInput * 2;
                    cout << "\nKamu istirahat selama " << jamInput << " jam.\n";
                break;

                default:
                    cout << "\nPilihan tidak valid!\n";
                continue;
            }
            totalJamAktivitas = totalJamAktivitas + jamInput;       // Menambahkan jam yang kita input ke total jam aktivitas

            // Biar nilai nggak lebih dari 100 setiap variabel
            if (knowledge > 100) {
                knowledge = 100;
            }
            if (mentalHealth > 100) {
                mentalHealth = 100;
            }
            if (energy > 100) {
                energy = 100;
            }

            // Biar nilai nggak negatif pada setiap variabel
            if (knowledge < 0) {
                knowledge = 0;
            }
            if (mentalHealth < 0) {
                mentalHealth = 0;
            }
            if (energy < 0) {
                energy = 0;
            }
        }
    }

    // Kondisi ketiga variable akhir
    cout << "\n-- Status akhir --\n";
    cout << "Knowledge      : " << knowledge << endl;
    cout << "Mental Health  : " << mentalHealth << endl;
    cout << "Energy         : " << energy << endl;

    // Title akhir yang diperoleh
    if (knowledge >= 80 && mentalHealth >= 80 && energy >= 80) {                            // 1
        cout << "\nBalance! Kamu jadi murid terbaik, punya relasi, serta tetap sehat!\n";
    } else if (knowledge >= 80 && mentalHealth >= 80 && energy < 60) {                      // 2
        cout << "\nKamu pintar dan bahagia, tapi perlu istirahat yang cukup!\n";
    } else if (knowledge >= 80 && mentalHealth < 60 && energy >= 80) {                      // 3
        cout << "\nKamu pintar dan sehat, tapi kesehatan mentalmu patut dipertanyakan!\n";
    } else if (knowledge < 60 && mentalHealth >= 80 && energy >= 80) {                      // 4
        cout << "\nNilaimu turun, tetapi kamu bahagia dan sehat!\n";
    } else if (knowledge >= 80 && mentalHealth < 60 && energy < 60) {                       // 5
        cout << "\nKamu jadi murid terbaik, tapi kelelahan dan stres banget!\n";
    } else if (knowledge < 60 && mentalHealth >= 80 && energy < 60) {                       // 6
        cout << "\nNilaimu turun, energimu pun habis, tapi kamu masih bahagia!\n";
    } else if (knowledge < 60 && mentalHealth < 60 && energy >= 80) {                       // 7
        cout << "\nEnergimu banyak, tapi kamu tidak produktif!\n";
    } else if (knowledge < 60 && mentalHealth < 60 && energy < 60) {                        // 8
        cout << "\nKamu kelelahan, tidak bahagia, dan tidak fokus ujian! Jangan lupa istirahat!\n";
    }

    return 0;
}