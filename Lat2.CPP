#include <iostream.h>
#include <conio.h>
main()
{
int n,i=1;
float nilai,rata,jml=0;
cout<<"Input Banyak Nilai= ";cin>>n;
while(i<=n)
{
cout<<"Input Nilai "<<i<<" = ";cin>>nilai;
jml=jml+nilai;
rata=jml/n;
i++;
}
cout<<"\nTotal Nilai= "<<jml;
cout<<"\nRata Nilai= "<<rata;
getch();
}