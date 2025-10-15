Project 1
"College Routine Tracker: Surviving the Semester"

Anggota Kelompok:
1. I Made Tobby Anantha Adiwijaya (5027251064)
2. Muhammad Yusuf (5027251067)
3. Sultan Ahmad Maulana Bahyshidqi (5027251070)
4. Wildan Alfarezy (5027251088)

Inisialisasi variabel
Knowledge     : 70
Mental Health : 75
Energy        : 90

Batasan per variabel
0 ≤ x ≤ 100

Batasan waktu per hari
24 Jam

-- Aturan Perubahan Poin --
| Aktivitas | Knowledge | Mental Health | Energy |
| --------- | --------- | ------------- | ------ |
| Study     | +3        | -2            | -3     |
| Hangout   | -2        | +3            | -2     |
| Rest      | 0         | +2            | +2     |

-- Kondisi Output --
| Kasus | Kondisi Nilai                                              | Output                                                                           |
| ----- | ---------------------------------------------------------- | -------------------------------------------------------------------------------- |
| **1** | High Knowledge (≥80), High Mental (≥80), High Energy (≥80) | Balance! Kamu jadi murid terbaik, punya relasi, serta tetap sehat!               |
| **2** | High Knowledge (≥80), High Mental (≥80), Low Energy (≤60)  | Kamu pintar dan bahagia, tapi perlu istirahat yang cukup!                        |
| **3** | High Knowledge (≥80), Low Mental (≤60), High Energy (≥80)  | Kamu pintar dan sehat, tapi kesehatan mentalmu patut dipertanyakan!              |
| **4** | Low Knowledge (≤60), High Mental (≥80), High Energy (≥80)  | Nilaimu turun, tetapi kamu bahagia dan sehat!                                    |
| **5** | High Knowledge (≥80), Low Mental (≤60), Low Energy (≤60)   | Kamu jadi murid terbaik, tapi kelelahan dan stres banget!                        |
| **6** | Low Knowledge (≤60), High Mental (≥80), Low Energy (≤60)   | Nilaimu turun, energimu pun habis, tapi kamu masih bahagia!                      |
| **7** | Low Knowledge (≤60), Low Mental (≤60), High Energy (≥80)   | Energimu banyak, tapi kamu tidak produktif!                                      |
| **8** | Low Knowledge (≤60), Low Mental (≤60), Low Energy (≤60)    | Kamu kelelahan, tidak bahagia, dan tidak fokus ujian! Jangan lupa istirahat!     |