// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

int main() 
{   

  float x1,x2,y1,y2,m,p,q;
 

  std::cout << "Ingrese coordenada en x1 : ";
    while(!(std::cin >> x1))
    {
        std::cout << "Ingrese una coordenada válida para x1:";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
  std::cout << "Ingrese coordenada en y1 :";
    while(!(std::cin >> y1))
    {
        std::cout << "Ingrese una coordenada válida para y1:";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
  std::cout << "Ingrese coordenada en x2 :";
    while(!(std::cin >> x2))
    {
        std::cout << "Ingrese una coordenada válida para x2:";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
  while (x2 == x1)
  {
     std::cout << "Ingrese una coordenada diferente :";
     std::cin >> x2;
  }

     std::cout<< "Ingrese coordenada en y2 :";
     while(!(std::cin >> y2))
    {
        std::cout << "Ingrese una coordenada válida para y2:";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }


     m=(y2-y1)/(x2-x1);
 
     std::cout << "La ecuacion de la recta es: y = " <<  m << "x + " << -m*x1+y1 <<std::endl;


/*ejercicio 2 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */


    std::string a,b,c;
    double na,nb,nc;
  
	std::cout<<"RECUERDA: ax^2 + bx + c = 0\n";


  while (true) 
    {
     std::cout << "ingrese a\n";
      std::cin >> a;
      bool Es_numero = true;
      for (char k : a) 
        {
          if (!std::isdigit(k)) 
            {
              Es_numero = false;
              break;
            }
        }
      if (Es_numero)
        {
          na = std::stod(a);
          if (na>0)
           {
            break;  
           }
          else
           {
            std::cout<<"VALOR INVALIDO, INTENTELO NUEVAMENTE"<<std::endl; 
           }
        }
      else
        {
          std::cout<< "VALOR INVALIDO, INTENTELO NUEVAMENTE"<<std::endl;  
        }
    }
  
  while (true) 
    {
     std::cout << "ingrese b\n";
      std::cin >> b;
      bool Es_numero = true;
      for (char k : b) 
        {
          if (!std::isdigit(k)) 
            {
              Es_numero = false;
              break;
            }
        }
      if (Es_numero)
        {
          nb = std::stod(b);
          break;
        }
      else
        {
          std::cout<< "VALOR INVALIDO, INTENTELO NUEVAMENTE"<<std::endl;  
        }
    }
  
    while (true) 
    {
     std::cout << "ingrese c\n";
      std::cin >> c;
      bool Es_numero = true;
      for (char k : c) 
        {
          if (!std::isdigit(k)) 
            {
              Es_numero = false;
              break;
            }
        }
      if (Es_numero )
        {
          nc = std::stod(c);
          break;
        }
      else
        {
          std::cout<< "VALOR INVALIDO, INTENTELO NUEVAMENTE"<<std::endl;  
        }
    }
    double r1 =(-nb+(-1*(sqrt(pow(nb,2)-(4*na*nc)))))/(2*na);
    double r2 =(-nb+(1*(sqrt(pow(nb,2)-(4*na*nc)))))/(2*na);
    std::cout<<"la primera raiz es: "<<r1<<std::endl;
    std::cout<<"la segunda raiz es: "<<r2<<std::endl; 
  
/* EJERCICIO 3 */


	std::cout << "\nHello, World!! 2023 - Winter\n\n"; 
	bool v=true,val_evalu=false,e;
	int op;
	float	ca_1{0},ca_2{0},h{0},an_1{0},an_2{0};
	
	while (v)
	{
		std::system("cls");
		std::cout << "Complete los datos de un triangulo rectugulo"<<std::endl;
		std::cout << "****Elija una opcion****"<<std::endl;
		std::cout << std::endl;	
		std::cout << "1. Cateto_1: "<<ca_1<<std::endl;
		std::cout << "2. Cateto_2: "<<ca_2<<std::endl;
		std::cout << "3. Hipotenusa: "<<h<<std::endl;
		std::cout << "4. Angulo_del_cateto_1: "<<an_1<<std::endl;
		std::cout << "5. Angulo_del_cateto_2: "<<an_2<<std::endl;
		std::cout << "6. MOSTRAR RESULTADO: "<<std::endl;
		
		std::cin >>op;
		
		switch (op)
		{
			case 1:
				while (true)
				{
					std::system("cls");
					std::cout<<"\t 1. Cateto_1"<<std::endl;
					if (ca_1 <=0)
					{
						//std::cout<<"ERROR \n";
						std::cout<<"Ingresa un numero R positivo: ";
						std::cin>>ca_1;
					}
					else
					{
						break;
					}
				
				}
				break;
				
			case 2:
				while (true)
				{
					std::system("cls");
					std::cout<<"\t 2. Cateto_2"<<std::endl;
					if (ca_2 <=0)
					{
						//std::cout<<"ERROR \n";
						std::cout<<"Ingresa un numero R positivo: ";
						std::cin>>ca_2;
					}
					else
					{
						break;
					}
				
				}
				break;
			case 3:
				while (true)
				{
					std::system("cls");
					std::cout<<"\t 3. Hipotenusa"<<std::endl;
					if (h <=0)
					{
						//std::cout<<"ERROR \n";
						std::cout<<"Ingresa un numero R positivo: ";
						std::cin>>h;
					}
					else
					{
						break;
					}
				
				}
				break;
			case 4:
				while (true)
				{
					std::system("cls");
					std::cout<<"\t 4. Angulo_del_cateto_1:"<<std::endl;
					if (an_1 <=0)
					{
						//std::cout<<"ERROR \n";
						std::cout<<"Ingresa un angulo positivo: \n ";
						std::cout<<"El angulo debe ser >0 y <90 : ";
						std::cin>>an_1;
					}
					else
					{
						break;
					}
				
				}
				break;
			case 5:
				while (true)
				{
					std::system("cls");
					std::cout<<"\t 5. Angulo_del_cateto_2:"<<std::endl;
					if (an_2 <=0 or an_2>=90)
					{
						//std::cout<<"ERROR \n";
						std::cout<<"Ingresa un angulo positivo: \n";
						std::cout<<"El angulo debe ser >0 y <90 : ";
						std::cin>>an_2;
					}
					else
					{
						break;
					}
				
				}
				break;
			case 6:
			{
				break;
			}
		}
		
		
	}
	std::cout<< "RESULTADOS EXIT"<<std::endl;

  return 0;
}




