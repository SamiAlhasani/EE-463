 #include <stdio.h>
 int main() {
	char *gregorianMonths[] = {
       "January", "Fabruary", "March", "Abril", "May", "June", 
        "July", "August", "September", "October", "November", "Decemper"
       };
      
     char *hijriMonths[] = {
      
     "Muharram", "Safar", "Rabi al-Awwal", "Rabi al-Thani", "Jumada al-Awwal",
      "Jumada al-Thani", "Rajab", "Sha'ban", "Ramadan", "Shawwal", "Dhu al-Qi'dah",
      "Dhu al-Hijjah"
        };
        
        int year = 2023;
        printf("Gregorian Months for %d:\n", year);
        for(int i = 1; i < 12; i++)  {
           printf("%s\n", gregorianMonths[i]);
         }
         printf("\nHijri Months for %d:\n",year);
         for (int i = 0; i < 12; i++) {
            printf("%s\n", hijriMonths[i]);
      }
        return 0;
     }


