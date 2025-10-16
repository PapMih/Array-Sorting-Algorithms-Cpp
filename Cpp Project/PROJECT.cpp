/******************************************************************************************************
Arxeio				: Project.cpp
Onomatepwnumo		: Papageorgioy Michail
Arithmos Mitroou	: 7110132300201
Hmeromhnia			: 10/06/2024 
Perigrafh			: H efarmogh ta3inomei pinakes akeraiwn, pragmatikwn, xarakthrwn kai alfari8mhtikwn.
					: Dexetai ton tupo tou pinaka apo ton xrhsth, desmeuei thn antistoixh mnhmh kai 
					: epeita kalei ton xrhsth na epile3ei poia me8odos ta3inomhshs 8a xrhsimopoih8ei 
					: meta3u triwn.
*******************************************************************************************************/
#include "Header.h" 
#include <iostream> // pros8hkh biblio8hkhs gia th diaxeirishsh i/o


using namespace std;

int main(){
	unsigned int t ;
	cout << "Dwse ton tupo twn stoixeiwn. Gia akeraio graphse 1, gia pragmatikous 2, gia xarakthres 3 kai gia alfari8mhtika 4" << endl ; /*kalw ton xrhsth na dwsei to plh8os twn stoixeiwn pou 8a exei 
	o pinakas*/
	cin >> t ; // o tupos twn stoixeiwn kataxwreitai sthn metablhth t
	while( t!=1 && t!=2 && t!=3  && t!=4 ){
		cout << "Dwse swsto tupo dedomenwn. Gia akeraio graphse 1, gia pragmatikous 2, gia xarakthres 3 kai gia alfari8mhtika 4" << endl ; /* elegxos or8othtas tupou dedomenwn*/
		cin.clear() ; // ka8arismos sfalmatos
		cin.ignore(100, '\n'); //ka8arisma reumatos eisodou ews 100 xarakthrwn h mexri na sunanthsei allagh grammhs
		cin >> t ; // o tupos twn stoixeiwn kataxwreitai sthn metablhth t
	}
	
	int n ; // plh8os stoixeiwn pinaka. Den to ebala unsigned dioti ston elegxo or8othtas 4 grammes parakatw an ebaza arnhtikh timh sthn eisodo den ekane ton elegxo kai ebgaze sfalma sth deusmesh mnhmhs 
	cout << "Dwse arithmo stoixeiwn pinaka" << endl ; //kalw ton xrhsth na dwsei to plh8os twn stoixeiwn pou 8a exei o pinakas
	cin >> n ; // to plh8os twn stoixeiwn kataxwreitai sthn metablhth n
	while( cin.fail() || n < 0){ //elegxos oti to n einai 8etikos integer
		cout << "Dwse swsto arithmo stoixeiwn pinaka" << endl ; // elegxos oti to n einai interger
		cin.clear() ; // ka8arismos sfalmatos
		cin.ignore(100, '\n'); //ka8arisma reumatos eisodou ews 100 xarakthrwn h mexri na sunanthsei allagh grammhs
		cin >> n ; // o tupos twn stoixeiwn kataxwreitai sthn metablhth n
	}
	cin.ignore();
	if( t == 1) { //an o pinakas periexei akeraious
		int* p; //pointer gia desmeush mnhmhs
		p = desmeushMnimhs(1, n); // kalw th sunarthsh gia th desmeush mnhmhs. Bazw timh 1 sthn prwth metablhth wste na katalabei oti afora akeraio
		eisagwghDedomenwn (p, n) ; //kalw th sunarhthsh mesw ths opoias 8a ginei h eisagwgh twn dedomenwn
		cout << "O pinakas prin ginei taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka 
		unsigned int method = epiloghMe8odou (); //boh8htikh metablhth gia ton prosdiorismo ths me8odou ta3inomhshs, pairnei timh apo thn sunarthsh epiloghs me8odou
		switch (method){
			case 1:
				bubbleSort(p,n); //kalw th sunarthsh taksinomhshs
				break;
			case 2:
				insertionSort(p, n) ; //kalw th sunarthsh taksinomhshs
				break;
			case 3:
				selectionSort(p, n); //kalw th sunarthsh taksinomhshs
				break;	
		}
		cout << "O pinakas meta thn taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka */
		delete p ; // apodesmeush mnhmhs
	} else if( t == 2) { //an o pinakas periexei double
		double* p; //pointer gia desmeush mnhmhs
		p = desmeushMnimhs(1.0, n); // kalw th sunarthsh gia th desmeush mnhmhs. Bazw timh 1.0 sthn prwth metablhth wste na katalabei oti afora double
		eisagwghDedomenwn (p, n) ; //kalw th sunarhthsh mesw ths opoias 8a ginei h eisagwgh twn dedomenwn
		cout << "O pinakas prin ginei taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka 
		unsigned int method = epiloghMe8odou (); //boh8htikh metablhth gia ton prosdiorismo ths me8odou ta3inomhshs, pairnei timh apo thn sunarthsh epiloghs me8odou
		switch (method){
			case 1:
				bubbleSort(p,n); //kalw th sunarthsh taksinomhshs
				break;
			case 2:
				insertionSort(p, n) ; //kalw th sunarthsh taksinomhshs
				break;
			case 3:
				selectionSort(p, n); //kalw th sunarthsh taksinomhshs
				break;	
		}
		cout << "O pinakas meta thn taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka */
		delete p ; // apodesmeush mnhmhs
	} else if( t == 3){//an o pinakas periexei xarakthres
		char* p; //pointer gia desmeush mnhmhs
		p = desmeushMnimhs('1', n); // kalw th sunarthsh gia th desmeush mnhmhs. Bazw timh '1' sthn prwth metablhth wste na katalabei oti afora xarakthres
		eisagwghDedomenwn (p, n) ; //kalw th sunarhthsh mesw ths opoias 8a ginei h eisagwgh twn dedomenwn
		cout << "O pinakas prin ginei taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka */
		unsigned int method = epiloghMe8odou (); //boh8htikh metablhth gia ton prosdiorismo ths me8odou ta3inomhshs, pairnei timh apo thn sunarthsh epiloghs me8odou
		switch (method){
			case 1:
				bubbleSort(p,n); //kalw th sunarthsh taksinomhshs
				break;
			case 2:
				insertionSort(p, n) ; //kalw th sunarthsh taksinomhshs
				break;
			case 3:
				selectionSort(p, n); //kalw th sunarthsh taksinomhshs
				break;	
		}
		cout << "O pinakas meta thn taksinomhsh einai o e3hs" << endl ;	
		ektupwshDedomenwn (p, n) ; //sunarthsh pou ektupwnei ta stoixeia tou pinaka 
		delete p ; // apodesmeush mnhmhs
	} else if( t == 4){
		char** p = new char*[n]; //pointer se pointer gia th desmeush mnhmhs
		for (int i = 0 ; i < n ; i++) { // desmeush mnhmhs gia ka8e grammh tou pinaka
			p[i] = desmeushMnimhs('1', 80); //desmeuw mnhmh opws ua ekana gia monodiastato pinaka xarakthrwn me megisto ari8mo grammatwn ana protash ta 79
			eisagwghDedomenwnString (p[i], 80) ; //kalw th sunarhthsh mesw ths opoias 8a ginei h eisagwgh twn dedomenwn se kaue 3exwristh grammah tou pinaka
		}
		cout << "O pinakas prin ginei taksinomhsh einai o e3hs" << endl ;	
		for (int i = 0 ; i < n ; i++) {
			cout << "[" << (i+1) << "] = " << p[i] << endl ; ; //ektupwsh protasewn
		} 
		unsigned int method = epiloghMe8odou (); //boh8htikh metablhth gia ton prosdiorismo ths me8odou ta3inomhshs, pairnei timh apo thn sunarthsh epiloghs me8odou
		switch (method){
			case 1:
				bubbleSort(p,n); //kalw th sunarthsh taksinomhshs
				break;
			case 2:
				insertionSort(p, n) ; //kalw th sunarthsh taksinomhshs
				break;
			case 3:
				selectionSort(p, n); //kalw th sunarthsh taksinomhshs
				break;	
		}
		cout << "O pinakas meta thn taksinomhsh einai o e3hs" << endl ;	
		for (int i = 0 ; i < n ; i++) {
			cout << "[" << (i+1) << "] = " << p[i] << endl ; ; //ektupwsh protasewn
		}
		delete p ; // apodesmeush mnhmhs
	}
}


