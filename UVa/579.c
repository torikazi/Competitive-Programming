int main()
{
    int a,b;
    float res;
    while(scanf("%d:%d",&a,&b)==2){
    if((a==0)&&(b==0)) break;
        res=a*30.0-b*5.5;
    if(res<-180)
        printf("%.3f\n",360.0+res);
    else if(res<0)
        printf("%.3f\n",-res);
    else if(res<180)
        printf("%.3f\n",res);
    else
        printf("%.3f\n",360.0-res);
    }
    return 0;
}
