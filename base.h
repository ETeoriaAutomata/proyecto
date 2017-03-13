#ifndef BASE_H
#define BASE_H
class eregular
{
	public:
		eregular();
		void dibujar();
};

class transicion
{
	public:
		transicion();
		void flecha(const std::string& tex, int tipo);
		float x1,y1,x2,y2;
		int colorPunta, colorLinea;
		
};

class estado
{
	public:
		estado(); //constructor;
		float x,y; //coordenadas
		
		//char *nombre; //nombre del nodo
		int tipo; //tipo de nodo 1:normal, 2:inicial, 3:aceptaci�n
		void dibujarestado(int color,const std::string& nombre);
		int colorN;
		bool simetrico;
		bool reflexivo;
		private:
		void Inicial(const std::string& nom);
		void Normal(const std::string& nom);
		void Aceptacion(const std::string& nom);
};

class fTransicion
{
	public:
	fTransicion();
	void funcionT(estado edoOrigen, const std::string& cadena, estado edoDestino);
	transicion enlace;
	private:
	bool comprobarReflexion(estado Origen, estado Destino );
		};
	
	#endif
