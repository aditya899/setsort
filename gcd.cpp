    #include<bits/stdc++.h>
     long long int arr[1000001],gcd;
    int main()
    {
       
            long long int n,q,l,r,start;
           
            scanf("%lld %lld",&n,&q);
            for(int i=0; i<n; i++){
                scanf("%lld",&arr[i]);}
            while(q--)
            {
                scanf("%lld %lld",&l,&r);
                l=l-1;
                r=r-1;
                gcd=0;
                for(int i=0; i<n; i++)
                {
                    if(i<=l || i>r)
                    {
                        gcd=std::__gcd(gcd,arr[i]);
                    }
                }
                printf("%d\n",gcd);
            }
       
    } 
