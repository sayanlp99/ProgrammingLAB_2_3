function fibo_rec(n)
if n==1
    fprintf("0 ");
elseif n==2
    fprintf("1 ");
else
    fprintf('%4u ',fibo_rec(n-1)+fibo_rec(n-2));
end
fprintf('\n');
end