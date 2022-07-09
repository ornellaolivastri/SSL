/* imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */

#include <stdio.h> 

void imprimirFahrenheitACelsius();

void imprimirCelsiusAFahrenheit();

int main(void) {

    imprimirFahrenheitACelsius();
    
    //imprimirCelsiusAFahrenheit();


}

void imprimirFahrenheitACelsius(void) {
    float fahr, celsius;
        float lower, upper, step;
        
        lower = 0 ;       /* límite inferior de la tabla de temperaturas */
        upper = 300;      /* límite superior */
        step = 20;        /* tamaño del incremento */
        fahr = lower;
        
        while (fahr <= upper) {

            celsius = 5.0 * (fahr - 32.0) / 9.0;           // fahr = ( (celsius * 9) / 5 ) + 32

            /*
                Impresion de valores con cierto formato:
                usando una (\t) tabulacion entre cada valor 
                y un \n salto de linea al final            
            */
            
            printf("%.2f\t%.2f\n", fahr, celsius);
            
            /*
                El uso de variables en printf se hace mediante el %
                respetando el orden de los parametros (1º con 1º, 2º con 2º)
            */

            fahr = fahr + step;
        }        
}    


void imprimirCelsiusAFahrenheit(){
    float celsius, farenheit;
        float lower, upper, step;
        
        lower = (-17) ;     /* límite inferior de la tabla de temperaturas */
        upper = 148;        /* límite superior */
        step  = 20;          /* tamaño del incremento */
        celsius = lower;
        
        while (celsius <= upper) {

            // Todos dan el mismo resultado
            //farenheit  = (celsius / 5.0) * 9.0  + 32.0;
            //farenheit  = (celsius * 9.0) / 5.0  + 32.0;
            farenheit =  celsius *  (9.0 / 5.0 )   + 32.0;
            
            /*
                Impresion de valores con formato 
                usando la (\t) tabulacion y el \n salto de linea
            */
            
            printf("%.2f\t%.2f\n", celsius, farenheit);
            
            /*
                El uso de variables en printf se hace mediante el %
                respetando el orden de los parametros (1º con 1º, 2º con 2º)
            */

            celsius = celsius + step;
        }
}