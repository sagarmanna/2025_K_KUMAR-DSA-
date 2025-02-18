string kangaroo(int x1, int v1, int x2, int v2) {
    string ans="";
    if(v1<v2 || v1==v2) ans ="NO";
    else
      if(v1>v2){
     int x_=x2-x1;
     int v_=v1-v2;
     if(x_%v_==0) ans="YES";
     else ans ="NO";
     }
     return ans ;
    }