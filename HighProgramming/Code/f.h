int count(int);
int square(int);

int count (int n){
  int countdigits=0,current = n;
  for (;current; countdigits++,current/=10);
  return countdigits;
}
int square(int n){
  float sqrt_n=sqrt(n), ost=sqrt_n-floor(sqrt_n);
  float epsilon=0.00000001;
  if ((ost<epsilon) || (1-ost<epsilon))
    return 1;
  else
    return 0;
}

  

