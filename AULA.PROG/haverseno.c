#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES_
#define raio_terra 6371.0

float graus2rad(float graus) {
    float rad;
    rad = (3.14*graus) / 180;
    return rad; 
}

float hav (float theta) {
    float hav;
    hav = pow(sin(theta/2),2);
    return hav;
}

float d_terra (float lat1, float lon1, float lat2, float lon2){
    float d, h1;
    d = 2* raio_terra * asin(sqrt(hav(lat2 - lat1)) + cos(lat2)*cos(lat1)*hav(lon2 - lon1));
    
    lat1 = graus2rad(lat1);
    lon2 = graus2rad(lon2);
    lat2 = graus2rad(lat2);
    lon2 = graus2rad(lon2);
}

int main () {
    float lat1 , lon1, lat2, lon2;
    printf("Entre com a latitude e longitude do ponto 1: ");
    scanf("%f %f", &lat1 , &lon1);
    
    printf("Entre com a latitude e longitude do ponto 2: ");
    scanf("%f %f", &lat2, &lon2);

    float d;
    d = d_terra(lat1,lat2,lon1,lon2);
    printf("Distância entre os pontos: %.2f", d);
    return 0;
}