n=input('Enter number:');
c=0;
for i=1:n
    if rem(n,i)==0
        c=c+1;
    end
end
if(c==2)
    fprintf('Prime number.\n');
else
    fprintf('Non-Prime number.\n');
end