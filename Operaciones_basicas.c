int sumar(int sumando1, int sumando2){
    int suma;
    suma= sumando1 + sumando2;
    //printf("\nLa sumas es:  %d", suma);
    return suma;
}

int restar(int a,int b){
    int resta;
    resta= a - b;
    //printf("\nLa resta es: %d", resta);
    return resta;
}

int multiplicar(int c,int d){
    int multi;
    multi= c * d;
    //printf("\nLa resta es: %d", multi);
    return multi;
}

float dividir(float q,float e){
    float divi;
    if(e == 0){
    //printf("No se puede dividir entre 0");
    return 0;
    }else{
    divi= q / e;
    //printf("\nLa division es: %.2f", divi);
    }
    return divi;
}