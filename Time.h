struct Time{
	int m,h,s;
};
void getTime(Time &x)
{
  while(x.h>=24||x.m>=60||x.s>=60)
  {
  cout << " ";
  cin >>x.h>>x.m>>x.s;
  if(x.h>=24||x.m>=60||x.s>=60)
  {
    cout << "wrong time\n";
  }

  }
}
struct Time subtract(Time &x, Time &y)
{
  struct Time z;
  z.h=x.h-y.h;
  z.m=x.m-y.m;
  z.s=x.s-y.s;
  if(z.s<0)
  {
    z.s+=60;
    z.m-=1;
  }
  if(z.m<0)
  {
    z.m+=60;
    z.h-=1;
  }
  if(z.h<0)
  {
    z.h+=24;
  }
  return z;

}

//	Write function to getTime;
//	Write function to subtract;
