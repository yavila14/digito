#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout <<"Digita un numero de un solo digito para escribirlo en letras ";
	cin >>n;
	if(n==1){cout<<"El numero es uno";
	}else if(n==2){cout<<"El numero es dos";
	}else if(n==3){cout<<"El numero es tres";
    }else if(n==4){cout<<"El numero es cuatro";
    }else if(n==5){cout<<"El numero es cinco";
    }else if(n==6){cout<<"El numero es seis";
    }else if(n==7){cout<<"El numero es siete";
    }else if(n==8){cout<<"El numero es ocho";
    }else if(n==9){cout<<"El numero es nueve";
    }else if(n==0){cout<<"El numero es cero";
    }else {cout<<"la opcion no es correcta";
}
 	return 0;
}
