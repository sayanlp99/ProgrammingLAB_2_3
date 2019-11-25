function y=fibo_nonrec(n)
a(1)=0;
a(2)=1;
for i=1:n-2
    a(i+2)=a(i+1)+a(i);
end
y=a;
end