//este archivo permite la configuracion de aspectos del juego como su sistema de vidas, dimensiones del tablero,
//cantidad de minas y sistema de vida.
#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        // constructor de la clase config
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        // metodos de acceso getters y modificacion setters
        int getfilasTablero();
        int setfilasTablero(int filasTablero);//numero inicial de las filas del tablero
        int getcolumnasTablero();
        int setcolumnasTablero(int columnasTablero);//numero inicial de columnas en el tablero
        int getminasTablero();
        int setminasTablero(int minasTablero);//cantidad de minas a generar en el tablero
        bool getmodoDesarrolladorTablero();
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);//permite activar/desactivar vista en modo desarrollador
        int getvidasTablero();
        int setvidasTablero(int vidasTablero);//configuracion de las vidas en el tablero
        void menuConfiguracion();
    protected:

    private:
        int filasTablero;//altura del tablero
        int columnasTablero;//ancho del tablero
        int minasTablero;//minas en el tablero
        bool modoDesarrolladorTablero;//opcion de vista en modo desarrollador
        int vidasTablero;//oportunidades en el tablero de juego
};

#endif // CONFIG_H
