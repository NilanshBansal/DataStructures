/*
if   abc is the entered string then subsequences are :

"" (the double quotes just signifies an empty string, don't worry about the quotes)
c 
b 
bc 
a 
ac 
ab 
abc 

*/ 




int subs(char a[],char out[][50],int si)
{
    int i;
    if(a[si]=='\0')
    {
        out[0][0]='\0';
        return 1;
    }
    int smalloutput=subs(a,out,si+1);
    for(i=0;i<smalloutput;i++)
    {
        out[i+smalloutput][0]=a[si];
    int j=0;
    for(;out[i][j]!='\0';j++)
    {
        out[i+smalloutput][j+1]=out[i][j];
    }
    out[i+smalloutput][j+1]='\0';
    }
    return 2*smalloutput;
}
int subSequences(char input[], char output[][50]) {
    return subs(input,output,0);

}


