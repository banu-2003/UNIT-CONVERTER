#include<stdio.h>
int main()
{
	char category;
	int tempchoice,currencychoice,masschoice;
	int userF,userC,userK;
	int userinputRUPEEStoUSD,userinputRUPEEStoEURO,userinputRUPEEStoCAD;
	int userinputKGtoPOUNDS,userinputKGtoOUNCE,userinputKGtoTON;
	int userinputKMtoMETRE,userinputKMtoCENTIMETRE,userinputKMtoMILLIMETRE;
	int fahrenheittocelsius,celsiustofahrenheit,kelvintofahrenheit;
	float RUPEEStoUSD,RUPEEStoEURO,RUPEEStoCAD;
	float KGtoPOUNDS,KGtoOUNCE,KGtoTON;
	printf("Welcome to Unit Converter! \n");
    printf("Select the parameter you want to do conversion\n");
    printf("Temperature(T),Currency(C),Mass(M)\n");
    printf("Please enter the first letter of the parameter you want to convert.\n");
    scanf("%c",&category);
    if(category == 'T')
	{
      printf("Welcome to Temperature Converter. \n");
      printf("List of Temperature conversions \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for kelvin to Fahrenheit \n");
      scanf("%d",&tempchoice);
      if(tempchoice == 1)
	  {
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userF);
          fahrenheittocelsius =  ((userF-32) * (5.0/9.0));
          printf("Celsius: %d",fahrenheittocelsius);
      }
    	else if(tempchoice == 2)
		{
        printf("Please enter the Celsius degree: \n");
        scanf("%d",&userC);
        celsiustofahrenheit = ((9.0/5.0)*userC + 32);
        printf("Fahrenheit: %d",celsiustofahrenheit);
        }
        else if(tempchoice == 3)
        {
        	printf("Please enter kelvin degree: \n");
        	scanf("%d",&userK);
        	kelvintofahrenheit=((0-273.15)*9/5+32);
        	printf("Fahrenheit: %d",kelvintofahrenheit);	
		}
        else
        printf("Please enter the correct choice. \n");
  }
  else if(category == 'C')
   {
      printf("Welcome to Currency Converter! \n");
      printf("List of currency conversions  \n");
      printf("Enter 1 for Rupees to Usd. \n");
      printf("Enter 2 for Rupees to Euro. \n");
      printf("Enter 3 for Rupees to CAD. \n");
      scanf("%d",&currencychoice);
   if(currencychoice == 1)
   {
          printf("Please enter the Rupees amount: \n");
          scanf("%d",&userinputRUPEEStoUSD);
          RUPEEStoUSD = userinputRUPEEStoUSD * 0.013;
          printf("USD: %.2f",RUPEEStoUSD); 
       }
       else if(currencychoice == 2)
	   {
          printf("Please enter the Rupees amount: \n");
          scanf("%d",&userinputRUPEEStoEURO);
          RUPEEStoEURO = userinputRUPEEStoEURO * 0.012;
          printf("Euro: %2f",RUPEEStoEURO);
      }
      else if(currencychoice == 3) 
	  {
        printf("Please enter the Rupees amount: \n");
        scanf("%d",&userinputRUPEEStoCAD);
        RUPEEStoCAD = userinputRUPEEStoCAD * 0.016;
        printf("RMB: %.2f",RUPEEStoCAD);
      }
      else
        printf("Please enter correct choice. \n");
    }
  else if(category == 'M')
		{
      printf("Welcome to Mass Converter! \n");
      printf("List of Mass conversions  \n");
      printf("Enter 1 for Kg to pounds. \n");
      printf("Enter 2 for Kg to Ounce. \n");
      printf("Enter 3 for Kg to Ton. \n");
      scanf("%d",&masschoice);
	  if(masschoice == 1)
	  {
          printf("Please enter  kilogram: \n");
          scanf("%d",&userinputKGtoPOUNDS);
          KGtoPOUNDS = userinputKGtoPOUNDS *2.20462262185;
          printf("Pounds: %.2f",KGtoPOUNDS);
      }
      else if(masschoice == 2)
	  {
          printf("Please enter  kilogram: \n");
          scanf("%d",&userinputKGtoOUNCE);
          KGtoOUNCE = userinputKGtoOUNCE *35.27;
          printf("Ounce: %.2f",KGtoOUNCE);
      }
      else if(masschoice == 3)
	  {
          printf("Please enter  kilogram: \n");
          scanf("%d",&userinputKGtoTON);
          KGtoTON = userinputKGtoTON *0.001;
          printf("Ton: %.2f",KGtoTON);
      }
      else
      printf("please enter correct choice \n");
  }
    return 0;
}








































































































































