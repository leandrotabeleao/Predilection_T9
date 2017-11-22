#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <string>
#include <vector>
#include <fstream>
#include "conio.c"
#include <locale.h>
#include <cctype>

using namespace std;
int main();
class Elemento {
public:
	vector <string> palavras;
	Elemento *t1,*t2,*t3,*t4,*t5,*t6,*t7,*t8,*t9;
	Elemento() {
		t1= NULL;
		t2= NULL;
		t3= NULL;
		t4= NULL;
		t5= NULL;
		t6= NULL;
		t7= NULL;
		t8= NULL;
		t9= NULL;
	}
};

class Elemento2 {
public:
	vector <string> palavras2;
	Elemento2 *s1,*s2,*s3,*s4,*s5,*s6,*s7,*s8,*s9;
	Elemento2() {
		s1= NULL;
		s2= NULL;
		s3= NULL;
		s4= NULL;
		s5= NULL;
		s6= NULL;
		s7= NULL;
		s8= NULL;
		s9= NULL;
	}
};

class Arvore  {
	public:
	Elemento *raiz;
	Arvore(){
		raiz = new Elemento();
	}
	void ConstrutorArvore(){
		string palavra;
		ifstream palavrast9("palavras.t9");
		if(!palavrast9.is_open()){
			system("cls");
			cout << "Erro ao abrir arquivio" << endl;
		}
		else
		while (!palavrast9.eof()){
		
			palavra.clear();
			palavrast9 >> palavra;	
		Elemento *no = raiz;
		
		for (int i = 0; i<palavra.size(); i++){
	//	tolower(palavra[i]);		   
		   switch(palavra[i]){
			case'a': case'b': case'c': case'A': case'B': case'C':
				if(!no->t2)
					no->t2=new Elemento();
				no=no->t2;
				break;

			case'd': case'e': case'f': case'D': case'E': case'F':
				if(!no->t3)
					no->t3=new Elemento();
				no=no->t3;
				break;

			case'g': case'h': case'i': case'G': case'H': case'I':
				if(!no->t4)
					no->t4=new Elemento();
				no=no->t4;
				break;

			case'j': case'k': case'l': case'J': case'K': case'L':
				if(!no->t5)
					no->t5=new Elemento();
				no=no->t5;
				break;

			case'm': case'n': case'o': case'M': case'N': case'O':
				if(!no->t6)
					no->t6=new Elemento();
				no=no->t6;
				break;

			case'p': case'q': case'r': case's': case'P': case'Q': case'R': case'S':
				if(!no->t7)
					no->t7=new Elemento();
				no=no->t7;
				break;

			case't': case'u': case'v': case'T': case'U': case'V':
				if(!no->t8)
					no->t8=new Elemento();
				no=no->t8;
				break;

			case'w': case'x': case'y': case'z': case'W': case'X': case'Y': case'Z':
				if(!no->t9)
					no->t9=new Elemento();
				no=no->t9;
				break;

			default:
				if(!no->t1)
					no->t1=new Elemento();
				no=no->t1;
				break;
			} 
		   no->palavras.push_back(palavra); 
		}	                           
	}
	palavrast9.close();
}
	
}; 

