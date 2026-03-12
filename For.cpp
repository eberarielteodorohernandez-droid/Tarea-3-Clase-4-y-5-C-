#include <iostream>
using namespace std;
/*
main(){
	int i=0;
	int contar=0;
	for(i=4;i<=8;i+=2){
		cout<<i<<endl;
		contar++;
	}
	cout<<"I fuera"<<i<<endl;
	cout<<"Ciclos: "<<contar<<endl;
	system ("pause");
}
*/
/*
main(){
	
	for(int i=10;i>=0;i--){
		cout<<i<<endl;
	}
}
*/
/*
main(){
	int datos[5] = 	{10,40,100,250,3000};
	for(int i=0;i<5;i++){
		cout<<datos[i]<<endl;
	}

}
*/
/*
main(){
	int tam=0;
	int datos[] = 	{10,40,100,250,3000};
	/*tam=sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	
	for(int i=0;i<tam;i++){
		cout<<datos[i]<<endl;
	}
		for(int i : datos){
		cout<<i<<endl;
	}
	*/
	/*
	main(){
		int tabla=0,res=0;
		
		cout<<"ingrese tabla";
		cin>>tabla;
		for(int i=1;i<=10;i++){
		res = tabla * i;
		cout<<tabla<<"X"<<i<<" = "<<res<<endl;
		}
	
	system("pause");	
	}
	*/
		main(){
		int inicio =0,fin= 0,res=0;
		
		cout<<"ingrese tabla incial: ";
		cin>>inicio;
		cout<<"ingrese tabla final: ";
		cin>>fin;
		
		for (int rango=inicio;rango<=fin;rango++){
			cout<<"Tabla del "<<rango<<endl;
					for(int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<"X"<<i<<" = "<<res<<endl;
		}
	
		}
			
	/*	
		for(int i=1;i<=10;i++){
		res = tabla * i;
		cout<<tabla<<"X"<<i<<" = "<<res<<endl;
		}
	
		}*/
	system("pause");	
	}
	

 