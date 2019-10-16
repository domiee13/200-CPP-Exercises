        long long res = 1;
        while(g%2==0){
            res += h*h;
            if(res>MAX) res%= MAX;
            g /=2;
        }
        cout<<res<<endl;