class Arvore2  {
	public:
	Elemento2 *raiz;
	Arvore2(){
		raiz = new Elemento2();
	}
	void ConstrutorArvore2(){
		string palavra;
		ifstream personalizadas("personalizadas.t9");
		if(!personalizadas.is_open()){
			system("cls");
			cout << "Erro ao abrir arquivio" << endl;
		}
		else
		while (!personalizadas.eof()){
			palavra.clear();
			personalizadas >> palavra;	
		Elemento2 *no2 = raiz;
		
		for (int i = 0; i<palavra.size(); i++){
	//	tolower(palavra[i]);		   
		   switch(palavra[i]){
			case'a': case'b': case'c': case'A': case'B': case'C':
				if(!no2->s2)
					no2->s2=new Elemento2();
				no2=no2->s2;
				break;

			case'd': case'e': case'f': case'D': case'E': case'F':
				if(!no2->s3)
					no2->s3=new Elemento2();
				no2=no2->s3;
				break;

			case'g': case'h': case'i': case'G': case'H': case'I':
				if(!no2->s4)
					no2->s4=new Elemento2();
				no2=no2->s4;
				break;

			case'j': case'k': case'l': case'J': case'K': case'L':
				if(!no2->s5)
					no2->s5=new Elemento2();
				no2=no2->s5;
				break;

			case'm': case'n': case'o': case'M': case'N': case'O':
				if(!no2->s6)
					no2->s6=new Elemento2();
				no2=no2->s6;
				break;

			case'p': case'q': case'r': case's': case'P': case'Q': case'R': case'S':
				if(!no2->s7)
					no2->s7=new Elemento2();
				no2=no2->s7;
				break;

			case't': case'u': case'v': case'T': case'U': case'V':
				if(!no2->s8)
					no2->s8=new Elemento2();
				no2=no2->s8;
				break;

			case'w': case'x': case'y': case'z': case'W': case'X': case'Y': case'Z':
				if(!no2->s9)
					no2->s9=new Elemento2();
				no2=no2->s9;
				break;

			default:
				if(!no2->s1)
					no2->s1=new Elemento2();
				no2=no2->s1;
				break;
			} 
		   no2->palavras2.push_back(palavra); 
		}	                           
	}
	personalizadas.close();
}
	
}; 

Arvore2 t92;

string maiuscula(string s){
	for (int i = 0; i<s.size(); i++)
	if(isalnum(s[i]))
	toupper(s[i]);
	return s;
	
}

void teclado(){
	
	gotoxy(1,1);
	textbackground(RED);
    cout << "                                   Teclado T9                                    " << endl;
    textbackground(BLUE);
    cout <<endl<<endl<<endl;
    gotoxy(49, 3);
    cout << "     TECLADO    "<<endl<<endl;
    gotoxy(50, 4);
    cout << " ---------------"<<endl<<endl;
    gotoxy(49, 5);
    cout << "|  7     8     9  |"<<endl;
    gotoxy(49, 6);
    cout << "| pqrs  tuv  wxyz |"<<endl;
    gotoxy(49, 7);
    cout << "|  4     5     6  |"<<endl;
    gotoxy(49, 8);
    cout << "| ghi   jkl   mno |"<<endl;
    gotoxy(49, 9);
    cout << "|  1     2     3  |"<<endl;
    gotoxy(49, 10);
    cout << "|       abc   def |"<<endl;
    gotoxy(49, 11);
    textbackground(RED);
    cout << "         0         "<<endl;
    gotoxy(49, 12);
    cout << "      confirma     ";
    gotoxy(50,13);
    textbackground(BLUE);
    //cout << " ---------------"<<endl<<endl;
    
    
}

void Interface(vector<string> palavras , int seta, string frase,string digitado){

    system("cls");
    teclado();    
    gotoxy(50,14);
    cout << "F - Fechar" << endl;
    gotoxy(50,15);
	cout << "Backspace - Apaga digitação" << endl;
	gotoxy(50,16);
	cout << "Espaço - Apaga frase";
	gotoxy(50,17);
	cout << "S - Salvar Frase";
	gotoxy(50,18);
	cout << "A - Abrir histórico de frases";
	gotoxy(50,20);
	textbackground(RED);
	cout << "  +  ";
	gotoxy(50,21);
	cout << "     ";
	textbackground(BLUE);
	gotoxy(50,22);
	cout << "Descer";
	gotoxy(55,20);
	textbackground(RED);
	cout << "         -   ";
	gotoxy(55,21);
	cout << "             ";
	textbackground(BLUE);
	gotoxy(56,22);
	cout << "       Subir";
    gotoxy(50,24);
    cout << "#Digitado: " << digitado << endl;
    gotoxy(50,25);
    cout << "#Frase: " << frase;

     
    for(int x=0;x<20;x++){
 
        gotoxy(6,5+x);
        if(palavras.size()>x){
        	if (x==seta-1) textbackground(RED);
            cout << palavras[x] << endl;
            textbackground(BLUE);
        }
    }
}

void registrarpalavra(){
	char escolha;
	string palavra;
    system("cls");
    cout << "Palavra não registrada." << endl << "Deseja inseri-lá no lista de palavras? \n S-Sim  \n Enter-Não" << endl;    
    if(getch() == 's'){
    	ofstream personalizadas("personalizadas.t9", ios::app);
    	system("cls");
    	cout << "Digite a palavra que deseja inserir: "; cin >> palavra;
    	personalizadas << palavra << endl;
    	personalizadas.close();
    //	t92.ConstrutorArvore2();		 
	}    
}

