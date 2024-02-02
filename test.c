/*
 * File       : test.c 
 * Author     : Yousef_Khalefa
 * linkedin   : https://www.linkedin.com/in/yousef-khalefa/
 * created in : 15-sep-2023
 * 
 * description:-
 * 
 * 1- This is simple implementation of string.h library.
 *
 * 2- In main i test all functions so the out of program 
 *    will be some initial values and (result of function) or 
 *    (variables after change).
 *
 * 3- I separate every variables of
 *    any process in local scope {} before him i print name
 *    of process
 *
 * 4- Thanks
 */

/**********************Includes*********************/
#include <stdio.h>
#include <stdlib.h>

/****************functions declarations**************/
void *My_MemChr(const void *StartAddress, unsigned char Value, unsigned int Length);
int My_MemCmp(const void *FMemAddress, const void *SMemAddress, unsigned int Length);
void *My_MemCpy(const void *DestAddress, const void *SrcAddress, unsigned int Length);
void *My_MemMove(const void *DestAddress, const void *SrcAddress, unsigned int Length);
void *My_MemSet(const void *StartAddress, unsigned char Value, unsigned int Length);
char *My_StrCat(char *DestAddress, const char *SrcAddress);
char *My_StrnCat(char *DestAddress, const char *SrcAddress, unsigned int Length);
char *My_StrChr(const char *StartAddress, unsigned char Value);
int My_StrCmp(const char *str1, const char *str2);
int My_StrnCmp(const char *str1, const char *str2, unsigned int Length);
int My_StrColl(const char *str1, const char *str2);
char *My_StrCpy(const void *DestAddress, const void *SrcAddress);
char *My_StrnCpy(const void *DestAddress, const void *SrcAddress, unsigned int Length);
int My_StrCspn(const char *str1, const char *str2);
char *My_StrError(int errnum);
int My_StrLen(const char *str);
char *My_StrPbrk(const char *str1, const char *str2);
char *My_StrRChr(const char *str, unsigned char Value);
int My_StrSpn(const char *str1, const char *str2);
char *My_StrStr(const char *str1, const char *str2);
char *My_StrTok(char *str, const char *delim);
int My_StrXFrm(char *dest, const char *src, unsigned int Length);

/****************main (test of functions)**************/

