//writing array of integers using write() 
#include<iostream>
  
#include<fstream.h> 
void main() 
{  
int x[] = {100,200,300,400}; 
int i; 
fstream file; 
file.open("myfile.dat",ios::out|ios::binary); 
file.write((char*)&x,sizeof(x));  
file.close(); 
for(i = 0;i < 4;i++) 
x[i] = 0; 
file.open("myfile.dat",ios::in|ios::binary); 
file.read((char*)&x,sizeof(x)); 
for(i = 0;i < 4;i++) 
cout<<x[i]; 

} 