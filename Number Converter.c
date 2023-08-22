#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int menu();
void toGoMainMenu();
void decimalToBinary();
void decimalToHexadecimal();
void decimalToOctal();
void binaryToDecimal();
void binaryToHexadecimal();
void binaryToOctal();
void hexadecimalToDecimal();
void hexadecimalToBinary();
void hexadecimalToOctal();
void octalToDecimal();
void octalToBinary();
void octalToHexadecimal();


int main()
{
    printf("\n\t***WELCOME TO OUR PROJECT***\n");
    printf("\t\t##Number Converter##");
    toGoMainMenu();
    int infintyLoop = 1, choice;
    while(infintyLoop)
    {
        choice = menu();

        switch(choice)
        {
        case 1:
            decimalToBinary();
            break;
        case 2:
            decimalToHexadecimal();
            break;
        case 3:
            decimalToOctal();
            break;
        case 4:
            binaryToDecimal();
            break;
        case 5:
            binaryToHexadecimal();
            break;
        case 6:
            binaryToOctal();
            break;
        case 7:
            hexadecimalToDecimal();
            break;
        case 8:
            hexadecimalToBinary();
            break;
        case 9:
            hexadecimalToOctal();
            break;
        case 10:
            octalToDecimal();
            break;
        case 11:
            octalToBinary();
            break;
        case 12:
            octalToHexadecimal();
            break;
        case 13:
            system("cls");
            break;
        case 14:
            infintyLoop = 0;
            break;
        default:
            printf("You have entered wrong choice!! Please enter correct choice!!\n\n");
            break;
        }
    }

    system("cls");
    printf("\n\t**Thanks For Using Our Number Converter**\n\n");
    printf("\t\t##Developed by Md. Zahid Sarder##");
    getch();

    return 0;
}

int menu()
{
    int ch;
    printf("\n\t **Please Enter Your Choice**\n\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Hexadecimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Binary to Hexadecimal\n");
    printf("6. Binary to Octal\n");
    printf("7. Hexadecimal to Decimal\n");
    printf("8. Hexadecimal to Binary\n");
    printf("9. Hexadecimal to Octal\n");
    printf("10. Octal to Decimal\n");
    printf("11. Octal to Binary\n");
    printf("12. Octal to Hexadecimal\n");
    printf("13. Clear Screen\n");
    printf("14. Exit\n");
    scanf("%d", &ch);
    return ch;
}

void toGoMainMenu()
{
    printf("\n\n");
    printf("Press enter to go main menu....\n");
    getch();
    system("cls");
}

void decimalToBinary()
{
    printf("\n\t**Decimal to Binary**\n");
    int decimal, i, binary[100];
    printf("Enter a decimal number (Positive Integer):: ");
    scanf("%d", &decimal);
    int n = decimal;

    for(i=0;n>0;i++)
    {
    binary[i]=n%2;
    n=n/2;
    }
    printf("\nBinary of Given Number (%d) is = ", decimal);
    if(!decimal)
        printf("0");

    for(i=i-1;i>=0;i--)
    {
    printf("%d",binary[i]);
    }
    toGoMainMenu();
}

void decimalToHexadecimal()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100]="";

    printf("\n\t**Decimal to Hexadecimal**\n");
    printf("Enter a decimal number (Positive Integer):: ");
    scanf("%ld", &decimalnum);

    quotient = decimalnum;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    printf("\nHexadecimal of Given Number (%d) is = ", decimalnum);
    if(!decimalnum)
        printf("0");
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
    toGoMainMenu();
}

void decimalToOctal()
{
    int octalNumber = 0, i = 1, decimalNumber, temp;

    printf("\n\t**Decimal to Octal**\n");
    printf("Enter a decimal number (Positive Integer):: ");
    scanf("%d", &decimalNumber);
    temp = decimalNumber;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    printf("\nOctal of Given Number (%d) is = %d", temp, octalNumber);

    toGoMainMenu();

}

void binaryToDecimal()
{
    int dec = 0, i = 0, rem, control =1;
    long long int binary, n;
    printf("\n\t**Binary to Decimal**\n");
    printf("Enter a Binary number (Positive Number):: ");
    scanf("%lld", &binary);
    n = binary;

    while (n != 0) {
        rem = n % 10;
        if(rem>1)
        {
            control = 0;
            break;
        }
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    if(control)
        printf("\nDecimal of Given Number (%lld) is = %d", binary, dec);
    else
        printf("\nInvalid Binary Number!!!");
    toGoMainMenu();
}

void binaryToHexadecimal()
{
    long long int binary, hexadecimal = 0, i = 1, remainder, temp;
    int control =1;

    printf("\n\t**Binary to Hexadecimal**\n");
    printf("Enter a Binary number (Positive Number):: ");
    scanf("%lld", &binary);
    temp = binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        if(remainder>1)
        {
            control = 0;
            break;
        }
        hexadecimal = hexadecimal + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }
    if(control)
        printf("\nHexadecimal of Given Number (%lld) is = %lX", temp, hexadecimal);
    else
        printf("\nInvalid Binary Number!!!");
    toGoMainMenu();

}

