float sdot( int length, float *x, float *y ) {
    float result = 0.0;
    for (int i = 0; i < length; i++)
        result += x[i] * y[i];
    return result;

}