int main()

{
	textbackground(BLUE);
	textcolor(WHITE);
	setlocale(LC_ALL, "Portuguese");
    Arvore t9;
   // Arvore2 t92;
    vector<string> palavras;
    string frase,digitado;
    char teclado=1;
    unsigned seta = 1;
    Elemento *no;
    Elemento2 *no2;
    t9.ConstrutorArvore();
    t92.ConstrutorArvore2();
    no=t9.raiz;
    no2=t92.raiz;

    while(teclado!='f'&&teclado!='F')
    {
        switch(teclado){
            case '1':
               palavras.clear();               
               if(no2->s1){  
				   no2 = no2->s1;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t1){
               	   no = no->t1;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
            case '2':
               palavras.clear();               
               if(no2->s2){  
				   no2 = no2->s2;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t2){
               	   no = no->t2;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '3':
               palavras.clear();               
               if(no2->s3){
				   no2 = no2->s3;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t3){
               	   no = no->t3;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '4':
               palavras.clear();               
               if(no2->s4){  
				   no2 = no2->s4;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t4){
               	   no = no->t4;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '5':
               palavras.clear();               
               if(no2->s5){  
				   no2 = no2->s5;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t5){
               	   no = no->t5;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '6':
               palavras.clear();               
               if(no2->s6){
				   no2 = no2->s6;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t6){
               	   no = no->t6;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '7':
               palavras.clear();               
               if(no2->s7){  
				   no2 = no2->s7;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t7){
               	   no = no->t7;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '8':
               palavras.clear();               
               if(no2->s8){ 
				   no2 = no2->s8;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t8){
               	   no = no->t8;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '9':
               palavras.clear();               
               if(no2->s9){ 
				   no2 = no2->s9;                 
                   for(int x = 0; x < no2->palavras2.size();x++)
                   palavras.push_back(no2->palavras2[x]);
               }
               if (no->t9){
               	   no = no->t9;
               	   for(int x = 0; x < no->palavras.size();x++)
                   palavras.push_back(no->palavras[x]);
               }
               else{
                    registrarpalavra();
                    no=t9.raiz;
                    no2=t92.raiz;
                    palavras.clear();
                    seta = 1;
                    digitado.erase();
               }
               break;
           case '0':
               if(no!=t9.raiz){
                   frase+=palavras[seta-1] + " ";
                   no=t9.raiz;
                   no2=t92.raiz;
                   palavras.clear();
                   seta = 1;
                   digitado.erase();
               }
               break;
           case 8: 
               no=t9.raiz;
               no2=t92.raiz;
               palavras.clear();
               seta = 1;
               digitado.erase();
               break;
           case ' ': 
               frase.erase();
             //  no=t9.raiz;
              // no2=t92.raiz;
             //  palavras.clear();
             //  seta = 1;
             //  digitado.erase();
               break;
            case 'a': case 'A':
            	system("Frases.txt");
            	break;
        	case '-':
               if(seta >1) seta--;
               break;
            case '+': 
               if((seta<20)&&seta<palavras.size()) seta++;
               break;
           case 's': case 'S': 
               ofstream escreve("Frases.txt", ios::app);
               escreve << frase << endl;
               //frase.erase(); 
			   escreve.close();               
               break;    
        }

            Interface(palavras, seta, frase, digitado);

            do
                teclado = getch();
            while(teclado!='a'&&teclado!='A'&&teclado!='s'&&teclado!='S'&&teclado!=' '&&teclado!=8&&teclado!='0'&&teclado!='1'&&teclado!='2'&&teclado!='3'&&teclado!='4'&&teclado!='5'&&teclado!='6'&&teclado!='7'&&teclado!='8'&&teclado!='9'&&teclado!='f'&&teclado!='F'&&teclado!='-'&&teclado!='+');

            if(teclado=='1'||teclado=='2'||teclado=='3'||teclado=='4'||teclado=='5'||teclado=='6'||teclado=='7'||teclado=='8'||teclado=='9')
                digitado+=teclado;
    }
    return 0;
}