void binaryToOctal()
{
    long long int binary, octal = 0, j = 1, remainder, temp;
    int control=1;

    printf("\n\t**Binary to Octal**\n");
    printf("Enter a Binary number (Positive Number):: ");
    scanf("%lld", &binary);
    temp = binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        if(remainder>1)
        {
            control = 0;
            break;
        }
        octal = octal + remainder * j;
        j = j * 2;
        binary = binary / 10;
    }
    if(control)
        printf("\nOctal of Given Number (%lld) is = %llo", temp, octal);
    else
        printf("\nInvalid Binary Number!!!");
    toGoMainMenu();

}

void hexadecimalToDecimal()
{
    char hexadecimal[20];
    long long decimal, place;
    int i = 0, val, len, control=1;

    decimal = 0;
    place = 1;
    printf("\n\t**Hexadecimal to Decimal**\n");
    printf("Enter a Hexadecimal number (Positive Number):: ");
    fflush(stdin);
    gets(hexadecimal);

    len = strlen(hexadecimal);
    len--;

    /*
     * Iterate over each hex digit
     */
    for(i=0; hexadecimal[i]!='\0'; i++)
    {

        /* Find the decimal representation of hex[i] */
        if(hexadecimal[i]>='0' && hexadecimal[i]<='9')
        {
            val = hexadecimal[i] - 48;
        }
        else if(hexadecimal[i]>='a' && hexadecimal[i]<='f')
        {
            val = hexadecimal[i] - 97 + 10;
        }
        else if(hexadecimal[i]>='A' && hexadecimal[i]<='F')
        {
            val = hexadecimal[i] - 65 + 10;
        } else
        {
            control = 0;
        }

        decimal += val * pow(16, len);
        len--;
    }

    if(control)
        printf("\nDecimal of Given Number (%s) is = %lld", hexadecimal, decimal);
    else
        printf("\nInvalid Hexadecimal input!!!");
    toGoMainMenu();

}

void hexadecimalToBinary()
{
    char hexadecimal[20], binary[70] = "";
    int i = 0, control=1;

    printf("\n\t**Hexadecimal to Binary**\n");
    printf("Enter a Hexadecimal number (Positive Number):: ");
    fflush(stdin);
    gets(hexadecimal);

    for(i=0; hexadecimal[i]!='\0'; i++)
    {
        switch(hexadecimal[i])
        {
            case '0':
                strcat(binary, "0000");
                break;
            case '1':
                strcat(binary, "0001");
                break;
            case '2':
                strcat(binary, "0010");
                break;
            case '3':
                strcat(binary, "0011");
                break;
            case '4':
                strcat(binary, "0100");
                break;
            case '5':
                strcat(binary, "0101");
                break;
            case '6':
                strcat(binary, "0110");
                break;
            case '7':
                strcat(binary, "0111");
                break;
            case '8':
                strcat(binary, "1000");
                break;
            case '9':
                strcat(binary, "1001");
                break;
            case 'a':
            case 'A':
                strcat(binary, "1010");
                break;
            case 'b':
            case 'B':
                strcat(binary, "1011");
                break;
            case 'c':
            case 'C':
                strcat(binary, "1100");
                break;
            case 'd':
            case 'D':
                strcat(binary, "1101");
                break;
            case 'e':
            case 'E':
                strcat(binary, "1110");
                break;
            case 'f':
            case 'F':
                strcat(binary, "1111");
                break;
            default:
                control = 0;
                break;
        }
    }

    if(control)
        printf("\nBinary of Given Number (%s) is = %s", hexadecimal, binary);
    else printf("\nInvalid hexadecimal input.");
    toGoMainMenu();

}

