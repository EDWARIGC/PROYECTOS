//Edwar González
//Tarea #1 Convertir numeros Arábicos a Romanos del ( 1 al 100 ) SIN FUNCIONES EN C++

#include <iostream>

using namespace std; 

int main()
{
    //BLOQUE DE VARIABLES
    int numero, place[3], x=2, opcion, numTransformadoD=0;
    char numeroR[8];
    //BLOQUE DE INSTRUCCIONES
   
		cout <<"========================";
		cout <<"\n..........MENU..........";	
		cout <<"\n========================";
		cout <<"\n|  1.DECIMAL A ROMANO  |";
		cout <<"\n|----------------------|";
		cout <<"\n|  2.ROMANO A DECIMAL  |";
		cout <<"\n|----------------------|";
		cout <<"\n|       3.SALIR        |";
		cout <<"\n|----------------------|";
		cout << "\n________________________________\n ";
		cout <<"\nElija una opcion: ";
	        cin >> opcion;
	    cout << "________________________________ "<<endl;
	        
	    if (opcion == 1 )
	    	{
	    		//entrada
		    	cout << "Ingrese un numero entre 1 y 100: ";
		        	cin >>numero;
			    cout <<"______________________________________________________ "<<endl; 

			    if (numero <= 100 && numero >= 1)
				    {
					    while (numero >= 1)
						    {
						    	place[x] = numero % 10;
						    	numero /= 10;
					    		x--;
							}
				//DE DECIMAL A ROMANO
						cout << "\n El numero en Romano es : ";
						switch (place[0])
						   	{ 
						   		case 1: cout <<"C";
						    			break;	
							}
						switch (place[1])
						   	{
						    	case 1: cout <<"X";
						    			break;
						    	case 2: cout <<"XX";
						    			break;
						    	case 3: cout <<"XXX";
						    			break;
						    	case 4: cout <<"XL";
						    			break;
						    	case 5:	cout <<"L"; 
						    			break;
						    	case 6: cout <<"LX";
						    			break;
						    	case 7: cout <<"LXX";
						    			break;
						    	case 8: cout <<"LXXX";
						    			break;
						    	case 9: cout <<"XC";
						    			break;	
							}
						switch (place[2])
						   	{
						    	case 1: cout <<"I";
						    			break;
						    	case 2: cout <<"II";
						    			break;
						    	case 3: cout <<"III";
						    			break;
						    	case 4: cout <<"IV";
						    			break;
						    	case 5: cout <<"V";
						    			break;
						    	case 6: cout <<"VI";
						    			break;
						    	case 7: cout <<"VII";
						    			break;
						    	case 8: cout <<"VIII";
						    			break;
						    	case 9: cout <<"IX";
						    			break;
							}
					}
					else
							{
								cout << " \n ERROR NUMERO INVALIDO" << endl;
							}
			    
			}
	    else if (opcion == 2)
				{
				//entrada
					cout<<"\nIngrese un numero Romano entre 1 y 100 en MAYUSCULAS: ";
						cin>>numeroR;
					cout <<"______________________________________________________ "<<endl; 
					x=0;
					while(x<8)
						{
							switch (numeroR[x])
								{
									case 'I': numTransformadoD += 1 ;
									break;
									case 'V': numTransformadoD += 5;
									break;
									case 'X': numTransformadoD += 10;
									break;
									case 'L': numTransformadoD += 50;
									break;
									case 'C': numTransformadoD += 100;
									break;
								}
							x++;
						 if     ( numeroR[x] == 'C' && numeroR[x-1] == 'X' )
							{
								numTransformadoD -= 20;
							}	
						else if ( numeroR[x] == 'L' && numeroR[x-1] == 'X' )	
							{
								numTransformadoD -= 20; 
							}
						
						else if		( numeroR[x] == 'V' && numeroR[x-1] == 'I' )	
							{
								numTransformadoD -= 2;
							}
						else if ( numeroR[x] == 'X' && numeroR[x-1] == 'I' )	
							{
								numTransformadoD -= 2;
							}
						}					
						//SALIDA
						cout<< "\n El numero en Decimal es : " << numTransformadoD << endl;
				}
				
		else
			{
				cout<<"\n\tBYE";
			}
    return 0;
}

