n=input('Enter number:');
c=0;
for i=1:n
    if rem(n,i)==0
        c=c+1;
    end
end
if c==2
    fprintf('%4u is a Prime Number.\n',n);
else
    fprintf('%4u is not a Prime Number.\n',n);
end