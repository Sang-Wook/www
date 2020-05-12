#include <stdio.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h> 
#include <time.h>
  
struct stat stat1, stat2; 
struct tm *time1, *time2;
struct tm t, n; 

void filestat1(); 
void filestat2(); 
void filetime1(); 
void filetime2(); 
void sizecmp(); 
void blockcmp(); 
void datecmp(); 
void timecmp();  
     
int main(){     
   filestat1();     
   filestat2();     
   filetime1();     
   filetime2();     
   sizecmp();     
   blockcmp();     
   datecmp();     
   timecmp(); 
}  
//파일 1의 정보를 가져오는 함수 작성 

void filestat1(){      
}  
//파일 2의 정보를 가져오는 함수 작성 
void filestat2(){        
}  
//파일 1의 시간 정보를 가져오는 함수 작성 
void filetime1(){     
   time1 = localtime_r(&stat1.st_mtime, &t); 
}  
//파일 2의 시간 정보를 가져오는 함수 작성 
void filetime2(){     
   time2 = localtime_r(&stat2.st_mtime, &n);     
}  
//두 개의 파일 크기를 비교하는 함수 작성
void sizecmp(){

}  
//두 개의 파일 블락 수를 비교하는 함수 작성 
void blockcmp(){

}  
//두 개의 파일 수정 날짜를 비교하는 함수 작성
void datecmp(){

}  
//두 개의 파일 수정 시간을 비교하는 함수 작성 
void timecmp(){ 
   int result1 = time1->tm_hour*60 + time1->tm_min;
   int result2 = time2->tm_hour*60 + time2->tm_min;      

   printf("time compare\n");           
   if(result1 > result2) printf("text2 is early\n\n\n");     
   else if(result2 > result1) printf("text1 is early\n\n\n");     
   else printf("same time\n\n");     
   return; 
}
