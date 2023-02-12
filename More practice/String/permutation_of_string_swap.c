void prem(chat s[],int l.int h)
{
  int i;
  if(l==h)
  {
     printf("%s",s);
  }
  else
  {
    for(i=l;i<=h;i++)
    {
      swap(s[l],s[i]);
      prem(s,l+1,h);
      swap(s[l],s[i]);
    }
    
  }
  
}
