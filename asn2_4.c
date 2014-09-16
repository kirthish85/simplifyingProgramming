#include<stdio.h>

#define MAX 20

int main() {
	int i;
	char company_name1[MAX]="Google";
	char company_name2[MAX]="Twitter";
	char company_name3[MAX]="Facebook";
	char company_name4[MAX]="Apple";
	char company_name5[MAX]="Microsoft";
	char company_name6[MAX]="Hewlett-Packard";
	char company_name7[MAX]="Intel";
	char company_name8[MAX]="Cisco";
	char company_name9[MAX]="Oracle";
	char company_name10[MAX]="Amazon";
	float share_value1,share_value2,share_value3,share_value4,share_value5,share_value6,share_value7,share_value8,share_value9,share_value10;
	float share_value1_1,share_value2_1,share_value3_1,share_value4_1,share_value5_1,share_value6_1,share_value7_1,share_value8_1,share_value9_1,share_value10_1;
	float share_value1_2,share_value2_2,share_value3_2,share_value4_2,share_value5_2,share_value6_2,share_value7_2,share_value8_2,share_value9_2,share_value10_2;
	share_value1=575.70;
	share_value2=51.93;
	share_value3=77.48;
	share_value4=101.66;
	share_value5=46.70;
	share_value6=36.56;
	share_value7=34.58;
	share_value8=25.16;
	share_value9=40.5;
	share_value10=331.19;
	
	printf("The Share values of Companies as on Friday 12/09/2014 are as follows:\n");
	printf("%s , $ %.2lf\n",company_name1,share_value1);
	printf("%s , $ %.2lf\n",company_name2,share_value2);
	printf("%s , $ %.2lf\n",company_name3,share_value3);
	printf("%s , $ %.2lf\n",company_name4,share_value4);
	printf("%s , $ %.2lf\n",company_name5,share_value5);
	printf("%s , $ %.2lf\n",company_name6,share_value6);
	printf("%s , $ %.2lf\n",company_name7,share_value7);
	printf("%s , $ %.2lf\n",company_name8,share_value8);
	printf("%s , $ %.2lf\n",company_name9,share_value9);
	printf("%s , $ %.2lf\n",company_name10,share_value10);
	
	printf("The Share values of Companies as on Monday 15/09/2014 are as follows:\n");
	share_value1_1=569.85;
	share_value2_1=51.40;
	share_value3_1=77.04;
	share_value4_1=101.89;
	share_value5_1=46.39;
	share_value6_1=36.36;
	share_value7_1=34.53;
	share_value8_1=25.13;
	share_value9_1=40.32;
	share_value10_1=331.85;
	
	if(share_value1>share_value1_1) {
		printf("%s,$ %.2lf,Down\n",company_name1,share_value1_1);
	}
	else if(share_value1<share_value1_1) {
		printf("%s, $ %.2lf,Up\n",company_name1,share_value1_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name1,share_value1);
	}

	if(share_value2>share_value2_1) {
	        printf("%s,$ %.2lf,Down\n",company_name2,share_value2_1);
	}       
	else if(share_value2<share_value2_1) {
	        printf("%s, $ %.2lf,Up\n",company_name2,share_value2_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name2,share_value2);
	}

        if(share_value3>share_value3_1) {
		printf("%s,$ %.2lf,Down\n",company_name3,share_value3_1);
	}       
	else if(share_value3<share_value3_1) {
	        printf("%s, $ %.2lf,Up\n",company_name3,share_value3_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name3,share_value3);
	}

        if(share_value4>share_value4_1) {
		printf("%s,$ %.2lf,Down\n",company_name4,share_value4_1);
        }       
        else if(share_value4<share_value4_1) {
                printf("%s, $ %.2lf,Up\n",company_name4,share_value4_1);
        }
	else {
		printf("%s, $ %.2lf,None\n",company_name4,share_value4);
	}

        if(share_value5>share_value5_1) {
		printf("%s,$ %.2lf,Down\n",company_name5,share_value5_1);
	}       
	else if(share_value5<share_value5_1) {
	        printf("%s, $ %.2lf,Up\n",company_name5,share_value5_1);
	}
	else {
		printf("%s,$ %.2lf,None\n",company_name5,share_value5);
	}

        if(share_value6>share_value6_1) {
		printf("%s,$ %.2lf,Down\n",company_name6,share_value6_1);
	}       
	else if(share_value6<share_value6_1) {
	        printf("%s, $ %.2lf,Up\n",company_name6,share_value6_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name6,share_value6);
	}

        if(share_value7>share_value7_1) {
		printf("%s,$ %.2lf,Down\n",company_name7,share_value7_1);
	}       
	else if(share_value7,share_value7_1) {
	        printf("%s, $ %.2lf,Up\n",company_name7,share_value7_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name7,share_value7);
	}

        if(share_value8>share_value8_1) {
		printf("%s,$ %.2lf,Down\n",company_name8,share_value8_1);
	}       
	else if(share_value8<share_value8_1) {
	        printf("%s, $ %.2lf,Up\n",company_name8,share_value8_1);
	}
	else {
		printf("%s, $ %.2lf,None\n",company_name8,share_value8);
	}

        if(share_value9>share_value9_1) {
		printf("%s,$ %.2lf,Down\n",company_name9,share_value9_1);
	}       
	else if(share_value9<share_value9_1) {
	        printf("%s, $ %.2lf,Up\n",company_name9,share_value9_1);
	}
	else {
		printf("%s,$ %.2lf,None\n",company_name9,share_value9);
	}

        if(share_value10>share_value10_1) {
                printf("%s,$ %.2lf,Down\n",company_name10,share_value10_1);
        }       
        else if(share_value10<share_value10_1) {
                printf("%s, $ %.2lf,Up\n",company_name10,share_value10_1);
        }
	else {
		printf("%s, $ %.2lf,None\n",company_name10,share_value10);
	}

	printf("The Share values of Companies as on Tuesday 16/09/2014 are as follows:\n");
        share_value1_2=575.70;
	share_value2_2=51.40;
	share_value3_2=76.48;
	share_value4_2=101.89;
	share_value5_2=46.39;
	share_value6_2=37.36;
	share_value7_2=34.53;
	share_value8_2=25.13;
	share_value9_2=39.69;
	share_value10_2=332.85;

        if(share_value1_1>share_value1_2) {
		printf("%s,$ %.2lf,Down\n",company_name1,share_value1_2);
	}
        else if(share_value1_1<share_value1_2) {
                printf("%s, $ %.2lf,Up\n",company_name1,share_value1_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name1,share_value1_1);
        }

	if(share_value2_1>share_value2_2) {
                printf("%s,$ %.2lf,Down\n",company_name2,share_value2_2);
        }
        else if(share_value2_1<share_value2_2) {
                printf("%s, $ %.2lf,Up\n",company_name2,share_value2_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name2,share_value2_1);
        }

	if(share_value3_1>share_value3_2) {
                printf("%s,$ %.2lf,Down\n",company_name3,share_value3_2);
        }
        else if(share_value3_1<share_value3_2) {
                printf("%s, $ %.2lf,Up\n",company_name3,share_value3_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name3,share_value3_1);
        }

	if(share_value4_1>share_value4_2) {
                printf("%s,$ %.2lf,Down\n",company_name4,share_value4_2);
        }
        else if(share_value4_1<share_value4_2) {
                printf("%s, $ %.2lf,Up\n",company_name4,share_value4_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name4,share_value4_1);
        }
 
	if(share_value5_1>share_value5_2) {
                printf("%s,$ %.2lf,Down\n",company_name5,share_value5_2);
        }
        else if(share_value5_1<share_value5_2) {
                printf("%s, $ %.2lf,Up\n",company_name5,share_value5_2);
        }
        else {
                printf("%s,$ %.2lf,None\n",company_name5,share_value5_1);
        }

	if(share_value6_1>share_value6_2) {
                printf("%s,$ %.2lf,Down\n",company_name6,share_value6_2);
        }
        else if(share_value6_1<share_value6_2) {
                printf("%s, $ %.2lf,Up\n",company_name6,share_value6_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name6,share_value6_1);
        }

	if(share_value7_1>share_value7_2) {
                printf("%s,$ %.2lf,Down\n",company_name7,share_value7_2);
        }
        else if(share_value7_1<share_value7_2) {
                printf("%s, $ %.2lf,Up\n",company_name7,share_value7_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name7,share_value7_1);
        }

	if(share_value8_1>share_value8_2) {
	        printf("%s,$ %.2lf,Down\n",company_name8,share_value8_2);
        }
        else if(share_value8_1<share_value8_2) {
                printf("%s, $ %.2lf,Up\n",company_name8,share_value8_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name8,share_value8_1);
        }
 
	if(share_value9_1>share_value9_2) {
                printf("%s,$ %.2lf,Down\n",company_name9,share_value9_2);
        }
        else if(share_value9_1<share_value9_2) {
                printf("%s, $ %.2lf,Up\n",company_name9,share_value9_2);
        }
        else {
                printf("%s,$ %.2lf,None\n",company_name9,share_value9_1);
        }

	if(share_value10_1>share_value10_2) {
                printf("%s,$ %.2lf,Down\n",company_name10,share_value10_2);
        }
        else if(share_value10_1<share_value10_2) {
                printf("%s, $ %.2lf,Up\n",company_name10,share_value10_2);
        }
        else {
                printf("%s, $ %.2lf,None\n",company_name10,share_value10_1);
        }
	
	return 0;
}
