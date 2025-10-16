#include <iostream> // pros8hkh biblio8hkhs gia th diaxeirishsh i/o
#include <cstring> // pros8hkh biblio8hkhs gia th diaxeirishsh alfari8mhtikwn
#include "Header.h" 

using namespace std;

// sunarthseis desmeushMnimhs

int *desmeushMnimhs(int t, int n){
	int *p; //dhlwsh deikth gia thn desmeush mnhmhs
	p = new int[n]; //desmeush dunamikhs mnhmhs gia n akeraious
	return p; //epistrefrei deikth o opoios deixnei sth 8esh ths mnhmhs
}

double *desmeushMnimhs(double t, int n){
	double *p; //dhlwsh deikth gia thn desmeush mnhmhs
	p = new double[n]; //desmeush dunamikhs mnhmhs gia n pragmagtikous
	return p; //epistrefrei deikth o opoios deixnei sth 8esh ths mnhmhs
}

char *desmeushMnimhs(char t, int n){
	char *p; //dhlwsh deikth gia thn desmeush mnhmhs
	p = new char[n]; //desmeush dunamikhs mnhmhs gia n char
	return p; //epistrefrei deikth o opoios deixnei sth 8esh ths mnhmhs
}

// sunarthseis eisagwghDedomenwn

void eisagwghDedomenwn (int *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "Dwse to " << (i+1) << " stoixeio tou pinaka" << endl ;
		cin >> p[i];
	}
}

void eisagwghDedomenwn (double *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "Dwse to " << (i+1) << " stoixeio tou pinaka" << endl ;
		cin >> p[i];
	}
}

void eisagwghDedomenwn (char *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "Dwse to " << (i+1) << " stoixeio tou pinaka" << endl ;
		cin >> p[i];
	}
}

void eisagwghDedomenwnString (char *p, int n){ //3exvristh sunarthsh gia thn eisagwgh dedomenwn ston pinaka alfari8mhtikwn
	static int count = 1; //metrhths static diathrei thn timh tou gia thn katametrhsh ths grammhs sthn opoia 8a ginei eisagwgh protashs
	cout << "Dwse thn protash " << count << endl ;
	cin.getline(p, 80); //diabasma ths grammhs kai apo8hkeush
	count++ ; 
}

//sunarthsis ektupwshs twn dedomenwn tou pinaka

void ektupwshDedomenwn (int *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "[" << (i+1) << "] = " << p[i] << endl ;
	}
}

void ektupwshDedomenwn (double *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "[" << (i+1) << "] = " << p[i] << endl ;
	}
}

void ektupwshDedomenwn (char *p, int n){
	for (int i = 0 ; i < n ; i++ ){
		cout << "[" << (i+1) << "] = " << p[i] << endl ;
	}
}

// sunarthsh gia thn epilogh me8odou ta3inomhshs

int epiloghMe8odou (){
	unsigned int t ; // gia thn epilogh me8odou ta3inomhshs
		cout << "Dwse me8odo ta3inomhshs. Gia Bubble Sort grapse 1, gia Insertion Sort grapse 2  kai gia Selection Sort grapse 3" << endl ;
		cin >> t ;
		while( t!=1 && t!=2 && t!=3 ){ /* elegxos or8othtas timhs*/
			cout << "Dwse swsth me8odo ta3inomhshs. Gia Bubble Sort grapse 1, gia Insertion Sort grapse 2  kai gia Selection Sort grapse 3" << endl ;
			cin.clear() ; // ka8arismos sfalmatos
			cin.ignore(100, '\n'); //ka8arisma reumatos eisodou ews 100 xarakthrwn h mexri na sunanthsei allagh grammhs
			cin >> t ; // o tupos twn stoixeiwn kataxwreitai sthn metablhth t
		}
	return t ;	//epistrfei thn me8odo
}

// sunarthseis Bubble Sort

void bubbleSort(int *p, int n){
	int temp ; //metablhth gia thn proswrinh apo8hkeush timhs
	for (int a = 1 ; a < n ; a++ ){
		for (int b = n - 1 ; b >=  a ; b--){
			if(p[b-1] > p[b]) { //elegxos an to stoixeio b-1 einai megalutero apo to b kai enallagah tous efodon einai
				temp = p[b-1] ;
				p[b-1] = p[b];
				p[b] = temp ;
			}
		}
	}	
}

