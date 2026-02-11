#include<iostream>
#include<fstream>
#include<vector>
#include<iomanip>
using namespace std;

void linearCongruentialGenerator(vector<long long>& sequence, long long a, long long seed, long long n, long long m) {
    for (long long i = 0; i < n; ++i) {
        seed = (a * seed) % m; 
        sequence.push_back(seed);
    }
}

void toStandardSequence(vector<long long>& sequence, vector<double>& standardSequence, long long m) {
    for(long long it : sequence) {
        standardSequence.push_back(static_cast<double>(it)/static_cast<double>(m));
    }
}

void writeSequenceToFile(const vector<double>& sequence, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (double num : sequence) {
            outFile << fixed << setprecision(10) << num << endl;
        }
        outFile.close();
        cout << "Sequence written to " << filename << endl;
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }
}

int main() {
    vector<long long> sequence;
    vector<double> standardSequence;
    
    // la implementación del método lineal congruente
    // está basada en la fórmula -> (69069*xi) mod 2^32
    long long a = 69069; // Multiplicador 
    long long seed = 7; // Semilla inicial
    long long n = 10000; // Cantidad de números aleatorios a generar
    long long m = 1LL << 32; // modulo 2^32 
    
    sequence.reserve(n);
    standardSequence.reserve(n);

    linearCongruentialGenerator(sequence, a, seed, n, m);
    toStandardSequence(sequence, standardSequence, m);
    writeSequenceToFile(standardSequence, "sequenceStandard.txt");
    return 0;
}