int main(void)
{
    printf("\n-------------- MyMemChr ----------------\n");
    {
        char MyName[30]="yousef.Mosad.Khalefa";
        unsigned char ChrSearch ='.';
        unsigned char *RetSearch =NULL;

        printf("MyName = %s \n", MyName);
        RetSearch = My_MemChr(MyName, ChrSearch, 30);
        if(NULL == RetSearch){
            printf("not found\n");
        }
        else{
            printf("String after '%c' is -> \"%s\"\n", ChrSearch, RetSearch);
        }
    }

    printf("\n-------------- MyMemCmp ----------------\n");
    {
        char Numbers_1[5] = {1, 5, 2, 4, 5};
        char Numbers_2[5] = {1, 2, 3, 4, 5};
        int RetState = 0;

        printf("Numbers_1 = ");  Print_Arr(Numbers_1,5);
        printf("\nNumbers_2 = ");Print_Arr(Numbers_2,5);
        RetState = My_MemCmp(Numbers_1, Numbers_2, 5);
        if(RetState<0)
        {
            printf("\nNumbers_1 < Numbers_2\n");
        }
        else if(RetState>0)
        {
            printf("\nNumbers_1 > Numbers_2\n");
        }
        else
        {
            printf("\nNumbers_1 = Numbers_2\n");
        }
    }

    printf("\n-------------- MyMemCpy ----------------\n");
    {
        char MyName_1[30]="yousef Mosad Khalefa";
        char MyName_2[30]={0};

        printf("str1 -> %s \n",MyName_1);
        printf("str2 -> %s \n",MyName_2);
        My_MemCpy(MyName_2, MyName_1, 10);
        printf("Str2 -> %s \n",MyName_2);
    }

    printf("\n-------------- MyMemMove ----------------\n");
    {
        char MyName_1[30]="yousef Mosad Khalefa";
        char MyName_2[30];

        printf("str1 -> %s \n",MyName_1);
        printf("str2 -> %s \n",MyName_2);
        My_MemMove(MyName_2,MyName_1,6);
        printf("After Moving \n");
        printf("str1 -> %s \n",MyName_1);
        printf("str2 -> %s \n",MyName_2);
    }

    printf("\n-------------- MyMemSet ----------------\n");
    {
        char Numbers[30]={0};

        printf("str1 -> %s \n",Numbers);
        My_MemSet(Numbers,'*',30);
        printf("str1 -> %s \n",Numbers);
    }

    printf("\n-------------- MyStrCat ----------------\n");
    {
        char MyName_1[30]="yousef";
        char MyName_2[30]=" khalefa";

        printf("str1 -> %s \n",MyName_1);
        printf("str2 -> %s \n",MyName_2);
        My_StrCat(MyName_1,MyName_2);
        printf("str1 -> %s \n",MyName_1);
    }

    printf("\n-------------- MyStrnCat ----------------\n");
    {
        char MyName_1[30]="yousef";
        char MyName_2[30]=" khalefa";

        printf("str1 -> %s \n",MyName_1);
        printf("str2 -> %s \n",MyName_2);
        My_StrnCat(MyName_1,MyName_2,4);
        printf("str1 -> %s \n",MyName_1);
    }

    printf("\n-------------- MyStrChr ----------------\n");
    {
        char MyName_1[30]="yousef.mosad.khalefa";
        unsigned char ChrSearch ='.';
        unsigned char *RetSearch =NULL;
        printf("MyName_1 = %s \nsearch for : '.'\n", MyName_1);
        RetSearch = My_StrChr(MyName_1, ChrSearch);
        if(NULL == RetSearch){
            printf("not found\n");
        }
        else{
            printf("String after '%c' is -> \"%s\"\n", ChrSearch, RetSearch);
        }
    }

    printf("\n-------------- MyStrCmp ----------------\n");
    {
        char MyName_1[30]="khaleha";
        char MyName_2[30]="khalefa";
        int RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrCmp(MyName_1, MyName_2);
        if(RetState<0)
        {
            printf("MyName_1 < MyName_2\n");
        }
        else if(RetState>0)
        {
            printf("MyName_1 > MyName_2\n");
        }
        else
        {
            printf("MyName_1 = MyName_2\n");
        }
    }

    printf("\n-------------- MyStrnCmp ----------------\n");
    {
        char MyName_1[30]="khaleha";
        char MyName_2[30]="khalefa";
        int RetState =0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrnCmp(MyName_1, MyName_2,3);
        if(RetState<0)
        {
            printf("MyName_1 < MyName_2\n");
        }
        else if(RetState>0)
        {
            printf("MyName_1 > MyName_2\n");
        }
        else
        {
            printf("MyName_1 = MyName_2\n");
        }
    }

    printf("\n-------------- MyStrColl ----------------\n");
    {
        char MyName_1[30]="khaleha";
        char MyName_2[30]="khalefa";
        int RetState = 0;
        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrColl(MyName_1, MyName_2);
        if(RetState<0)
        {
            printf("MyName_1 < MyName_2\n");
        }
        else if(RetState>0)
        {
            printf("MyName_1 > MyName_2\n");
        }
        else
        {
            printf("MyName_1 = MyName_2\n");
        }
    }

    printf("\n-------------- MyStrCpy ----------------\n");
    {
        char MyName_1[30]="khalefa";
        char MyName_2[30]={0};

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        My_StrCpy(MyName_2, MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
    }

    printf("\n-------------- MyStrnCpy ----------------\n");
    {
        char MyName_1[30]="khalefa";
        char MyName_2[30]={0};

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        My_StrnCpy(MyName_2, MyName_1,5);
        printf("MyName_2 = %s\n",MyName_2);
    }

    printf("\n-------------- My_StrLen ----------------\n");
    {
        char MyName_1[30]="yousef mosad";
        int RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        RetState = My_StrLen(MyName_1);
        printf("Length of \"%s\" is %d\n", MyName_1, RetState);
    }

    printf("\n-------------- My_StrCspn ----------------\n");
    {
        char MyName_1[30]="yousef mosad";
        char MyName_2[30]="21a1c2m";
        int RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrCspn(MyName_1,MyName_2);
        printf("First matched character is at %d\n", RetState + 1);
    }

    printf("\n-------------- My_StrError ----------------\n");
    {
        char *RetError = My_StrError(2);
        printf("%s\n", RetError);
    }

    printf("\n-------------- My_StrPbrk ----------------\n");
    {
        char MyName_1[30]="abcdefg1523";
        char MyName_2[30]="lpodi";
        char RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrPbrk(MyName_1, MyName_2);
        if(RetState)
            printf("First matching character: %c",RetState);
        else
            printf("Not Found");
    }

    printf("\n-------------- My_StrRChr ----------------\n");
    {
        char MyName_1[30]="yousef.Mosad.Khalefa";
        unsigned char ChrSearch ='.';
        unsigned char *RetState =NULL;

        printf("MyName_1 = %s \nsearch for : '.'\n", MyName_1);
        RetState = My_StrRChr(MyName_1, ChrSearch);
        if(NULL == RetState){
            printf("not found\n");
        }
        else{
            printf("String after '%c' is -> \"%s\"\n", ChrSearch, RetState);
        }
    }

    printf("\n-------------- My_StrSpn ----------------\n");
    {
        char MyName_1[30]="123456789abcdef";
        char MyName_2[30]="3570bd";
        int RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrSpn(MyName_1, MyName_2);
        printf("\nRetState = %i \n", RetState);
    }

    printf("\n-------------- My_StrStr ----------------\n");
    {
        char MyName_1[30]="yousef mosad khalefa";
        char MyName_2[30]="mosad";
        char *RetState =NULL;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrStr(MyName_1, MyName_2);
        printf("RetState  = %s \n", RetState);
    }

    printf("\n-------------- My_StrTok ----------------\n");
    {
        char MyName_1[30]="yousef-mosad-khalefa";

        printf("MyName_1 = %s\n",MyName_1);
        My_StrTok(MyName_1, '-');
    }

    printf("\n-------------- My_StrXFrm ----------------\n");
    {
        char MyName_1[30]="yousef-mosad-khalefa";
        char MyName_2[30]={0};
        int RetState = 0;

        printf("MyName_1 = %s\n",MyName_1);
        printf("MyName_2 = %s\n",MyName_2);
        RetState = My_StrXFrm(MyName_2, MyName_1,30);
        printf("Length of string \"%s\" is: %d\n", MyName_2, RetState);
    }

    return 0;
}

/****************functions definitions****************/
void *My_MemChr(const void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *TempStartAddress=StartAddress;
    unsigned char *RetAddress=NULL;


    if(NULL==StartAddress)
    {
         printf("Memset Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(Length--)
        {
            if(*TempStartAddress == Value)
            {
                 RetAddress = TempStartAddress;
                 break;
            }
            else
            {
                TempStartAddress++;
            }
        }
    }
    return RetAddress;
}

int My_MemCmp(const void *FMemAddress, const void *SMemAddress, unsigned int Length)
{
    int ReturnState = 0;
    unsigned char *TempFMemAddress = FMemAddress;
    unsigned char *TempSMemAddress = SMemAddress;

    if((NULL == FMemAddress) || (NULL == SMemAddress))
    {
        printf("MemCmp Function failed due to a NULL pointer !! \n");
    }
    else if(TempFMemAddress == TempSMemAddress)
    {
        ReturnState = 0;
    }
    else
    {
        while(Length)
        {
            if(*TempFMemAddress != *TempSMemAddress)
            {
                ReturnState = (*TempFMemAddress < *TempSMemAddress) ? -1 : 1;
                break;
            }
            else
            {
                Length--;
                TempFMemAddress++;
                TempSMemAddress++;
            }
        }
    }

    return ReturnState;
}

void *My_MemCpy(const void *DestAddress,const void *SrcAddress, unsigned int Length)
{
    unsigned char *TempSrcAddress=SrcAddress;
    unsigned char *TempDestAddress=DestAddress;

    if((NULL==DestAddress) || (NULL==SrcAddress))
    {
        printf("MemCpy Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(Length--)
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
    }
    return DestAddress;
}

void *My_MemMove(const void *DestAddress, const void *SrcAddress, unsigned int Length)
{
    unsigned char *RetAddress= NULL;
    unsigned char *TempDestAddress=DestAddress;
    unsigned char *TempSrcAddress=SrcAddress;
    if((NULL == DestAddress) || (NULL == SrcAddress))
    {
        printf("MemMove Function failed due to a Null Pointer !!\n");
    }
    else if(DestAddress == SrcAddress)
    {
        RetAddress = DestAddress;
    }
    else
    {
        while(Length--)
        {
            *TempDestAddress++ = *TempSrcAddress;
            *TempSrcAddress++ = ' ';
        }
        RetAddress = DestAddress;
    }
    return RetAddress;

}

void *My_MemSet(const void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *TempAddress=StartAddress;

    if(NULL==TempAddress)
    {
        printf("Memset Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(Length--)
        {
            *TempAddress++ = Value;
        }
    }
    return StartAddress;
}

char *My_StrCat(char *DestAddress, const char *SrcAddress)
{
    unsigned char *TempDestAddress=DestAddress;

    if((NULL==DestAddress) || (NULL==SrcAddress))
    {
        printf("My_StrCat Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*TempDestAddress != '\0')
        {
            *TempDestAddress++;
        }
        while(*SrcAddress != '\0')
        {
            *TempDestAddress++ = *SrcAddress++;
        }
    }
    return TempDestAddress;
}

char *My_StrnCat(char *DestAddress, const char *SrcAddress, unsigned int Length)
{
    unsigned char *TempDestAddress=DestAddress;

    if((NULL==DestAddress) || (NULL==SrcAddress))
    {
        printf("My_StrnCat Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*TempDestAddress != '\0')
        {
            *TempDestAddress++;
        }
        while((*SrcAddress != '\0') && (Length--))
        {
            *TempDestAddress++ = *SrcAddress++;
        }
    }
    return TempDestAddress;
}

char *My_StrChr(const char *StartAddress, unsigned char Value)
{
    unsigned char *TempStartAddress=StartAddress;
    unsigned char *RetAddress=NULL;

    if(NULL==StartAddress)
    {
         printf("My_StrChr Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*TempStartAddress != '\0')
        {
            if(*TempStartAddress == Value)
            {
                 RetAddress = TempStartAddress;
                 break;
            }
            else
            {
                TempStartAddress++;
            }
        }
    }
    return RetAddress;
}

int My_StrCmp(const char *str1, const char *str2)
{
    int ReturnState = 0;
    unsigned char *TempFMemAddress = str1;
    unsigned char *TempSMemAddress = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrCmp Function failed due to a NULL pointer !! \n");
    }
    else if(TempFMemAddress == TempSMemAddress)
    {
        ReturnState = 0;
    }
    else
    {
        while(*TempFMemAddress != '\0')
        {
            if(*TempFMemAddress != *TempSMemAddress)
            {
                ReturnState = (*TempFMemAddress < *TempSMemAddress) ? -1 : 1;
                break;
            }
            else
            {
                TempFMemAddress++;
                TempSMemAddress++;
            }
        }
    }

    return ReturnState;
}

int My_StrnCmp(const char *str1, const char *str2, unsigned int Length)
{
    int ReturnState = 0;
    unsigned char *TempFMemAddress = str1;
    unsigned char *TempSMemAddress = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrnCmp Function failed due to a NULL pointer !! \n");
    }
    else if(TempFMemAddress == TempSMemAddress)
    {
        ReturnState = 0;
    }
    else
    {
        while((*TempFMemAddress != '\0') && (Length--))
        {
            if(*TempFMemAddress != *TempSMemAddress)
            {
                ReturnState = (*TempFMemAddress < *TempSMemAddress) ? -1 : 1;
                break;
            }
            else
            {
                TempFMemAddress++;
                TempSMemAddress++;
            }
        }
    }

    return ReturnState;
}

int My_StrColl(const char *str1, const char *str2)
{
    int ReturnState = 0;
    unsigned char *TempFMemAddress = str1;
    unsigned char *TempSMemAddress = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrColl Function failed due to a NULL pointer !! \n");
    }
    else if(TempFMemAddress == TempSMemAddress)
    {
        ReturnState = 0;
    }
    else
    {
        while(*TempFMemAddress != '\0')
        {
            if(*TempFMemAddress != *TempSMemAddress)
            {
                ReturnState = (*TempFMemAddress < *TempSMemAddress) ? -1 : 1;
                break;
            }
            else
            {
                TempFMemAddress++;
                TempSMemAddress++;
            }
        }
    }

    return ReturnState;
}

char *My_StrCpy(const void *DestAddress, const void *SrcAddress)
{
    unsigned char *TempSrcAddress=SrcAddress;
    unsigned char *TempDestAddress=DestAddress;

    if((NULL==DestAddress) || (NULL==SrcAddress))
    {
        printf("My_StrCpy Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*TempSrcAddress != '\0')
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
    }
    return DestAddress;
}

char *My_StrnCpy(const void *DestAddress, const void *SrcAddress, unsigned int Length)
{
    unsigned char *TempSrcAddress=SrcAddress;
    unsigned char *TempDestAddress=DestAddress;

    if((NULL==DestAddress) || (NULL==SrcAddress))
    {
        printf("My_StrnCpy Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while((*TempSrcAddress != '\0') && (Length--))
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
    }
    return DestAddress;
}

int My_StrCspn(const char *str1, const char *str2)
{
    int ReturnState = 0,flag=0;
    unsigned char *Tempstr1 = str1;
    unsigned char *Tempstr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrCspn Function failed due to a NULL pointer !! \n");
    }
    else if(Tempstr1 == Tempstr2)
    {
        ReturnState = 0;
    }
    else
    {
        while(*Tempstr1 != '\0')
        {
            for(int index=0;(*(Tempstr2+index)!='\0');index++)
            {
                if(*Tempstr1 != *(Tempstr2+index))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            Tempstr1++;
            if(flag==1)
            {
                ReturnState++;
            }
            else if(flag==0)
            {
                break;
            }
        }
    }

    return ReturnState;
}

int My_StrLen(const char *str)
{
    unsigned char *Tempstr=str;
    unsigned int RetVal=0;

    if((NULL==str))
    {
        printf("My_StrLen Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*Tempstr != '\0')
        {
            RetVal++;
            Tempstr++;
        }
    }
    return RetVal;
}

char *My_StrError(int errnum)
{
    static char *RetVal=NULL;
    switch(errnum)
    {
        case 1:
            RetVal="file not found";
        break;
        case 2:
            RetVal="Syntax Error";
        break;
        case 3:
            RetVal="GCC Not Found";
        break;
    }
    return RetVal;
}

char *My_StrPbrk(const char *str1, const char *str2)
{
    unsigned char RetVal=0;
    unsigned char *Tempstr1 = str1;
    unsigned char *Tempstr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrPbrk Function failed due to a NULL pointer !! \n");
    }
    else
    {
        while((*Tempstr1 != '\0') && (RetVal==0))
        {
            for(int index=0;(*(Tempstr2+index)!='\0');index++)
            {
                if(*Tempstr1 == *(Tempstr2+index))
                {
                    RetVal= *Tempstr1;
                    break;
                }
            }
            Tempstr1++;
        }
    }

    return RetVal;
}

char *My_StrRChr(const char *str, unsigned char Value)
{
    unsigned char *Tempstr=str;
    unsigned char *RetAddress=NULL;
    if(NULL==str)
    {
         printf("My_StrRChr Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while(*Tempstr != '\0')
        {
            if(*Tempstr == Value)
            {
                 RetAddress = Tempstr++;
            }
            else
            {
                Tempstr++;
            }
        }
    }
    return RetAddress;
}

int My_StrSpn(const char *str1, const char *str2)
{
    int ReturnState = 0;
    unsigned char *Tempstr1 = str1;
    unsigned char *Tempstr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrSpn Function failed due to a NULL pointer !! \n");
    }
    else if(Tempstr1 == Tempstr2)
    {
        ReturnState = 0;
    }
    else
    {
        while(*Tempstr1 != '\0')
        {
            for(int index=0;(*(Tempstr2+index)!='\0');index++)
            {
                if(*Tempstr1 == *(Tempstr2+index))
                {
                    ReturnState++;
                    break;
                }
            }
            Tempstr1++;
        }
    }
    return ReturnState;
}

char *My_StrStr(const char *str1, const char *str2)
{
    int flag=0,lenght;
    char *ReturnState = NULL;
    unsigned char *Tempstr1 = str1;
    unsigned char *Tempstr2 = str2;

    if((NULL == str1) || (NULL == str2))
    {
        printf("My_StrStr Function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(*Tempstr1 != '\0')
        {
            lenght=0;
            flag=0;
            for(int index=0;(*(Tempstr2+index)!='\0');index++)
            {
                lenght++;
                if(*(Tempstr1+index) == *(Tempstr2+index))
                {
                    flag++;
                }
            }
            if(flag==lenght)
            {
                ReturnState = Tempstr1;
                break;
            }
            Tempstr1++;
        }
    }
    return ReturnState;
}

char *My_StrTok(char *str, const char *delim)
{
    char *ReturnState = NULL;
    unsigned char *Tempstr1 = str;

    if((NULL == str))
    {
        printf("My_StrTok Function failed due to a NULL pointer !! \n");
    }
    else
    {
        while(*Tempstr1 != '\0')
        {
            if(*Tempstr1 == delim)
            {
                printf("\n");
            }
            else
            {
                printf("%c",*Tempstr1);
            }
            Tempstr1++;
        }
        printf("\n");
    }
    return ReturnState;
}

int My_StrXFrm(char *dest, const char *src, unsigned int Length)
{
    unsigned char *Tempdest = dest;
    unsigned char *Tempsrc = src;
    unsigned int RetVal=0;

    if((NULL==src) || (NULL==dest))
    {
        printf("My_StrXFrm Function failed due to a Null Pointer !!\n");
    }
    else
    {
        while((*Tempsrc != '\0') && (Length--))
        {
            *Tempdest++=*Tempsrc++;
            RetVal++;
        }
    }
    return RetVal;
}

void Print_Arr(unsigned char arr[],unsigned int Length)
{
    unsigned int index=0;
    for(index = 0;index<Length;index++)
    {
        printf("%i\t",arr[index]);
    }
}