void bubbleSort(double *p, int n){
	double temp  ; //metablhth gia thn proswrinh apo8hkeush timhs
	for (int a = 1 ; a < n ; a++ ){
		for (int b = n - 1 ; b >=  a ; b--){
			if(p[b-1] > p[b]) { //elegxos an to stoixeio b-1 einai megalutero apo to b kai enallagah tous efodon einai
				temp = p[b-1] ;
				p[b-1] = p[b];
				p[b] = temp ;
			}
		}
	}	
}

void bubbleSort(char *p, int n){
	char temp ; //metablhth gia thn proswrinh apo8hkeush timhs
	for (int a = 1 ; a < n ; a++ ){
		for (int b = n - 1 ; b >=  a ; b--){
			if(p[b-1] > p[b]) { //elegxos an to stoixeio b-1 einai megalutero apo to b kai enallagah tous efodon einai
				temp = p[b-1] ;
				p[b-1] = p[b];
				p[b] = temp ;
			}
		}
	}	
}

void bubbleSort(char **p, int n){ //gia thn periptwsh alfari8mhtikwn
	char temp[80] ; //metablhth gia thn proswrinh apo8hkeush timhs
	for (int a = 1 ; a < n ; a++ ){
		for (int b = n - 1 ; b >=  a ; b--){
			if(strcmp(p[b - 1], p[b]) > 0) { 
                strcpy(temp, p[b - 1]);
                strcpy(p[b - 1], p[b]);
                strcpy(p[b], temp);
			}
		}
	}	
}

// sunarthseis Insertion Sort

void insertionSort(int *p, int n){
	int current ; //metablhth gia thn apo8hkeush ths trexousas timhs
	int position ; //metablhth gia thn apo8hkeush ths trexousas 8eshs
	for (int a = 1 ; a < n ; a++ ){ // apo to deutero stoixeio 3ekinw
		current = p[a] ; //apo8hkeush ths trexousas timhs
		position = a ; //apo8hkeush ths trexousas 8eshs
		while (position > 0 && p[position-1] > current){ /* trexei gia oso den exei ftasei sto prwto stoixeio kai to prohgoumeno stoixeio einai megalutero apo auto 
		pou einai upo elegxo */
			p[position] = p[position - 1]; //to stoixeio pairnei thn timh tou prohgoumenou pou einai megalutero
			position--; // meiwsh ths 8eshs
		}
			p[position] = current; // otan stamathsei na ikanopoiountai oi sun8hkes tou while sthn trexousa 8esh apo8hkeuetai h timh current 
	}
}	

void insertionSort(double *p, int n){
	double current ; //metablhth gia thn apo8hkeush ths trexousas timhs
	int position ; //metablhth gia thn apo8hkeush ths trexousas 8eshs
	for (int a = 1 ; a < n ; a++ ){ // apo to deutero stoixeio 3ekinw
		current = p[a] ; //apo8hkeush ths trexousas timhs
		position = a ; //apo8hkeush ths trexousas 8eshs
		while (position > 0 && p[position-1] > current){ /* trexei gia oso den exei ftasei sto prwto stoixeio kai to prohgoumeno stoixeio einai megalutero apo auto 
		pou einai upo elegxo */
			p[position] = p[position - 1]; //to stoixeio pairnei thn timh tou prohgoumenou pou einai megalutero
			position--; // meiwsh ths 8eshs
		}
			p[position] = current; // otan stamathsei na ikanopoiountai oi sun8hkes tou while sthn trexousa 8esh apo8hkeuetai h timh current 
	}
}	

void insertionSort(char *p, int n){
	char current ; //metablhth gia thn apo8hkeush ths trexousas timhs
	int position ; //metablhth gia thn apo8hkeush ths trexousas 8eshs
	for (int a = 1 ; a < n ; a++ ){ // apo to deutero stoixeio 3ekinw
		current = p[a] ; //apo8hkeush ths trexousas timhs
		position = a ; //apo8hkeush ths trexousas 8eshs
		while (position > 0 && p[position-1] > current){ /* trexei gia oso den exei ftasei sto prwto stoixeio kai to prohgoumeno stoixeio einai megalutero apo auto 
		pou einai upo elegxo */
			p[position] = p[position - 1]; //to stoixeio pairnei thn timh tou prohgoumenou pou einai megalutero
			position--; // meiwsh ths 8eshs
		}
			p[position] = current; // otan stamathsei na ikanopoiountai oi sun8hkes tou while sthn trexousa 8esh apo8hkeuetai h timh current 
	}
}	

