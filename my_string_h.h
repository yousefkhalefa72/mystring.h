/*
 * File       : my_string_h.h 
 * Author     : Yousef_Khalefa
 * linkedin   : https://www.linkedin.com/in/yousef-khalefa/
 * created in : 15-sep-2023
 */

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