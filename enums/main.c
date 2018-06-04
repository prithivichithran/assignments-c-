#include <stdio.h>
int main()
{
    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum Company xerox=XEROX;
    enum Company google=GOOGLE;
    enum Company ebay=EBAY;
    printf("Xerox value is %d\nGoogle value is %d\nEbay value is %d\n ",xerox,google,ebay);
    return (0);
}
