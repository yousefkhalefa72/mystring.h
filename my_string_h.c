/*
 * File       : my_string_h.c 
 * Author     : Yousef_Khalefa
 * linkedin   : https://www.linkedin.com/in/yousef-khalefa/
 * created in : 15-sep-2023 
 * description: This is simple implementation of string.h library.
 */

/**********************Includes*********************/
#include <my_string_h.h>

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
