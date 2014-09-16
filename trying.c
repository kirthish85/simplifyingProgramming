#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#include<math.h>

#define MAX 100
int match(char [], char []);

int main(int argc, char **argv) {
int length,count=0,found=0;//
        char comma[]=",";
	time_t current_time;
	char* c_time_string,test[]="",convert[50];
	current_time = time(NULL);
	int c,got,bytes;
	double share_value;
	char *fvalue= NULL,*lvalue= NULL,fflag=0,company_name[MAX],comp_name[MAX],update,after_found[MAX];
	FILE * fp,*filepointer;
	if (current_time == ((time_t)-1)) {
		(void) fprintf(stderr, "Failure to compute the current time.");
        	return EXIT_FAILURE;
    	}
	c_time_string = ctime(&current_time);
	if (c_time_string == NULL) {
        	(void) fprintf(stderr, "Failure to convert the current time.");
        	return EXIT_FAILURE;
    	}
        while((c=getopt(argc,argv,"lf:")) !=-1) {
                switch(c) {
                        case 'f':fflag=1;
				 fvalue=optarg;
                                 if(strcmp(fvalue,"share.csv") != 0) {
                                         printf("Can't open the required file\n");
                                         printf("The file to be opened was share.csv. TRY AGAIN!!!\n");
                                         exit(EXIT_FAILURE);
                                 }
                                 break;
                        case 'l':
				 lvalue=optarg;
                                 if(strcmp(lvalue,"log.txt") != 0) {
                                         printf("Can't open the required file\n");
                                         printf("The file to be opened was log.txt. TRY AGAIN!!!\n");
                                         exit(EXIT_FAILURE);
				 }
                                 break;
                        default:
                                 printf("Invaild input \n");
                                 exit(EXIT_FAILURE);
                }
	}
	(void) printf("Current time is %s", c_time_string);
	filepointer=fopen("log.txt","a+");
	fprintf(filepointer,"%s",c_time_string);
	fflush(filepointer);
        bytes=0;
	fp=fopen("share.csv","a+");
printf("Enter company name and share value\n");
		scanf("%s%lf",comp_name,&share_value);
		printf("Entered name is %s\n",comp_name);
	while(!feof(fp)) {

label:		fscanf(fp,"%s",company_name);
		printf("Company name and share value's are: %s\n", company_name );
		
                printf("given share value is%lf\n",share_value);
                strncpy(comp_name,comp_name,strlen(comp_name)-1);
                length=strlen(comp_name);
                bytes=sizeof(comp_name);
		
                snprintf(convert,MAX,"%lf",share_value);           
	        printf("converted %s\n",convert);
		    
	        // strcat(test,comp_name);
	         //strcat(test,comma);
                 //printf(" ");
		 //strcat(test,convert);
		   //     printf("test1 %s\n",test);
	        got=match(company_name,comp_name);
                
int l1=strlen(company_name);
int l2=strlen(comp_name);
printf("\n%d %d \n",l1,l2);
                printf("got  is %d\n",got);   
                  count++;
	        if(got!=-1)
                  { fscanf(fp,"%s",after_found);
	            printf("Found at location... %s ",after_found);
                    found=1;
		    break;
	          }
	       	else
                {
               if(got==-1)
                   {
                    found=0;count++;
                    printf("count is %d\n",count);
                      if(count=4)
                    {
	            fseek(fp,0,SEEK_END);
		    fprintf(fp,"%s,%lf",comp_name,share_value);
                    }else goto label;
                   }		
                }
		
	}
	fclose(fp);
	fclose(filepointer);
}

int match(char text[], char pattern[]) {
  int c, d, e, text_length, pattern_length, position = -1;
 
  text_length    = strlen(text);
  pattern_length = strlen(pattern);
 
  if (pattern_length > text_length) {
    return -1;
  }
 
  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;
 
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }
 
  return -1;
}
                    