void hexadecimalToOctal()
{
    char hexadecimal[20];
    long long signed int octal, binary, place;
    int i = 0, rem, val, control=1;

    printf("\n\t**Hexadecimal to Octal**\n");
    printf("Enter a Hexadecimal number (Positive Number & 4 Digit Number Only):: ");
    fflush(stdin);
    gets(hexadecimal);

    octal = 0ll;
    binary = 0ll;
    place = 0ll;

    /* Hexadecimal to binary conversion */
    for(i=0; hexadecimal[i]!='\0'; i++)
    {
        binary = binary * place;

        switch(hexadecimal[i])
        {
            case '0':
                binary += 0;
                break;
            case '1':
                binary += 1;
                break;
            case '2':
                binary += 10;
                break;
            case '3':
                binary += 11;
                break;
            case '4':
                binary += 100;
                break;
            case '5':
                binary += 101;
                break;
            case '6':
                binary += 110;
                break;
            case '7':
                binary += 111;
                break;
            case '8':
                binary += 1000;
                break;
            case '9':
                binary += 1001;
                break;
            case 'a':
            case 'A':
                binary += 1010;
                break;
            case 'b':
            case 'B':
                binary += 1011;
                break;
            case 'c':
            case 'C':
                binary += 1100;
                break;
            case 'd':
            case 'D':
                binary += 1101;
                break;
            case 'e':
            case 'E':
                binary += 1110;
                break;
            case 'f':
            case 'F':
                binary += 1111;
                break;
            default:
                control = 0;
                break;
        }

        place = 10000;
    }

    place = 1;

    /* Binary to octal conversion */
    while(binary > 0)
    {
        rem = binary % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        binary /= 1000;

        place *= 10;
    }

    if(control)
        printf("\nOctal of Given Number (%s) is = %lld", hexadecimal, octal);
    else
        printf("\nInvalid hexadecimal input!!!!");
    toGoMainMenu();

}

void octalToDecimal()
{
    long int octal, decimal = 0, temp;
    int i = 0, control=1;

    printf("\n\t**Octal to Decimal**\n");
    printf("Enter an Octal number (Positive Number):: ");
    scanf("%ld", &octal);
    temp = octal;
    while (octal != 0)
    {
        if(octal%10 > 7)
        {
            printf("\nInvalid Octal Number!!!");
            control = 0;
            break;
        }
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }

    if(control)
    {
        printf("\nDecimal of Given Number (%ld) is = %ld", temp, decimal);
    }
    toGoMainMenu();

}

void octalToBinary()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary, place;
    int rem, control=1;

    place = 1;
    binary = 0;

    printf("\n\t**Octal to Binary**\n");
    printf("Enter an Octal number (Positive Number):: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    /* Octal to binary conversion */
    while(tempOctal > 0)
    {
        if(tempOctal%10 > 7)
        {
            printf("\nInvalid Octal Number!!!");
            control = 0;
            break;
        }
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }

    if(control)
        printf("\nBinary of Given Number (%lld) is = %lli", octal, binary);
    toGoMainMenu();
}

void octalToHexadecimal()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary, place;
    char hexadecimal[70] = "";
    int rem, control=1;

    place = 1;
    binary = 0;

    printf("\n\t**Octal to Hexadecimal**\n");
    printf("Enter an Octal number (Positive Number):: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    /* Octal to binary conversion */
    while(tempOctal > 0)
    {
        if(tempOctal%10 > 7)
        {
            printf("\nInvalid Octal Number!!!");
            control = 0;
            break;
        }
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }

    /* Binary to hexadecimal conversion */
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hexadecimal, "0");
                break;
            case 1:
                strcat(hexadecimal, "1");
                break;
            case 10:
                strcat(hexadecimal, "2");
                break;
            case 11:
                strcat(hexadecimal, "3");
                break;
            case 100:
                strcat(hexadecimal, "4");
                break;
            case 101:
                strcat(hexadecimal, "5");
                break;
            case 110:
                strcat(hexadecimal, "6");
                break;
            case 111:
                strcat(hexadecimal, "7");
                break;
            case 1000:
                strcat(hexadecimal, "8");
                break;
            case 1001:
                strcat(hexadecimal, "9");
                break;
            case 1010:
                strcat(hexadecimal, "A");
                break;
            case 1011:
                strcat(hexadecimal, "B");
                break;
            case 1100:
                strcat(hexadecimal, "C");
                break;
            case 1101:
                strcat(hexadecimal, "D");
                break;
            case 1110:
                strcat(hexadecimal, "E");
                break;
            case 1111:
                strcat(hexadecimal, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hexadecimal);
    if(!octal) hexadecimal[0] = '0';

    if(control)
        printf("\nHexadecimal of Given Number (%lld) is = %s", octal, hexadecimal);
    toGoMainMenu();

}



