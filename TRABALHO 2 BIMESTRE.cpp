#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<conio2.h>
#include <windows.h>
#define TF 100

struct TpCliente{
	char CPF[15],Nome[TF],fone[16];
	int Status;
};

struct TpCarro{
	int Cod, Status;
	float Preco;
	char Modelo[TF],Categoria[TF];
};

struct TpLocacao{
	int Codigo,Dias,Status;
	char CPF[15];
	float ValorLocacao;
};

void Moldura(int CI, int LI, int CF, int LF, int CorT, int CorF)
{
	int i;
	textcolor(CorT);
	textbackground(CorF);
	gotoxy(CI,LI);
	printf("%c",201);
	gotoxy(CF,LI);
	printf("%c",187);
	gotoxy(CI,LF);
	printf("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	for(i=CI+1; i<CF; i++)
	{
		gotoxy(i,LI);
		printf("%c",205);
		
		
		gotoxy(i,LF);
		printf("%c",205);
	}
	
	for(i=LI+1; i<LF; i++)
	{
		gotoxy(CI,i);
		printf("%c",186);
		
		
		gotoxy(CF,i);
		printf("%c",186);
	}
	textcolor(7);
	textbackground(0);
}

void ExibeTelao()
{
	clrscr();
	textcolor(2);
	gotoxy(30,3);
	printf("TRABALHO DE ATP II");
	Moldura(1,1,80,25,2,7);
	Moldura(2,2,79,4,5,6);
	Moldura(2,5,79,21,10,7);
	Moldura(2,22,79,24,11,4);

}
void ExibeTelaoResp()
{
	clrscr();
	textcolor(2);
	gotoxy(30,3);
	printf("TRABALHO DE ATP II");
	Moldura(1,1,80,25,2,7);
	Moldura(2,2,79,4,5,6);
	Moldura(2,5,79,24,10,7);
	
	
}
void ExibeTelaoResp2()
{
	clrscr();
	textcolor(2);
	gotoxy(30,3);
	printf("TRABALHO DE ATP II");
	Moldura(1,1,85,25,2,7);
	Moldura(2,2,84,4,5,6);
	Moldura(2,5,84,24,10,7);
	
	
}
void ExibeTelaoRela()
{
	clrscr();
	textcolor(2);
	gotoxy(42,3);
	printf("TRABALHO DE ATP II");
	Moldura(1,1,120,60,2,7);
	Moldura(2,2,119,4,5,6);
	Moldura(2,5,119,59,10,7);
	
	
}




char MenuExcluir(void){
	ExibeTelao();
	gotoxy(28,6);
	textcolor(2);
	printf("### MENU EXCLUIR ### ");
	gotoxy(25,10);
	printf("[A] Excluir Vetor Clientes");
	gotoxy(25,11);
	printf("[B] Excluir Vetor Carro");
	gotoxy(25,12);
	printf("[C] Excluir Vetor Locacao");	
	gotoxy(25,13);
	printf("[D] Voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getch());
	
}

char MenuExcluirCliente(void){
	ExibeTelao();
	gotoxy(28,6);
	textcolor(2);
	printf("### MENU EXCLUIR ### ");
	gotoxy(25,10);
	printf("[A] Exclusao Logica");
	gotoxy(25,11);
	printf("[B] Exclusao Fisica");
	gotoxy(25,12);
	printf("[C] Voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getch());
	
}

char MenuAlterar(void){
	ExibeTelao();
	textcolor(2);
	gotoxy(28,7);
	printf("### MENU EXCLUIR ### ");
	gotoxy(25,10);
	printf("[A] Alterar Vetor Clientes");
	gotoxy(25,11);
	printf("[B] Alterar Vetor Carro");
	gotoxy(25,12);
	printf("[C] Alterar Vetor Locacao");	
	gotoxy(25,13);
	printf("[D] Voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getch());
	
}



char MenuExibir(void)
{
	ExibeTelao();
	textcolor(2);
	gotoxy(28,7);
	printf("### MENU EXIBIR ###");
	gotoxy(25,10);
	printf("[A] Exibir Vetor Clientes");
	gotoxy(25,11);
	printf("[B] Exibir Vetor Carro");
	gotoxy(25,12);
	printf("[C] Exibir Vetor Locacao");	
	gotoxy(25,13);
	printf("[D] Voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getch());
}


char MenuListagem(void){
	ExibeTelao();
	textcolor(2);
	gotoxy(28,7);
	printf("### MENU lISTAGEM ###");
	gotoxy(25,10);
	printf("[A] 3 locacoes");
	gotoxy(25,11);
	printf("[B] Categoria Escolhida");
	gotoxy(25,12);
	printf("[C] Valor Acima");
	gotoxy(25,13);
	printf("[D] Voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getche());
}


char MenuCadastro(void){
	ExibeTelao();
	textcolor(2);
	gotoxy(28,7);
	printf("### MENU CADASTRO ###");
	gotoxy(25,10);
	printf("[A] CLIENTE");
	gotoxy(25,11);
	printf("[B] CARROS");
	gotoxy(25,12);
	printf("[C] LOCACAO");
	gotoxy(25,13);
	printf("[D] CADASTRO AUTOMATICO");
	gotoxy(25,14);
	printf("[E] voltar");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getche());
}

char MenuCarro(void){
	ExibeTelao();
	textcolor(2);
	gotoxy(28,7);
	printf("### MENU CARRO ###");
	gotoxy(25,10);
	printf("[A] CADASTRAR CARRO POR CODIGO");
	gotoxy(25,11);
	printf("[B] CADASTRAR CARRO POR MODELO");
	gotoxy(25,12);
	printf("[C] VOLTAR");
	gotoxy(4,23);
	printf("ESCOLHA A OPCAO: ");
	return toupper(getche());
}

char Menu(void){
		clrscr();
		ExibeTelao();
		gotoxy(28,7);
		textcolor(2);
		printf("### LOCACAO DE CARROS ###");
		gotoxy(25,10);
		printf("[A] CADASTRO");
		gotoxy(25,11);
		printf("[B] EXCLUSAO");
		gotoxy(25,12);
		printf("[C] ALTERACAO");
		gotoxy(25,13);
		printf("[D] EXIBIR TABELAS");
		gotoxy(25,14);
		printf("[E] LISTAGEM/RELATORIOS");
		gotoxy(25,15);
		printf("[F] RELATORIO COMPLETO");
		gotoxy(4,23);
		printf("ESCOLHA A OPCAO: ");
		return toupper(getche());
}

int buscaSequencialIndexada(FILE *Ptr, char CPF_buscado[15]) {
	TpCliente Cli; 
	rewind(Ptr);
	
	fread(&Cli, sizeof(TpCliente), 1, Ptr); 

	while(!feof(Ptr) && !(strcmp(Cli.CPF, CPF_buscado) >= 0 && Cli.Status == 1)) { 
		fread(&Cli, sizeof(TpCliente), 1, Ptr);
	}
	
	if (!feof(Ptr) && strcmp(Cli.CPF, CPF_buscado) == 0 && Cli.Status == 1)
		return ftell(Ptr) - sizeof(TpCliente); 
	else 
		return -1; 
}

// Busca binária

int buscaBinaria(FILE *Ptr, int cod) {
    int inicio, meio, fim;
    TpCarro Car;
    
    rewind(Ptr);
    fseek(Ptr, 0, 2);
    
    inicio = 0;
    fim = ftell(Ptr) / sizeof(TpCarro);

    while (inicio < fim) {
        meio = (inicio + fim) / 2;
        
        fseek(Ptr, meio * sizeof(TpCarro), 0);
        fread(&Car, sizeof(TpCarro), 1, Ptr);

        if (Car.Cod == cod && Car.Status == 1) {
            return meio * sizeof(TpCarro);
        }
        
        if (Car.Cod < cod) {
            inicio = meio + 1;
        }
        else { 
            fim = meio; 
        }
    }

    return -1;
}

int BuscaLocacaoCod(FILE *PtrLoc,char CPFAux[15], int AuxCod)
{
	TpLocacao Loc;
	rewind(PtrLoc);
	while(!feof(PtrLoc) && strcmp(CPFAux,Loc.CPF) != 0 && AuxCod != Loc.Codigo)
		fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
	if(!feof(PtrLoc))
		ftell(PtrLoc)-sizeof(TpLocacao);
	else	
		return -1;
}

int buscaBinariaLoc(FILE *Ptr, char CPF_buscado[15]) {
    int inicio, meio, fim;
    TpLocacao Loc; 
    
    rewind(Ptr);
    fseek(Ptr, 0, 2);
    
    inicio = 0;
    fim = ftell(Ptr) / sizeof(TpLocacao); 

    while (inicio < fim) {
        meio = (inicio + fim) / 2;
        
        fseek(Ptr, meio * sizeof(TpLocacao), 0);
        fread(&Loc, sizeof(TpLocacao), 1, Ptr);

        if (strcmp(Loc.CPF, CPF_buscado) == 0 && Loc.Status == 1) {
            return meio * sizeof(TpLocacao); 
        }
        if (strcmp(Loc.CPF, CPF_buscado) < 0) { 
            inicio = meio + 1; 
        }
        else { 
            fim = meio; 
        }
    }
    return -1;
}

int BuscaAtivaPorCPF_CodCar(FILE *Ptr, char AuxCPF[15], int AuxCod)
{
	TpLocacao Loc;
	rewind(Ptr);
	fread(&Loc,sizeof(TpLocacao),1,Ptr);
	
	
	while(!feof(Ptr) && 
		  !(strcmp(Loc.CPF, AuxCPF) == 0 && Loc.Codigo == AuxCod && Loc.Status == 1))
	{
		fread(&Loc,sizeof(TpLocacao),1,Ptr);
	}
	
	if(!feof(Ptr)) 
		return ftell(Ptr)-sizeof(TpLocacao); 
	else
		return -1; 
}

// ### ORDENAÇÕES ###

// Ordenação por inserção direta

void insercaoDireta(FILE *Ptr) {
	int tamanho;
	TpCliente A,B;
	fseek(Ptr, 0, 2);												
	tamanho = ftell(Ptr) / sizeof(TpCliente);								
	if (tamanho > 1) {														
		do {
			fseek(Ptr, (tamanho - 2) * sizeof(TpCliente), 0);		
			fread(&A, sizeof(TpCliente), 1, Ptr);						
			fread(&B, sizeof(TpCliente), 1, Ptr);						
			if (strcmp(A.CPF,B.CPF) > 0) {										
				fseek(Ptr, (tamanho - 2) * sizeof(TpCliente), 0);	
				fwrite(&B, sizeof(TpCliente), 1, Ptr);					
				fwrite(&A, sizeof(TpCliente), 1, Ptr);					
			}
			tamanho--;														
		} while (tamanho > 1 && strcmp(A.CPF,B.CPF)>0);							
	}
}

// Ordenação por seleção direta

int buscarMaiorID(FILE *Ptr, int tamanho) { 
	int maior_pos, maior, i;
	TpCarro Car;
	rewind(Ptr);							
	fread(&Car, sizeof(TpCarro), 1, Ptr);
	maior_pos = 0;							
	maior = Car.Cod;							
	for (i = 1; i < tamanho; i++) {
		fseek(Ptr, i * sizeof(TpCarro), 0);	
		fread(&Car, sizeof(TpCarro), 1, Ptr);			
		if (maior < Car.Cod) {								
			maior = Car.Cod;									
			maior_pos = i;								
		}
	}
	return maior_pos;
}

void selecaoDireta(FILE *Ptr) {
	int maior_pos, tamanho, encerrado = 0;
	TpCarro auxA, auxB;
	fseek(Ptr, 0, 2);											
	tamanho = ftell(Ptr) / sizeof(TpCarro);							
	while (tamanho > 0 && !encerrado) {									
		maior_pos = buscarMaiorID(Ptr, tamanho);						
		if (maior_pos < tamanho - 1) {									
			fseek(Ptr, maior_pos * sizeof(TpCarro), 0);		
			fread(&auxA, sizeof(TpCarro), 1, Ptr);
			fseek(Ptr, (tamanho - 1) * sizeof(TpCarro), 0);	
			fread(&auxB, sizeof(TpCarro), 1, Ptr);
			fseek(Ptr, maior_pos * sizeof(TpCarro), 0);		
			fwrite(&auxB, sizeof(TpCarro), 1, Ptr);
			fseek(Ptr, (tamanho - 1) * sizeof(TpCarro), 0);	
			fwrite(&auxA, sizeof(TpCarro), 1, Ptr);
			tamanho--;													
		}
		else encerrado = 1;												
	}
}



int BuscaCliente(FILE *PtrArq,char CPFAux[15]){
	TpCliente Cli;
	rewind(PtrArq);
	fread(&Cli,sizeof(TpCliente),1,PtrArq);
	while(!feof(PtrArq) && !(strcmp(CPFAux,Cli.CPF) == 0 && Cli.Status == 1))
		fread(&Cli,sizeof(TpCliente),1,PtrArq);
	
	if(!feof(PtrArq))
		return ftell(PtrArq)-sizeof(TpCliente);
	else
		return -1;
}

int buscaCarroCategoria(FILE *Ptr, char Aux[15])
{
	TpCarro Car;
	rewind(Ptr);
	fread(&Car,sizeof(TpCarro),1,Ptr);
	while(!feof(Ptr) && !(stricmp(Aux,Car.Categoria) && Car.Status==1))
		fread(&Car,sizeof(TpCarro),1,Ptr);
	
	if(!feof(Ptr))
		return ftell(Ptr)-sizeof(TpCarro);
	else
		return -1;
}

int buscaCarroModelo(FILE *Ptr, char Aux[15])
{
	TpCarro Car;
	rewind(Ptr);
	fread(&Car,sizeof(TpCarro),1,Ptr);
	while(!feof(Ptr) && !(stricmp(Aux,Car.Modelo)==0 && Car.Status==1))
		fread(&Car,sizeof(TpCarro),1,Ptr);
	
	if(!feof(Ptr))
		return ftell(Ptr)-sizeof(TpCarro);
	else
		return -1;
}

int BuscaLocacaoInt(FILE *Ptr,int Aux)
{
	TpLocacao Loc;
	rewind(Ptr);
	fread(&Loc,sizeof(TpLocacao),1,Ptr);
	while(!feof(Ptr) && !(Aux==Loc.Codigo && Loc.Status==1))
		fread(&Loc,sizeof(TpLocacao),1,Ptr);
	
	if(!feof(Ptr))
		return ftell(Ptr)-sizeof(TpLocacao);
	else
		return -1;
}

int BuscaLocacaoLimite(FILE *Ptr, float Aux)
{
	TpLocacao Loc;
	rewind(Ptr);
	fread(&Loc,sizeof(TpLocacao),1,Ptr);
	while(!feof(Ptr) && !(Aux==Loc.ValorLocacao && Loc.Status==1))
		fread(&Loc,sizeof(TpLocacao),1,Ptr);
	
	if(!feof(Ptr))
		return ftell(Ptr)-sizeof(TpLocacao);
	else
		return -1;
}

int BuscaExaustivaCarroCodigo(FILE *Ptr, int Aux)
{
	TpCarro Car;
	rewind(Ptr);
	fread(&Car,sizeof(TpCarro),1,Ptr);
	while(!feof(Ptr) && !(Aux==Car.Cod && Car.Status==1))
		fread(&Car,sizeof(TpCarro),1,Ptr);
		
	if(!feof(Ptr))
		return ftell(Ptr)-sizeof(TpCarro);
	else
		return -1;
}

int BuscaExaustivaSentCPFLoc(FILE *Ptr, char Aux[15])
{
	TpLocacao Loc;
	int pos,posF;
	fseek(Ptr,0,2);
	pos = ftell(Ptr);
	strcpy(Loc.CPF,Aux);
	Loc.Status=1;
	fwrite(&Loc,sizeof(TpLocacao),1,Ptr);
	rewind(Ptr);
	fread(&Loc,sizeof(TpLocacao),1,Ptr);
	while(!(strcmp(Aux,Loc.CPF)==0 && Loc.Status==1))
		fread(&Loc,sizeof(TpLocacao),1,Ptr);
	posF=ftell(Ptr)-sizeof(TpLocacao);
	Loc.Status=0;
	fseek(Ptr,pos,0);
	fwrite(&Loc,sizeof(TpLocacao),1,Ptr);
	
	if(pos!=posF)
		return posF;
	else
		return -1;
	
}

int PosicaoMaior(TpCarro Car[TF], int TL){
	int PosMaior,Maior,i;
	Maior=Car[0].Cod;
	PosMaior=0;
	for(i=1;i<TL;i++)
		if(Maior<Car[i].Cod){
			Maior=Car[i].Cod;
			PosMaior=i;
		}
		return PosMaior;
}

void SelectionSortCod(TpCarro Car[TF], int TL){
	int PosM;
	TpCarro Aux; 
	while(TL > 0){
		PosM = PosicaoMaior(Car, TL);
		if(PosM < TL-1){
			Aux = Car[PosM];
			Car[PosM] = Car[TL-1];
			Car[TL-1] = Aux;
		}
		TL--;
	}
}

int ExibeClientes()
{
	int i, x=9;
	ExibeTelaoResp2();
	TpCliente Cliente;
	FILE *PtrCli = fopen("Clientes.dat","rb");
	gotoxy(27,6);
	printf("### Exibe Clientes ###");
	fread(&Cliente,sizeof(TpCliente),1,PtrCli);
	while(!feof(PtrCli))
	{
		if(Cliente.Status==1){
			gotoxy(13,8);
			printf(" CPF   ||                Nome                  ||     FONE");
			gotoxy(5,x);
			printf(" %s ", Cliente.CPF);
			gotoxy(20,x);
			printf("||");
			gotoxy(22,x);
			printf(" %s ", Cliente.Nome);
			gotoxy(60,x);
			printf("||");
			gotoxy(64,x);
			printf(" %s ", Cliente.fone);
			x++;
		}
		fread(&Cliente,sizeof(TpCliente),1,PtrCli);
	}
	fclose(PtrCli);
	getch();
}

void ExibeCarro()
{
	int i, x=9;
	ExibeTelaoResp();
	TpCarro Car;
	FILE *Ptr = fopen("Carros.dat","rb");
	gotoxy(27,6);
	printf("### Exibe CARRO ###");
	fread(&Car,sizeof(TpCarro),1,Ptr);
	while(!feof(Ptr)){
		if(Car.Status==1)
		{
			gotoxy(13,8);
			printf("Carro ||    Modelo     ||     Categoria     ||      Preco");
			gotoxy(13,x);
			printf(" %d  || ",Car.Cod);
			gotoxy(24,x);
			printf(" %s  ",Car.Modelo); 
			gotoxy(36,x);
			printf("||");
			gotoxy(44,x);
			printf(" %s  ",Car.Categoria); 
			gotoxy(57,x);
			printf("||");
			gotoxy(64,x);
			printf(" %.2f  ",Car.Preco); 
			x++;
		}
		fread(&Car,sizeof(TpCarro),1,Ptr);
	}		
	fclose(Ptr);	
	getch();
}

int ValidaCPF(char AuxCPF[15]){
	int i, pos =10, soma = 0,resto, divisao, divisao2, iguais = 1;
	
	if (AuxCPF[3] != '.' || AuxCPF[7] != '.' || AuxCPF[11] != '-') 
		return -1;
	for (i = 0; i < 14; i++)
	{
	    if (i != 3 && i != 7 && i != 11 && AuxCPF[i] != AuxCPF[0])
	        iguais = 0;
	}
	if (iguais == 1) 
		return -1;
	for(i=0;i<11;i++)
	{
		if(i!=3 && i!= 7 && i!= 11 )
		{
			soma += (AuxCPF[i] - '0') * pos;
			pos--;
		}
	}
	resto = (soma%11);
	if (resto < 2)
    	divisao = 0;
	else
    	divisao = 11 - resto;
	soma = 0;	
	pos = 11;	
	for(i=0;i<13;i++)
	{
		if(i!=3 && i!= 7 &&i!= 11 )
		{
			soma += (AuxCPF[i] - '0') * pos;
			pos--;
		}
	}
	resto = (soma%11);
	if (resto < 2)
    	divisao2 = 0;
	else
    	divisao2 = 11 - resto;
	if(divisao == (AuxCPF[12] - '0') && divisao2 == (AuxCPF[13] - '0'))
	{
		return 1;
	}
	else
		return -1;
}


void CriarArquivos(void)
{
	FILE *PtrArq;
	
	PtrArq = fopen("Clientes.dat","ab");
	fclose(PtrArq);
	
	PtrArq = fopen("Carros.dat","ab");
	fclose(PtrArq);
	
	PtrArq = fopen("Locacao.dat","ab");
	fclose(PtrArq);
}
 
void CadastroCliente(void){
	
	TpCliente Cliente;
	char AuxCPF[15];
	int pos, Valido,y=10;
	FILE *PtrCli = fopen("Clientes.dat","rb+");
	ExibeTelaoResp();
	gotoxy(27,6);
	printf("### CADASTRO CLIENTE ###");
	gotoxy(4,8);
	printf("CPF(EX: XXX.XXX.XXX-XX): ");
	fflush(stdin);
	gets(AuxCPF);
	
	while(strcmp(AuxCPF,"\0")!=0)	
	{	
		Valido = ValidaCPF(AuxCPF);
		if(Valido == 1)
		{
			pos = buscaSequencialIndexada(PtrCli,AuxCPF); 
			
			if(pos == -1) 
			{
				strcpy(Cliente.CPF,AuxCPF);
				gotoxy(4,9);
				printf("NOME: "); 
				fflush(stdin);
				gets(Cliente.Nome);
				while (strlen(Cliente.Nome) == 0) 
				{
					gotoxy(4,y);
					y++;
					printf("Nome Vazio");
					gotoxy(4,y);
    				printf("Digite Novamente: ");
    				y++;
    				gets(Cliente.Nome);
				}
				gotoxy(4,y);
				printf("TELEFONE: ");
				y++;
				fflush(stdin);
				gets(Cliente.fone);
				while (Cliente.fone[0] != '(' || Cliente.fone[3] != ')' || Cliente.fone[4] != ' ' || Cliente.fone[10] != '-') 
				{
				    gotoxy(4,y);
				    printf("Telefone formatado errado!");
				    y++;
				    gotoxy(4,y);
				    printf("DIGITE NOVAMENTE: ");
				    fflush(stdin); 
				    gets(Cliente.fone); 
				}
				Cliente.Status = 1;
				fseek(PtrCli, 0, 2);
				fwrite(&Cliente,sizeof(TpCliente),1,PtrCli);
	
				insercaoDireta(PtrCli); 
				
				ExibeTelaoResp();
				gotoxy(27,6);
				printf("### CADASTRO CLIENTE ###");
				gotoxy(27,11);
				printf("Usuario Cadastrado");
				Sleep(2000);
			}
			else
			{
				ExibeTelaoResp();
				gotoxy(27,6);
				printf("### CADASTRO CLIENTE ###");
				gotoxy(27,11);
				printf("CPF VALIDO POREM JA CADASTRADO!");
				Sleep(3000);
			}
		}
		else
		{
			ExibeTelaoResp();
			gotoxy(27,6);
			printf("### CADASTRO CLIENTE ###");
			gotoxy(27,11);
			printf("CPF Invalidado!!!");
			Sleep(3500);
		}
		ExibeTelaoResp();
		gotoxy(27,6);
		printf("### CADASTRO CLIENTE ###");
		gotoxy(4,8);
		printf("CPF(EX: XXX.XXX.XXX-XX): "); fflush(stdin);
		gets(AuxCPF);		
	}
	fclose(PtrCli);	
}


void CadastroCarroCodigo(){
    TpCarro Carro;
	int AuxC;
    int pos, y;
    ExibeTelaoResp();
    FILE *PtrCar = fopen("Carros.dat","rb+");
    gotoxy(27,6);
    printf("### CADASTRO DE CARROS CODIGO ###");
    gotoxy(4,8);
    printf("CODIGO: "); 
    scanf("%d",&AuxC);

    while(AuxC > 0)
	{
        y = 10;
        pos = buscaBinaria(PtrCar,AuxC);

        if(pos == -1){ 
            Carro.Cod = AuxC;
            gotoxy(4,9);
            printf("MODELO: "); 
            fflush(stdin);
            gets(Carro.Modelo);
            while(strlen(Carro.Modelo) == 0){
                gotoxy(4,y);
                y++;
                printf("Modelo Vazio");
                gotoxy(4,y);
                printf("Digite Novamente: ");
                y++;
                gets(Carro.Modelo);
            }

            gotoxy(4,y);
            printf("CATEGORIA: ");
            y++;
            fflush(stdin);
            gets(Carro.Categoria);
            while(strlen(Carro.Categoria) == 0){
                gotoxy(4,y);
                y++;
                printf("Categoria Vazia");
                gotoxy(4,y);
                printf("Digite Novamente: ");
                y++;
                gets(Carro.Categoria);
            }

            gotoxy(4,y);
            printf("VALOR DA DIARIA: ");
            scanf("%f",&Carro.Preco);
			Carro.Status = 1;

            fseek(PtrCar, 0, 2); 
            fwrite(&Carro,sizeof(TpCarro),1,PtrCar);

            selecaoDireta(PtrCar);

            ExibeTelaoResp();
            gotoxy(27,6);
            printf("### CADASTRO CARRO ###");
            gotoxy(27,11);
            printf("CARRO CADASTRADO!!!");
            Sleep(3000);

        } else { 
            ExibeTelaoResp();
            gotoxy(27,6);
            printf("### CADASTRO CARRO ###");
            gotoxy(27,11);
            printf("CODIGO JA CADASTRADO!");
            Sleep(3000);
        }

        ExibeTelaoResp();
        gotoxy(27,6);
        printf("### CADASTRO DE CARROS ###");
        gotoxy(4,8);
        printf("CODIGO: "); 
        scanf("%d",&AuxC);
    }
    fclose(PtrCar);
}


void CadastroCarroModelo(){
    TpCarro Carro;
	int AuxC;
    int pos, y;
    ExibeTelaoResp();
    FILE *PtrCar = fopen("Carros.dat","rb+");
    gotoxy(27,6);
    printf("### CADASTRO DE CARROS CODIGO ###");
    gotoxy(4,8);
    printf("CODIGO: "); 
    scanf("%d",&AuxC);

    while(AuxC > 0)
	{
        y = 10;
        pos = BuscaExaustivaCarroCodigo(PtrCar,AuxC);

        if(pos == -1){ 
            Carro.Cod = AuxC;
            gotoxy(4,9);
            printf("MODELO: "); 
            fflush(stdin);
            gets(Carro.Modelo);
            while(strlen(Carro.Modelo) == 0){
                gotoxy(4,y);
                y++;
                printf("Modelo Vazio");
                gotoxy(4,y);
                printf("Digite Novamente: ");
                y++;
                gets(Carro.Modelo);
            }

            gotoxy(4,y);
            printf("CATEGORIA: ");
            y++;
            fflush(stdin);
            gets(Carro.Categoria);
            while(strlen(Carro.Categoria) == 0){
                gotoxy(4,y);
                y++;
                printf("Categoria Vazia");
                gotoxy(4,y);
                printf("Digite Novamente: ");
                y++;
                gets(Carro.Categoria);
            }

            gotoxy(4,y);
            printf("VALOR DA DIARIA: ");
            scanf("%f",&Carro.Preco);
			Carro.Status = 1;
			fseek(PtrCar, 0, 2);
            fwrite(&Carro,sizeof(TpCarro),1,PtrCar);

            //bubbleSortPorModelo(PtrCar); 

            ExibeTelaoResp();
            gotoxy(27,6);
            printf("### CADASTRO CARRO ###");
            gotoxy(27,11);
            printf("CARRO CADASTRADO!!!");
            Sleep(3000);

        } else { 
            ExibeTelaoResp();
            gotoxy(27,6);
            printf("### CADASTRO CARRO ###");
            gotoxy(27,11);
            printf("CODIGO JA CADASTRADO!");
            Sleep(3000);
        }

        ExibeTelaoResp();
        gotoxy(27,6);
        printf("### CADASTRO DE CARROS ###");
        gotoxy(4,8);
        printf("CODIGO: "); 
        scanf("%d",&AuxC);
    }
    fclose(PtrCar);
}



void CadastroLocacao(){
	TpCarro Carro;
	TpCliente Cli;
	TpLocacao Loc;
    int AuxCod, posCliente, posCarro,posLocAtiva;
    char AuxCPF[15];
    
	FILE *PtrLoc = fopen("Locacao.dat","rb+");
	
    ExibeTelaoResp();
    gotoxy(27,6);
    printf("### CADASTRO DE LOCACOES ###");
    gotoxy(4,8);
    printf("DIGITE UM CPF PARA INICIAR: ");
    fflush(stdin);
    gets(AuxCPF);
    
    while(strcmp(AuxCPF,"\0") != 0){
    	FILE *PtrCli = fopen("Clientes.dat","rb");
        posCliente = BuscaCliente(PtrCli, AuxCPF); 
		fclose(PtrCli);
		
        if(posCliente != -1){ 
            gotoxy(4,9);
            printf("CPF ENCONTRADO");
            gotoxy(4,10);
            
            printf("DIGITE O CODIGO DO CARRO: ");
            scanf("%d", &AuxCod);
			FILE *PtrCar = fopen("Carros.dat","rb");
            posCarro = BuscaExaustivaCarroCodigo(PtrCar,AuxCod); 
            
            if(AuxCod > 0 && posCarro != -1) 
			{
				posLocAtiva = BuscaAtivaPorCPF_CodCar(PtrLoc,AuxCPF, AuxCod);
				
				if(posLocAtiva == -1) 
				{
					fseek(PtrCar,posCarro*sizeof(TpCarro),0);
					fread(&Carro,sizeof(TpCarro),1,PtrCar);
					strcpy(Loc.CPF,AuxCPF);
					Loc.Codigo=AuxCod;
	                printf("\nQuantidade de dias: ");
	                scanf("%d",&Loc.Dias);
	                Loc.ValorLocacao=Loc.Dias*Carro.Preco;
	                printf("\nValor Locacao: %.2f",Loc.ValorLocacao);
					Loc.Status=1;
					
					fseek(PtrLoc, 0, 2);
					fwrite(&Loc,sizeof(TpLocacao),1,PtrLoc);
					
					// Chamar sua funcao de ordenacao de Locacao por CPF aqui
					// Ex: insercaoDiretaLocacaoPorCPF(PtrLoc);
					
					ExibeTelaoResp();
					gotoxy(27,11);
					printf("LOCACAO CADASTRADA!");
					Sleep(2000);
				}
				else
				{
					ExibeTelaoResp();
	                gotoxy(27,6);
	                printf("### CADASTRO DE LOCACOES ###");
	                gotoxy(27,11);
	                printf("ERRO: Este carro ja esta em uma locacao ativa!");
	                Sleep(3000);
				}
            } else {
                ExibeTelaoResp();
                gotoxy(27,6);
                printf("### CADASTRO DE LOCACOES ###");
                gotoxy(27,11);
                printf("CODIGO DO CARRO NAO ENCONTRADO OU INDISPONIVEL!");
                Sleep(3000);
            }
			fclose(PtrCar);
        } else {
            ExibeTelaoResp();
            gotoxy(27,6);
            printf("### CADASTRO DE LOCACOES ###");
            gotoxy(27,11);
            printf("CPF NAO ENCONTRADO!");
            Sleep(2000);
        }
        ExibeTelaoResp();
        gotoxy(27,6);
        printf("### CADASTRO DE LOCACOES ###");
        gotoxy(4,8);
        printf("DIGITE UM CPF PARA INICIAR: ");
        fflush(stdin);
        gets(AuxCPF);
    }
    fclose(PtrLoc);
}




void ExibeLocacao()
{
	TpLocacao Loc;
	FILE *Ptr = fopen("Locacao.dat","rb");
	int x = 10; 
	
	ExibeTelaoResp();
	gotoxy(27,6);
	printf("### Exibir Locacao ###");
	
	if(Ptr == NULL)
	{
		gotoxy(27,11);
		printf("Arquivo nao encontrado!!!");
		Sleep(2000);
	}
	else 
	{ 
		gotoxy(4,8);
		printf("      CPF      ||     CODIGO     ||     DIAS     ||     VALOR     ");
		gotoxy(4,9);
		printf("-----------------||----------------||--------------||----------------");

		fread(&Loc,sizeof(TpLocacao),1,Ptr);		
		while(!feof(Ptr))
		{
			if(Loc.Status==1)
			{
				gotoxy(4,x);
				printf("%s || %d || %d || R$ %.2f \n", Loc.CPF, Loc.Codigo, Loc.Dias, Loc.ValorLocacao);
			
				x++;
			}
			fread(&Loc,sizeof(TpLocacao),1,Ptr);
		}
		
		fclose(Ptr);
	}
	
	getch();
}

void ListaClientes3Locacoes(){
	TpCliente Cli;
	TpLocacao Loc, LocAux;
    int i, j, k, jaListado, cont = 0, x=16, QtdReg, qtdListados = 0, Registro = 0, pos;
    char CPFListados[TF][15];
	ExibeTelaoResp();
	gotoxy(90,14);
    printf("--- CLIENTES COM 3 OU MAIS LOCACOES ---");
    FILE *PtrLoc = fopen("Locacao.dat","rb");
    FILE *PtrCli = fopen("Clientes.dat","rb");
    fseek(PtrLoc,0,2);
    QtdReg = ftell(PtrLoc)/sizeof(TpLocacao);
    rewind(PtrLoc);
    for(i = 0; i<QtdReg - 1; i++)
	{
   		fseek(PtrLoc,i*sizeof(TpLocacao),0);
   		fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
   		
   		jaListado = 0;
        for (k = 0; k < qtdListados; k++)
            if (strcmp(CPFListados[k], Loc.CPF) == 0)
                jaListado = 1;
   		
   		if (jaListado == 0) 
		{
            cont = 0;
            for (j = 0; j < QtdReg; j++) 
			{
                fseek(PtrLoc, j * sizeof(TpLocacao), SEEK_SET);
                fread(&LocAux, sizeof(TpLocacao), 1, PtrLoc);
                if (strcmp(Loc.CPF, LocAux.CPF) == 0)
                    cont++;
            }
			if (cont >= 3)
			{
				pos = BuscaCliente(PtrCli,Loc.CPF);
				if(pos != -1)
				{
					fseek(PtrCli,pos,0);
					fread(&Cli,sizeof(TpCliente),1,PtrCli);
					gotoxy(67,x);
		            printf("Cliente: %s", Cli.Nome);
		            x++;
		            gotoxy(67,x);
				    printf("CPF: %s", Cli.CPF);
		            x++;
		            gotoxy(67,x);
		            printf("Fone: %s", Cli.fone);
		            x++;
		            gotoxy(67,x);
		            printf("Quantidade de locacoes: %d", cont);
		            x = x+2;
	                strcpy(CPFListados[qtdListados], Loc.CPF);
	                qtdListados++;
	                Registro++;
	                Sleep(5000);
				}         
		    }   
   		}	
   	}
   	if(Registro == 0)
		{
			ExibeTelaoResp();
			gotoxy(90,14);
			printf("--- CLIENTES COM 3 OU MAIS LOCACOES ---");
			gotoxy(90,20);
   			printf("Nao existe Clientes com 3 locaçoes!!!");
   			Sleep(3000);
		}
   		
   fclose(PtrLoc);
   fclose(PtrCli);
}



void ListagemDeCarroPorCategoria(){
	TpCarro Carro;
	char AuxCat[TF];
	int pos,x=18;	
	FILE *PtrCar = fopen("Carros.dat","rb");
	ExibeTelaoResp();
	gotoxy(90,14);
	printf("### LISTAGEM POR CATEGORIA ###");
	gotoxy(67,16);
	printf("DIGITE A CATEGORIA DE UM CARRO: ");
	gets(AuxCat);
	pos = buscaCarroCategoria(PtrCar,AuxCat);
	if(pos == -1)
	{
		ExibeTelaoResp();
		gotoxy(90,14);
		printf("### LISTAGEM POR CATEGORIA ###");
		gotoxy(90,20);
		printf("CATEGORIA NAO ENCONTRADA");
		Sleep(3000);
	}
	else{
		rewind(PtrCar);
		while(fread(&Carro,sizeof(TpCarro),1,PtrCar)==1){
			if(strcmp(Carro.Categoria,AuxCat)==0)
			{
				gotoxy(70,17);
				printf("Carro ||    Modelo    ||    Categoria    ||   Preco   ||   Status");
				gotoxy(70,x);
				printf(" %d  || ",Carro.Cod);
				gotoxy(82,x);
				printf(" %s  ",Carro.Modelo); 
				gotoxy(92,x);
				printf("||");
				gotoxy(99,x);
				printf(" %s  ",Carro.Categoria); 
				gotoxy(111,x);
				printf("||");
				gotoxy(115,x);
				printf(" %.2f  ",Carro.Preco); 
				gotoxy(124,x);
				printf("||");
				gotoxy(131,x);
				printf("%d",Carro.Status);
				x++;	
			}
	
		}
		
	}
	fclose(PtrCar);
	getch();
}


void LocacaoMaiorLimite(){
	int i,pos, x=18,Locacao=0;
	float Limite;
	TpLocacao Loc;
	FILE *PtrLoc = fopen("Locacao.dat","rb");
	ExibeTelaoResp();
	gotoxy(90,14);
	printf("### LOCACAO MAIOR QUE O LIMITE INFORMADO ###");
	gotoxy(67,16);
	printf("INFORME UM LIMITE(0 PARA SAIR): ");
	scanf("%f",&Limite);
	while(Limite>0){
		rewind(PtrLoc);
		while(fread(&Loc,sizeof(TpLocacao),1,PtrLoc)==1)
		{
			if(Loc.ValorLocacao > Limite)
			{
				gotoxy(68,17);
				printf("       CPF     ||     CODIGO     ||     DIAS     ||     VALOR  ||   STATUS");
				gotoxy(68,x);
				printf("%s ||     %d        ||      %d       ||    %.2f || %d ",Loc.CPF,Loc.Codigo,Loc.Dias,Loc.ValorLocacao,Loc.Status);
				x++;
				Locacao++;
			}
		}
		if(Locacao == 0)
		{
			ExibeTelaoResp();
			gotoxy(90,14);
			printf("### LOCACAO MAIOR QUE O LIMITE INFORMADO ###");
			gotoxy(90,20);
			printf("Nao existem Locacoes com este Limite");
			Sleep(3000);
		}
		getch();
		ExibeTelaoResp();
		gotoxy(90,14);
		printf("### LOCACAO MAIOR QUE O LIMITE INFORMADO ###");
		gotoxy(67,16);
		printf("INFORME UM LIMITE(0 PARA SAIR): ");
		scanf("%f",&Limite);
	}
	fclose(PtrLoc);

}
void RelatorioCompleto() {
	TpLocacao Loc;
	TpCarro Car;
	TpCliente Cli;
    int i, j, posCar, codCarro, x=8,QtdReg,QtdReg2;
    FILE *PtrLoc = fopen("Locacao.dat","rb");
    FILE *PtrCar = fopen("Carros.dat","rb");
    FILE *PtrCli = fopen("Clientes.dat","rb");
    ExibeTelaoRela();
    gotoxy(110,6);
    printf("#### RELATORIO COMPLETO ####");
    rewind(PtrCli);
    fseek(PtrCli,0,2);
    QtdReg = ftell(PtrCli)/sizeof(TpCliente);
    fseek(PtrLoc,0,2);
    QtdReg2 = ftell(PtrLoc)/sizeof(TpLocacao);
    for (i = 0; i < QtdReg; i++) {
    	fseek(PtrCli,i*sizeof(TpCliente),0);
    	fread(&Cli,sizeof(TpCliente),1,PtrCli);
    	gotoxy(63,x);
        printf("-----------------------------------------------------------------------------------------------------------------");
        x++;
        gotoxy(63,x);
        printf("CPF: %s | Nome: %s | Fone: %s\n",Cli.CPF, Cli.Nome, Cli.fone);
        x++;
        rewind(PtrLoc);
        for (j = 0; j < QtdReg2; j++)
		{
			fseek(PtrLoc,j*sizeof(TpLocacao),0);
    		fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
            if (strcmp(Cli.CPF, Loc.CPF) == 0) 
			{ 
                codCarro = Loc.Codigo;
                posCar = buscaBinaria(PtrCar,codCarro);
                if (posCar != -1) {
                	fseek(PtrCar,posCar,0);
                	fread(&Car,sizeof(TpCarro),1,PtrCar);
                	gotoxy(63,x);
                    printf("  Carro: %d - %s - %s - R$ %.2f\n",Car.Cod,Car.Modelo,Car.Categoria,Car.Preco);
                    x++;
                    gotoxy(63,x);
                    printf("  Dias: %d | Valor Locacao: R$ %.2f\n\n", Loc.Dias, Loc.ValorLocacao);
                    x=x+2;
                }
            }
        }
    }
    getch();
    fclose(PtrCar);
    fclose(PtrLoc);
    fclose(PtrCli);
}
void ExclusaoClienteLogica(){
	TpCliente Cli;
	TpLocacao Loc;
	FILE *PtrCli = fopen("Clientes.dat","rb+");

	clrscr();
	int pos;
	char CPF[15];
	
	ExibeTelaoResp();
	gotoxy(27,6);
	printf("### EXCLUI CLIENTE ###");
	gotoxy(4,8);
	printf("DIGITE UM CPF PARA BUSCAR E EXCLUIR: ");
	gets(CPF);

	while(stricmp(CPF,"\0")!=0){
		rewind(PtrCli);
		pos = BuscaCliente(PtrCli,CPF);
		
		if(pos == -1){
			gotoxy(4,9);
			printf("CPF INCEXISTENTE");
			Sleep(3000);
		}else{
			printf("\nCliente Encontrado!");
			fseek(PtrCli,pos,0);
			fread(&Cli,sizeof(TpCliente),1,PtrCli);
			
			Cli.Status=0;
			
			fseek(PtrCli,pos,0);
			fwrite(&Cli,sizeof(TpCliente),1,PtrCli);
			fflush(PtrCli);
			
			FILE *Ptr = fopen("Locacao.dat","rb+");
			
			if (Ptr == NULL) {
				gotoxy(4, 10);
				printf("ERRO: Nao foi possivel abrir Locacao.dat");
				Sleep(3000);
			} else {
				pos = BuscaExaustivaSentCPFLoc(Ptr, CPF);
				while(pos != -1)
				{
					fseek(Ptr, pos, 0); 
					fread(&Loc, sizeof(TpLocacao), 1, Ptr); 
					Loc.Status = 0; 
					fseek(Ptr, pos, 0); 
					fwrite(&Loc, sizeof(TpLocacao), 1, Ptr); 
					pos = BuscaExaustivaSentCPFLoc(Ptr, CPF); 
				}
				fclose(Ptr);
			}

			ExibeTelaoResp();
			gotoxy(27,11);
			printf("CLIENTE EXCLUIDO");
			gotoxy(27,12);
			printf("LOCACOES EXCLUIDAS");
			Sleep(3000);
		}
		
		clrscr();
		ExibeTelaoResp();
		gotoxy(27,6);
		printf("### EXCLUI CLIENTE ###");
		gotoxy(4,8);
		printf("DIGITE UM CPF PARA BUSCAR E EXCLUIR: ");
		gets(CPF);
	}
	
	fclose(PtrCli);
}

void ExclusaoClienteFisica(){
	TpCliente Cli;
	TpLocacao Loc;
	char CPF[15];
	int pos;
	printf("\nExclusao Fisica de Cliente\n");
	printf("\nDigite um CPF: ");
	gets(CPF);
	while(strcmp(CPF,"\0")!=0)
	{
		FILE *PtrCli = fopen("Clientes.dat","rb");
		FILE *PtrLoc = fopen ("Locacao.dat","rb");
		pos = BuscaCliente(PtrCli,CPF);
		if(pos == -1)
		{
			printf("\nCPF Nao encontrado");
			getch();
		}else{
			printf("\nCPF encontrado");
			fseek(PtrCli,pos,0);
			fread(&Cli,sizeof(TpCliente),1,PtrCli);
			printf(" CPF   ||                Nome                  ||     FONE");
			printf(" %s ", Cli.CPF);
			printf("||");
			printf(" %s ", Cli.Nome);
			printf("||");
			printf(" %s ", Cli.fone);
			printf("\nDeseja Excluir(S/N): ");
			if(toupper(getche())=='S'){
				FILE *Ptr = fopen("Temp.dat","wb");
				rewind(PtrCli);
				fread(&Cli,sizeof(TpCliente),1,PtrCli);
				while(!feof(PtrCli)){
					if(strcmp(CPF,Cli.CPF)!=0 && Cli.Status==1)
						fwrite(&Cli,sizeof(TpCliente),1,Ptr);
					fread(&Cli,sizeof(TpCliente),1,PtrCli);
				}
				fclose(PtrCli);
				fclose(Ptr);
				remove("Clientes.dat");
				rename("Temp.dat","Clientes.dat");
				printf("\nCliente Excluido do Banco de Dados");
				FILE *PtrT = fopen("Temp.dat","wb");	
				rewind(PtrLoc);
				fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				while(!feof(PtrLoc))
				{
					if(strcmp(CPF,Loc.CPF)!=0 && Loc.Status==1)
						fwrite(&Loc,sizeof(TpLocacao),1,PtrT);
					fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				}
				fclose(PtrLoc);
				fclose(PtrT);
				remove("Locacao.dat");
				rename("Temp.dat","Locacao.dat");
				printf("\nLocacao excluida do banco de dados");
			}
		}
		getch();
		clrscr();
		printf("\nDigite um CPF: ");
		gets(CPF);
	}
}

void ExclusaoCarroLogica(){
	TpCarro Car;
	TpLocacao Loc;
	FILE *PtrCar = fopen("Carro.dat","rb+");
	clrscr();
	int pos,Cod;
	
	ExibeTelaoResp();
	gotoxy(27,6);
	printf("### EXCLUI CODIGO ###");
	gotoxy(4,8);
	printf("DIGITE UM CODIGO PARA BUSCAR E EXCLUIR: ");
	scanf("%d",&Cod);

	while(Cod!=0){
		rewind(PtrCar);
		pos = BuscaExaustivaCarroCodigo(PtrCar,Cod);
		
		if(pos == -1){
			gotoxy(4,9);
			printf("CODIGO INEXISTENTE");
			Sleep(3000);
		}else{
			printf("\nCarro Encontrado!");
			fseek(PtrCar,pos,0);
			fread(&Car,sizeof(TpCarro),1,PtrCar);
			
			Car.Status=0;
			
			fseek(PtrCar,pos,0);
			fwrite(&Car,sizeof(TpCarro),1,PtrCar);
			
			FILE *Ptr = fopen("Locacao.dat","rb+");
			
			if (Ptr == NULL) {
				gotoxy(4, 10);
				printf("ERRO: Nao foi possivel abrir Locacao.dat");
				Sleep(3000);
			} else {
				pos = BuscaLocacaoInt(Ptr,Cod);
				while(pos!=-1)
				{
					fseek(Ptr,pos,0);
					fread(&Loc,sizeof(TpLocacao),1,Ptr);
					Loc.Status=0;
					fseek(Ptr,pos,0);
					fwrite(&Loc,sizeof(TpLocacao),1,Ptr);
					pos = BuscaLocacaoInt(Ptr,Cod);
				}
				fclose(Ptr);
			}

			ExibeTelaoResp();
			gotoxy(27,11);
			printf("CARRO EXCLUIDO");
			gotoxy(27,12);
			printf("LOCACOES EXCLUIDAS");
			Sleep(3000);
		}
		
		clrscr();
		ExibeTelaoResp();
		gotoxy(27,6);
		printf("### EXCLUI CARRO ###");
		gotoxy(4,8);
		printf("DIGITE UM CODIGO PARA BUSCAR E EXCLUIR: ");
		scanf("%d",&Cod);
	}
	
	fclose(PtrCar);
}

void ExclusaoCarroFisica(){
	TpCarro Car;
	TpLocacao Loc;
	FILE *PtrCar = fopen("Carros.dat","rb");
	FILE *PtrLoc = fopen ("Locacao.dat","rb");
	int pos,Cod;
	printf("\nExclusao Fisica de Carros\n");
	printf("\nDigite um Codigo: ");
	scanf("%d",&Cod);
	while(Cod!=0)
	{
		FILE *PtrCar = fopen("Carros.dat","rb");
		FILE *PtrLoc = fopen ("Locacao.dat","rb");
		pos = BuscaExaustivaCarroCodigo(PtrCar,Cod);
		if(pos == -1)
		{
			printf("\nCodigo Nao encontrado");
			getch();
		}else{
			printf("\nCodigo encontrado");
			fseek(PtrCar,pos,0);
			fread(&Car,sizeof(TpCarro),1,PtrCar);
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("| COD | MODELO               | CATEGORIA        | PRECO (R$)    |\n");
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("| \t%d\t | \t%s\t | \t%s\t | \tR$ %.2f\t \t|\n", 
				   Car.Cod, 
				   Car.Modelo, 
				   Car.Categoria, 
				   Car.Preco);
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("\nDeseja Excluir(S/N): ");
			if(toupper(getche())=='S'){
				FILE *Ptr = fopen("Temp.dat","wb");
				rewind(PtrCar);
				fread(&Car,sizeof(TpCarro),1,PtrCar);
				while(!feof(PtrCar)){
					if(Cod!=Car.Cod && Car.Status==1)
						fwrite(&Car,sizeof(TpCarro),1,Ptr);
					fread(&Car,sizeof(TpCarro),1,PtrCar);
				}
				fclose(PtrCar);
				fclose(Ptr);
				remove("Carros.dat");
				rename("Temp.dat","Carros.dat");
				printf("\nCarros Excluido do Banco de Dados");
				FILE *PtrT = fopen("Temp.dat","wb");	
				rewind(PtrLoc);
				fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				while(!feof(PtrLoc))
				{
					if(Cod!=Loc.Codigo && Loc.Status==1)
						fwrite(&Loc,sizeof(TpLocacao),1,PtrT);
					fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				}
				fclose(PtrLoc);
				fclose(PtrT);
				remove("Locacao.dat");
				rename("Temp.dat","Locacao.dat");
				printf("\nLocacao excluida do banco de dados");
			}
		}
		getch();
		clrscr();
		printf("\nDigite um Codigo: ");
		scanf("%d",&Cod);
	}
}

void ExclusaoLocacaoLogica(){
	TpLocacao Loc;
	FILE *PtrLoc = fopen("Locacao.dat","rb+");
	clrscr();
	int pos,Cod;
	char CPF[15];
	
	ExibeTelaoResp();
	gotoxy(27,6);
	printf("### EXCLUI LOCACAO ###");
	gotoxy(4,8);
	printf("DIGITE UM CPF PARA BUSCAR E EXCLUIR: ");
	gets(CPF);

	while(strcmp(CPF,"\0")!=0){
		pos = BuscaExaustivaSentCPFLoc(PtrLoc,CPF);
		
		if(pos == -1){
			gotoxy(4,9);
			printf("CPF INEXISTENTE");
			Sleep(3000);
		}else{
			printf("\nCPF Encontrado!");
			while(pos!=-1)
			{
				fseek(PtrLoc,pos,0);
				fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				Loc.Status=0;
			
				fseek(PtrLoc,pos,0);
				fwrite(&Loc,sizeof(TpLocacao),1,PtrLoc);
				pos = BuscaExaustivaSentCPFLoc(PtrLoc,CPF);
			}

			ExibeTelaoResp();
			gotoxy(27,11);
			printf("LOCACAO EXCLUIDO");
			Sleep(3000);
		}
		
		clrscr();
		ExibeTelaoResp();
		gotoxy(27,6);
		printf("### EXCLUI LOCACAO ###");
		gotoxy(4,8);
		printf("DIGITE UM CPF PARA BUSCAR E EXCLUIR: ");
		gets(CPF);
	}
	
	fclose(PtrLoc);
}

void ExclusaoLocacaoFisica(){
	TpLocacao Loc;
	FILE *PtrLoc = fopen ("Locacao.dat","rb");
	int pos;
	char CPF[15];
	printf("\nExclusao Fisica de Locacao\n");
	printf("\nDigite um CPF: ");
	gets(CPF);
	while(strcmp(CPF,"\0")!=0)
	{
		pos = BuscaExaustivaSentCPFLoc(PtrLoc,CPF);
		if(pos == -1)
		{
			printf("\nCPF Nao encontrado");
			getch();
		}else{
			printf("\nCPF encontrado");
			fseek(PtrLoc,pos,0);
			fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("| CPF | COD               | QUANT DIAS        | VALOR LOC (R$)    |\n");
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("| \t%s\t | \t%d\t | \t%d\t | \tR$ %.2f\t \t|\n", Loc.CPF,Loc.Codigo,Loc.Dias,Loc.ValorLocacao);
			printf("+-----+----------------------+------------------+---------------+\n");
			printf("\nDeseja Excluir(S/N): ");
			if(toupper(getche())=='S'){
				FILE *Ptr = fopen("Temp.dat","wb");
				rewind(PtrLoc);
				fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				while(!feof(PtrLoc)){
					if(pos!=-1)
						fwrite(&Loc,sizeof(TpLocacao),1,Ptr);
					fread(&Loc,sizeof(TpLocacao),1,PtrLoc);
				}
				fclose(PtrLoc);
				fclose(Ptr);
				remove("Locacao.dat");
				rename("Temp.dat","Locacao.dat");
				printf("\nLocacao Excluida do Banco de Dados");
			}
		}
		getch();
		clrscr();
		printf("\nDigite um CPF: ");
		gets(CPF);
	}
}

void AlterarCliente()
{
	TpCliente Cli;
	TpLocacao Loc;
	char AuxCPF[15],CPFAntigo[15],AuxCPF2[15];
	int pos, aux, i, Valida, y=22, tamanho;
	ExibeTelaoResp();
	FILE *PtrCli = fopen("Clientes.dat","rb+");
	gotoxy(90,14);
	printf("### Altera Cliente ###");
	gotoxy(67,16);
	printf("Digite o CPF para Alterar os Dados: ");
	fflush(stdin);
	gets(AuxCPF);
	while(strcmp(AuxCPF,"\0")!=0)
	{	
		pos = BuscaCliente(PtrCli,AuxCPF);
		if(pos == -1)
		{
			ExibeTelaoResp();
			gotoxy(90,14);
			printf("### Altera Cliente ###");
			gotoxy(90,20);
			printf("Usuario Nao Cadastrado!");
			Sleep(2000);
		}
		else
			{
				gotoxy(67,17);
				fseek(PtrCli,pos,0);
				fread(&Cli,sizeof(TpCliente),1,PtrCli);
				printf("Dados encontrados!");
				gotoxy(67,18);
				printf("%s  %s  %s",Cli.CPF,Cli.Nome,Cli.fone);
				gotoxy(67,19);
				printf("Confirma Alteração? (S/N)");
				fflush(stdin);
				if(toupper(getch())== 'S')
				{
					gotoxy(67,20);
					printf("Coloque os novos Dados!!!");
					gotoxy(67,21);
					printf("CPF: ");
					y++;
					fflush(stdin);
					gets(AuxCPF2);
					Valida = ValidaCPF(AuxCPF2);
					if(Valida == 1)
					{
						strcpy(CPFAntigo,Cli.CPF);
						strcpy(Cli.CPF,AuxCPF2);
						gotoxy(67,y);
						printf("Deseja Alterar o Nome? (S/N): ");
						fflush(stdin);
						y++;
						if(toupper(getch())== 'S')
						{
							gotoxy(67,y);
							printf("NOME: "); 
							y++;
							fflush(stdin);
							gets(Cli.Nome);
							while (strlen(Cli.Nome) == 0) 
							{
								gotoxy(67,y);
								y++;
								printf("Nome Vazio");
								gotoxy(67,y);
		    					printf("Digite Novamente: ");
		    					y++;
		    					fflush(stdin);
		    					gets(Cli.Nome);
							}
						}
						gotoxy(66,y);
						printf("Deseja Alterar o Telefone? (S/N)");
						y++;
						if(toupper(getch())== 'S')
						{
							gotoxy(67,y);
							printf("TELEFONE (XX) XXXXX-XXXX: "); 
							y++;
							fflush(stdin);
							gets(Cli.fone);
							while (Cli.fone[0] != '(' || Cli.fone[3] != ')' || Cli.fone[4] != ' ' || Cli.fone[10] != '-') 
							{
							    gotoxy(67,y);
							    printf("Telefone formatado errado!");
							    y++;
							    gotoxy(67,y);
							    printf("DIGITE NOVAMENTE: ");
							    fflush(stdin);
							    gets(Cli.fone); 
							}
						}
						fseek(PtrCli,pos,0);
						fwrite(&Cli,sizeof(TpCliente),1,PtrCli);
						FILE *PtrLoc = fopen ("Locacao.dat","rb+");
						rewind(PtrLoc); 
						while (fread(&Loc, sizeof(TpLocacao), 1, PtrLoc) == 1)
						{
						    if (strcmp(Loc.CPF, CPFAntigo) == 0)
						    {
						    	tamanho = ftell(PtrLoc) - sizeof(TpLocacao);
								strcpy(Loc.CPF, AuxCPF2);
						        fseek(PtrLoc, tamanho, 0);
						        fwrite(&Loc, sizeof(TpLocacao), 1, PtrLoc);
						       	fflush(PtrLoc);
						    }
						}
						fclose(PtrLoc);
						ExibeTelaoResp();
						gotoxy(90,14);
						printf("### Altera Cliente ###");
						gotoxy(90,20);
						printf("Dados Alterados");
						Sleep(3000);	
					}
					else
						{
							ExibeTelaoResp();
							gotoxy(90,14);
							printf("### Altera Cliente ###");
							gotoxy(90,20);
							printf("CPF NOVO INVALIDO");
							Sleep(3000);
						}
				}
					
			}
		ExibeTelaoResp();
		gotoxy(90,14);
		printf("### Altera Cliente ###");
		gotoxy(67,16);
		printf("Digite o CPF para Alterar os Dados: ");
		fflush(stdin);
		gets(AuxCPF);
	}
	fclose(PtrCli);
	
		
}

void AlterarCarro()
{
    clrscr();
    TpCarro Car;
    TpLocacao Loc;
    FILE *PtrCar = fopen("Carros.dat","rb+");
    int novoCod,AuxCod, pos, codAntigo;
    char novoModelo[TF], novaCategoria[TF];
    float novoPreco;
    ExibeTelaoResp();
	gotoxy(90,14);
	printf("### Altera Carro ###");
	gotoxy(67,16);
    printf("Digite o Codigo para alterar Dados (0 = sair): ");
    scanf("%d", &AuxCod);
    while (AuxCod > 0)
    {
        pos = buscaBinaria(PtrCar,AuxCod);
        if (pos == -1)
        {	
        	ExibeTelaoResp();
			gotoxy(90,14);
			printf("### Altera Carro ###");
        	gotoxy(90,20);
			printf("Dados Nao Encontrado!!!");			
			Sleep(3000);
        }
        else
        	{
	        	gotoxy(67,17);
	            printf("Dados Encontrados!!!");
	            gotoxy(67,18);
	            fseek(PtrCar,pos,0);
	            fread(&Car,sizeof(TpCarro),1,PtrCar);
	            printf("%d   %s   %s   %.2f", Car.Cod, Car.Modelo, Car.Categoria, Car.Preco);
	            gotoxy(67,19);
	            printf("Confirma Alteração? (S/N)");
	            if(toupper(getch())== 'S')
	            {
	            	gotoxy(67,20);
	            	printf("Insira os novos dados ");
	            	gotoxy(67,21);
	            	printf("Novo Codigo: ");
	                scanf("%d", &novoCod);
	                
	                if(novoCod > 0 && buscaBinaria(PtrCar,novoCod)== -1)
	                {	
	                	codAntigo = Car.Cod;
	                	Car.Cod = novoCod;
	                	gotoxy(67,22);
	                	printf("Novo Modelo: ");
	                	fflush(stdin);
	                	gets(novoModelo);
	                	if(strcmp(novoModelo,"\0")!=0)
	                	{
	                		strcpy(Car.Modelo,novoModelo);
	                		gotoxy(67,23);
	                		printf("Nova Categoria: ");
	                		fflush(stdin);
	                		gets(novaCategoria);
	                		if(strcmp(novaCategoria,"\0")!=0)
	                		{
	                			strcpy(Car.Categoria,novaCategoria);
	                			gotoxy(67,24);
	                			printf("Novo Preco: ");
	                			scanf("%f",&novoPreco);
	                			if(novoPreco > 0)
	                			{
	                				Car.Preco = novoPreco;
	                				fseek(PtrCar,pos,0);
	                				fwrite(&Car,sizeof(TpCarro),1,PtrCar);
	                				FILE *PtrLoc = fopen("Locacao.dat","rb+");
	                				rewind(PtrLoc);
	                				while(fread(&Loc,sizeof(TpLocacao),1,PtrLoc) == 1)
									{
										if (Loc.Codigo == codAntigo)
										{
										    Loc.Codigo = novoCod;  // atualizar código de locação
										    Loc.ValorLocacao = Car.Preco * Loc.Dias;  // usa o novo preço
										    fseek(PtrLoc, -sizeof(TpLocacao), SEEK_CUR);
										    fwrite(&Loc, sizeof(TpLocacao), 1, PtrLoc);
										    fflush(PtrLoc);
										}

									}
	                				fclose(PtrLoc);
	                				ExibeTelaoResp();
									gotoxy(90,14);
									printf("### Altera Carro ###");
									gotoxy(90,20);
	                				printf("Alteração Concluida!!!");
	                				Sleep(3000);
								}
							}
						}
					}
					else
					{
						ExibeTelaoResp();
						gotoxy(90,14);
						printf("### Altera Carro ###");
						gotoxy(90,20);
	                	printf("Codigo já Cadastrado!!!");
	                	Sleep(3000);
					}
						
				}
			}
	
		ExibeTelaoResp();
		gotoxy(90,14);
		printf("### Altera Carro ###");
		gotoxy(67,16);
        printf("Digite o Codigo para alterar Dados (0 = sair): ");
        scanf("%d", &AuxCod);
	}
	fclose(PtrCar);
}

void AlterarLocacao(void)
{
    TpLocacao Loc;
    TpCarro Car;
    TpCliente Cli;
    char AuxCPF[15], novoCPF[15];
    int pos,pos1,posCar, novosDias, novoCodigo, codEscolhido;
    int x=17; 

    ExibeTelaoResp();
    gotoxy(90,14);
    printf("### ALTERA LOCACAO ###");
    gotoxy(67,16);
    FILE *PtrLoc = fopen("Locacao.dat","rb+");
    FILE *PtrCar = fopen("Carros.dat","rb");
    printf("Digite o CPF da locacao que deseja alterar (ENTER = sair):");
    fflush(stdin);
    gets(AuxCPF);
    while (strlen(AuxCPF) > 0)
    {
        pos1 = buscaBinariaLoc(PtrLoc,AuxCPF); 
        if (pos1 == -1)
        {
        	ExibeTelaoResp();
		    gotoxy(90,14);
		    printf("### ALTERA LOCACAO ###");
            gotoxy(90,20);
            printf("!!! Locacao nao encontrada para este CPF !!!");
            Sleep(2000);
        }
        else
        {
            rewind(PtrLoc);
            gotoxy(67,x);
            printf("Locacoes encontradas:");
            x++;
            while(fread(&Loc,sizeof(TpLocacao),1,PtrLoc) == 1)
            {
            	if (strcmp(Loc.CPF, AuxCPF) == 0)
            	{
            		gotoxy(67,x);
            		printf("Codigo: %d | CPF: %s | Dias: %d | Valor: %.2f", Loc.Codigo, Loc.CPF, Loc.Dias, Loc.ValorLocacao);
            		x++;
				}
			}

            gotoxy(67,x);
            printf("Digite o CODIGO da locacao que deseja alterar: ");
            scanf("%d", &codEscolhido);
            x++;

            pos = BuscaLocacaoInt(PtrLoc,codEscolhido);
            if (pos == -1 )
			 {
                gotoxy(4,x);
                printf("!!! Codigo nao pertence a este CPF !!!");
                Sleep(2000);
            }
            else
            {	
            	gotoxy(67,x);
            	printf("Deseja ALterar o CPF? (S/N)");
            	x++;
            	if(toupper(getch())== 'S')
            	{
            		fflush(stdin);
            		gotoxy(67,x);
            		printf("Novo CPF: ");
            		x++;
                    fflush(stdin);
                    gets(novoCPF);
                    if(ValidaCPF(novoCPF)==1)
                    {
                    	FILE *PtrCli = fopen ("Clientes.dat","rb");
	                    if(BuscaCliente(PtrCli,novoCPF) != -1)
	                    	strcpy(Loc.CPF,novoCPF);
						else
							{
								gotoxy(66,x);
								printf("CPF nao Cadastrado!!!");
								x++;
							}
						fclose(PtrCli);	
					}
				}
				gotoxy(67,x);
				printf("Deseja ALterar o Codigo? (S/N)");
				x++;
            	if(toupper(getch())== 'S')
            	{
            		gotoxy(67,x);
            		printf("Novo Codigo do carro: ");
            		x++;
                    scanf("%d", &novoCodigo);
                    posCar = buscaBinaria(PtrCar,novoCodigo);
   					if(pos != -1)
   					{
   						if(BuscaLocacaoCod(PtrLoc,novoCPF,novoCodigo) == -1)
   							Loc.Codigo = novoCodigo;			
   					}
   					else
   						{
   							ExibeTelaoResp();
   							gotoxy(90,14);
						    printf("### ALTERA LOCACAO ###");
   							gotoxy(90,20);
   							printf("Codigo nao Registrado!");
						}
   						
            	}
            	gotoxy(67,x);
               	printf("Deseja ALterar a quantidade de dias? (S/N)");
               	x++;
            	if(toupper(getch())== 'S')
            	{
            		gotoxy(67,x);
            		printf("Digite o novo total de dias ");
            		x++;
            		scanf("%d",&novosDias);
            		while(novosDias <= 0)
            		{
            			gotoxy(66,x);
            			printf("Nao pode ser Vazio| Digite Novamente: ");
            			scanf("%d",&novosDias);
            			x++;
					}
                
            	}
            	if(BuscaLocacaoCod(PtrLoc,novoCPF,novoCodigo) == -1)
            	{
            		Loc.Dias = novosDias;
	            	posCar  = buscaBinaria(PtrCar,Loc.Codigo);
	               	fseek(PtrCar,posCar,0);
	               	fread(&Car,sizeof(TpCarro),1,PtrCar);
	               	Loc.ValorLocacao = Car.Preco * Loc.Dias;
	           		fseek(PtrLoc,pos1,0);
					fwrite(&Loc,sizeof(TpLocacao),1,PtrLoc);	
					ExibeTelaoResp();
					gotoxy(90,14);
	        		printf("### ALTERA LOCACAO ###");
	        		gotoxy(90,20);
					printf("Alteração Concluida!!!");
					x++;
            	}
            	else
            		{
            			gotoxy(90,14);
				        printf("### ALTERA LOCACAO ###");
				        gotoxy(90,20);
            			printf("Já a dados Cadastrados com este CPF e Codigo");
            			Sleep(3000);
            		}           		           	
            }
        }

        ExibeTelaoResp();
        gotoxy(90,14);
        printf("### ALTERA LOCACAO ###");
        gotoxy(67,16);
        printf("Digite o CPF da locacao que deseja alterar (ENTER = sair):");
        fflush(stdin);
        gets(AuxCPF);
    }
    fclose(PtrLoc);
    fclose(PtrCar);
   
}




void Executar(){
	TpCliente Cliente;
	TpCarro Carro;
	TpLocacao Locacao;
	CriarArquivos();
	char opcao,AuxCPF[15];
	do{
		opcao = Menu();
			switch(opcao){
			//CADASTRO
			case 'A':
				do{
					opcao = MenuCadastro();
					switch(opcao){
						case 'A':
							CadastroCliente();
							break;
						case 'B':
							do{
								opcao = MenuCarro();
								switch(opcao){
									case'A':
										CadastroCarroCodigo();
									break;
									
									case'B':
										CadastroCarroModelo();
									break;
								} 
							}while(opcao!='C');
							break;
						case 'C':
							CadastroLocacao();
							break;
						case 'D'://CadastroAuto(Cliente,Carro,Locacao,TC,TP,TL);
							clrscr();
							break;	
					}
				}while(opcao!='E');
				break;
			//EXCLUSAO
			case 'B':
				do{
					opcao = MenuExcluir();
					switch(opcao){
						case 'A':
							opcao = MenuExcluirCliente();
							switch(opcao){
								case 'A':
									ExclusaoClienteLogica();
									break;
								case 'B':
									ExclusaoClienteFisica();
									break;
							}
							break;
						case 'B':
							//ExclusaoCarro(Carro,TP,Locacao,TL);
							break;
						case 'C':
							//ExclusaoLocacao(Locacao,TL);
							break;	
					}
				}while(opcao!='D');
				break;
			//ALTERA?AO
			case 'C':
					do{
						opcao = MenuAlterar();
						switch(opcao){
							case 'A':
							//	AlterarCliente(Cliente,Locacao,TC,TL);
								break;
							case 'B':
							//	AlterarCarro(Carro,Locacao,TP,TL);
								break;
							case 'C':
								//AlterarLocacao(Locacao,Carro,Cliente,TL,TP,TC);
								break;	
						}
					}while(opcao!='D');
					break;
			case 'D':
					do{
						opcao = MenuExibir();
						switch(opcao){
							case 'A':
								clrscr();
								ExibeClientes();
								break;
							case 'B':
								clrscr();
								ExibeCarro();
								break;
							case 'C':
								clrscr();
								ExibeLocacao();
								break;
						}
					}while(opcao!='D');
					break;
			//LISTAGEM 
			//case 'E':
//				do{
//					opcao = MenuListagem();
//					switch(opcao){
//						case 'A':
//							//ListaClientes3Locacoes(Cliente,TC,Locacao,TL);
//							break;
//						case 'B':
//							//ListagemDeCarroPorCategoria(Carro,TP);
//							break;
//						case 'C':
//							//LocacaoMaiorLimite(Locacao,TL);
//					}
//				}while(opcao!= 'D');
//				break;		
			//RELATORIO COMPLETO
			case 'F':
				//RelatorioCompleto(Cliente,TC,Locacao,TL,Carro,TP);
				break;
		}
	}while(opcao!=27);
}




int main(void){
	Executar();
	
	return 0;
}

