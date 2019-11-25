inFileName=input('Enter Input File Name:','s');
data=xlsread(inFileName);
data1=data(:,1);
Roll={};
Grade=[];
varNames={'Roll','Grade'};
data0=table(Roll,Grade,'VariableNames',varNames);
writetable(data0,'Grade.xlsx');
xlswrite('Grade.xlsx',data1,'Sheet1','A2');
rows=length(data(:,1));
for i=1:rows
    if data(i,2)>=90
        data2(i,1)=char('O');
    elseif data(i,2)>=80 && data(i,2)<90
        data2(i,1)=char('E');
    elseif data(i,2)>=70 && data(i,2)<80
        data2(i,1)=char('A');
    elseif data(i,2)>=60 && data(i,2)<70
        data2(i,1)=char('B');
    elseif data(i,2)>=50 && data(i,2)<60
        data2(i,1)=char('C');
    elseif data(i,2)>=40 && data(i,2)<30
        data2(i,1)=char('D');
    else
        data2(i,1)=char('F');
    end
end
xlswrite('Grade.xlsx',data2,'Sheet1','B2');