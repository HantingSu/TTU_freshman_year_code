#include<stdio.h>   //呼叫資料庫<stdio.h>
 #include<stdlib.h>  //呼叫資料庫<stdlib.h>   

 int main(void){
      float V=12;   //伏特
      float R1=3000,R2=7500,R3=11000,R4=24000,R5=33000,R6=11000,R7=3000,R8=11000;
      float Va=0,Vb=0,Vc=0,Vd=0;
      float Req=0,mesh_1=0,mesh_2=0,mesh_3=0;    
  
     //Lab(A)
      mesh_1=R3+R6+R8; //concatenate
      mesh_2=(1/((1/mesh_1)+(1/R5)))+R2;  //mesh_1 and R5 parallel && R2 concate    nate mesh_1 and R5
      mesh_3=1/((1/mesh_2)+(1/R4));       //mesh_2 and R4 parallel
      Req=R1+mesh_3+R7;
      printf("Lab(A):Req=%1.3fΩ\n\n\n",Req);
      //Lab(A)end
      
      //Lab(B)
      float I,i1;
      I=V/Req;  //I=2/3 by 歐姆定理
      Va=V-I*R1;  //Va=10V
      Vb=Va-(I/2)*R2;
      i1=(I/2);
      Vc=Vb-((i1/2)*R3);
      Vd=V-(I*(R1+mesh_3));                                                   
      printf("Lab(b):\n");
      printf("Va=%f\nVb=%f\nVc=%f\nVd=%f\n",Va,Vb,Vc,Vd); 
  
      return 0;
      
  }
