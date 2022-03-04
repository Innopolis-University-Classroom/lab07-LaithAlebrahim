template<typename T>
void  multiples<T> (T& sum, T x, T n)
{
        sum+=1;

    for(int i=1;i<=n;i++){
        sum+=x*i;
    }


}
