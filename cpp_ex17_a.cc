#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

#define RNA_SIZE 8

struct codon_prot {
  string codon;
  string protein;
};

void define_codons(codon_prot (&codon_protein)[]) {
  codon_protein[0].codon = "AUG";
  codon_protein[0].protein = "Methionine";
  codon_protein[1].codon = "UUU";
  codon_protein[1].protein = "Phenylalanine";
  codon_protein[2].codon = "UUC";
  codon_protein[2].protein = "Phenylalanine";
  codon_protein[3].codon = "UUA";
  codon_protein[3].protein = "Leucine";
  codon_protein[4].codon = "UUG";
  codon_protein[4].protein = "Leucine";
  codon_protein[5].codon = "UCU";
  codon_protein[5].protein = "Serine";
  codon_protein[6].codon = "UCC";
  codon_protein[6].protein = "Serine";
  codon_protein[7].codon = "UCA";
  codon_protein[7].protein = "Serine";
  codon_protein[8].codon = "UCG";
  codon_protein[8].protein = "Serine";
  codon_protein[9].codon = "UAU";
  codon_protein[9].protein = "Tyrosine";
  codon_protein[10].codon = "UAC";
  codon_protein[10].protein = "Tyrosine";
  codon_protein[11].codon = "UGU";
  codon_protein[11].protein = "Cysteine";  
  codon_protein[12].codon = "UGC";
  codon_protein[12].protein = "Cysteine";
  codon_protein[13].codon = "UGG";
  codon_protein[13].protein = "Tryptophan";
  codon_protein[14].codon = "UAA";
  codon_protein[14].protein = "STOP";
  codon_protein[15].codon = "UAG";
  codon_protein[15].protein = "STOP";
  codon_protein[16].codon = "UGA";
  codon_protein[16].protein = "STOP"; 
}

int main () {
  
  string codons[] = {
    "AUG","UUU","UUC","UUA","UUG",
    "UCU","UCC","UCA","UCG","UAU",
    "UAC","UGU","UGC","UGG","UAA",
    "UAG","UGA"};
  string codons_extract[RNA_SIZE] = {};
  codon_prot codon_protein[17];
  string rna = "";
  
  srand(time(NULL));
  define_codons(codon_protein);

  for (int i = 0; i < RNA_SIZE; i++) {
    rna = rna + codons[rand() % 17];
  }

  string cod = "";
  int pos = 0;
  
  for (int i = 0; i < RNA_SIZE; i++) {
    for (int j = 0; j < 3; j++) {
      cod = cod + rna[j+pos];
    }
    codons_extract[i] = cod;
    cod = "";
    pos = pos + 3;
  }
  cout << rna << endl;
  cout << codons_extract[0] << endl;
  cout << codons_extract[1] << endl;
  cout << codons_extract[2] << endl;
  for (int i = 0; i < RNA_SIZE; i++) {
    for (int j = 0; j < 17; j++) {
      if (codon_protein[j].codon.compare(codons_extract[i]) == 0) {
	if (codon_protein[j].protein != "STOP") {
	  cout << codon_protein[j].protein << ".. ";
	  break;
	} else {
	  cout << codon_protein[j].protein << "! ";
	  return 0;
	}
      }
      
    }
  }
  return 0;
}
