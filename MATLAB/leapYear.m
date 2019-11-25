year=input('Enter year:');
if mod(year,400)==0
    fprintf('%4u is a leap year.\n',year);
elseif mod(year,4)==0 && mod(year,100)~=0
    fprintf('%4u is a leap year.\n',year);
else
    fprintf('%4u is not a leap year.\n',year);
end