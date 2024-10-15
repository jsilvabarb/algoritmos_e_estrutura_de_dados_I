#include <stdio.h>

int main() {
 
  int ageInDays;
  
  scanf("%d", &ageInDays);
  
  int ageYears = ageInDays / 365;
  
  int restAgeYears = ageInDays % 365;
  
  int ageMonths = restAgeYears / 30;
  
  int ageDays = restAgeYears % 30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ageYears, ageMonths, ageDays);

  return 0;
}
