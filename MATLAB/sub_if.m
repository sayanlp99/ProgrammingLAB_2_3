a=input('Enter 1st number:');
b=input('Enter 2nd number:');
if(a>b)
    c=a-b;
    fprintf('Difference=%4u\n',c);
else
    c=b-a;
    fprintf('Difference=%4u\n',c);
end