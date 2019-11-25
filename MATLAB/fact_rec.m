function f=fact_rec(n)
if n==0
    f=1;
else
    f=n*fact_rec(n-1);
end
end