void insertionSort(char **p, int n){ //gia thn periptwsh alfari8mhtikwn
	char current[80] ; //metablhth gia thn apo8hkeush ths trexousas timhs
	int position ; //metablhth gia thn apo8hkeush ths trexousas 8eshs
	for (int a = 1 ; a < n ; a++ ){ // apo to deutero stoixeio 3ekinw
		strcpy(current, p[a]) ; //apo8hkeush ths trexousas timhs
		position = a ; //apo8hkeush ths trexousas 8eshs
		while (position > 0 && strcmp(p[position-1],current) > 0){ /* trexei gia oso den exei ftasei sto prwto stoixeio kai to prohgoumeno stoixeio einai megalutero apo auto 
		pou einai upo elegxo */
			strcpy(p[position], p[position - 1]); //to stoixeio pairnei thn timh tou prohgoumenou pou einai megalutero
			position--; // meiwsh ths 8eshs
		}
			strcpy(p[position], current); // otan stamathsei na ikanopoiountai oi sun8hkes tou while sthn trexousa 8esh apo8hkeuetai h timh current 
	}
}
	
// sunarthseis Selection Sort

void selectionSort(int *p, int n){
	int min; //metablhth me th 8esh tou mikroterou stoixeiou
	int temp; //boh8htikh metablhth gia thn enallagh stoixeiwn
	for (int i = 0 ; i < n - 1 ; i++){ //elegxos olwn twn stoixeiwn
	min = i;//h 8esh tou elaxistou
	for (int k = i + 1 ; k < n ; k++) //brogxos gia ton elegxo ka8e stoixeiou an einai mikrotero apo to p[i]
		if (p[k] < p[min]) 
			min = k; // an p[k] < p[min] apo8hkeuoume thn 8esh tou sth metablhth min
	//allagh 8eshs twn stoixeiwn
	temp = p[min]; 
	p[min] = p[i];
	p[i] = temp;
	}
}	

void selectionSort(double *p, int n){
	int min; //metablhth me th 8esh tou mikroterou stoixeiou
	double temp; //boh8htikh metablhth gia thn enallagh stoixeiwn
	for (int i = 0 ; i < n - 1 ; i++){ //elegxos olwn twn stoixeiwn
	min = i;//h 8esh tou elaxistou
	for (int k = i + 1 ; k < n ; k++) //brogxos gia ton elegxo ka8e stoixeiou an einai mikrotero apo to p[i]
		if (p[k] < p[min]) 
			min = k; // an p[k] < p[min] apo8hkeuoume thn 8esh tou sth metablhth min
	//allagh 8eshs twn stoixeiwn
	temp = p[min]; 
	p[min] = p[i];
	p[i] = temp;
	}
}

void selectionSort(char *p, int n){
	int min; //metablhth me th 8esh tou mikroterou stoixeiou
	char temp; //boh8htikh metablhth gia thn enallagh stoixeiwn
	for (int i = 0 ; i < n - 1 ; i++){ //elegxos olwn twn stoixeiwn
	min = i;//h 8esh tou elaxistou
	for (int k = i + 1 ; k < n ; k++) //brogxos gia ton elegxo ka8e stoixeiou an einai mikrotero apo to p[i]
		if (p[k] < p[min]) 
			min = k; // an p[k] < p[min] apo8hkeuoume thn 8esh tou sth metablhth min
	//allagh 8eshs twn stoixeiwn
	temp = p[min]; 
	p[min] = p[i];
	p[i] = temp;
	}
}

void selectionSort(char **p, int n){ //gia thn periptwsh alfari8mhtikwn
	int min; //metablhth me th 8esh tou mikroterou stoixeiou
	char temp[80]; //boh8htikh metablhth gia thn enallagh stoixeiwn
	for (int i = 0 ; i < n - 1 ; i++){ //elegxos olwn twn stoixeiwn
	min = i;//h 8esh tou elaxistou
	for (int k = i + 1 ; k < n ; k++) //brogxos gia ton elegxo ka8e stoixeiou an einai mikrotero apo to p[i]
		if (strcmp(p[k], p[min]) < 0) 
			min = k; // an p[k] < p[min] apo8hkeuoume thn 8esh tou sth metablhth min
	//allagh 8eshs twn stoixeiwn
	strcpy(temp, p[min]); 
	strcpy(p[min], p[i]);
	strcpy(p[i],temp);
	}
}
	
