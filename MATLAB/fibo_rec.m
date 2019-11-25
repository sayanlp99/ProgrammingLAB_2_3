function f=fibo_rec(n)
if n==1
    f(0)=0;
elseif n==2
    f(1)=1;
else
    f=fibo_rec(n-1)+fibo_rec(n-2);
end
end