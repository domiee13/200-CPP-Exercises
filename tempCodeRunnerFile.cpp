int max = *max_element(a.begin(),a.end());
        for(int i = 0;i<a.size();i++){
            if(a[i]==max) cout<<"_"<<" ";
            else{
                tmp = a[i];
                do{
                    tmp++; 
                }
                while(find(a.begin(),a.end(),tmp)==a.end());
                /*
                Nếu code while(find(a.begin(),a.end(),tmp)!=a.end()) thì vòng lặp
                sẽ không chạy lần nào vì lần đầu khi tmp chưa tăng đã check điều kiện
                và bỏ qua vòng lặp
                */
                out<<tmp<<" ";
            }            
        }
        out<<endl;
    