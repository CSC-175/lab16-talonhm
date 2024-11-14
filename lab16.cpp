// Code to implement the gcf function goes here
int gcf(int a, int b) {
    int r = 1;
    while (r != 0) {
        r = a % b;
        if (r != 0) {
            a = b;
            b = r;
        }
    }
    return(b);

}