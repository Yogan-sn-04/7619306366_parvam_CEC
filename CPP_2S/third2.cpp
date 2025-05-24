#include<iostream>
int main()
{
   int m1 = 88 ,m2 = 96 ,m3 = 94 ,m4 = 88 ,m5 = 92,sum;
   float avg;
   std::cout<<"STUDENT MARKS CARD\n";
   std::cout<<"\nCITY ENGINEERING COLLEGE\n";
   std::cout<<"name:yogan subramanya naik \n Branch:ISE \n Year:2025 \n sem:2nd \n college:city engineering college \n";
   std::cout<<"\n m1=88\n m2=96\n m3=94\n m4=88\n m5=92\n";
   sum=m1+m2+m3+m4+m5;
   avg=(m1+m2+m3+m4+m5/5);
   std::cout<<"\nTotal="<<sum;
   std::cout<<"\nAverage="<<avg;
    if(avg>90)
       std::cout<<"\n grade A";
    else if(avg<90)
       std::cout<<" \ngrade B";
   return 0;
}