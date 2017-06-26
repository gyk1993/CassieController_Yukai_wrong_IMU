switch_time=[];
for i =1: length(Data.t0.Data(1,1,:))-1;
    if Data.t0.Data(1,1,i) ~=Data.t0.Data(1,1,i+1)
        switch_time = [switch_time Data.t0.Data(1,1,i)];
    end
end

figure(1)
plot(Data.hd.Time,reshape(Data.hd.Data(3,1,:), 1, []))
hold on
plot(Data.hd.Time,reshape(Data.hd.Data(8,1,:), 1, []))
hold off

figure(2)
plot(Data.h0.Time,reshape(Data.h0.Data(3,1,:), 1, []))
hold on
plot(Data.h0.Time,reshape(Data.h0.Data(8,1,:), 1, []))
hold off

figure(3)
plot(Data.y.Time,reshape(Data.y.Data(3,1,:), 1, []))
hold on
plot(Data.y.Time,reshape(Data.y.Data(8,1,:), 1, []))
hold off

figure(4)
plot(Data.u.Time,reshape(Data.u.Data(3,1,:), 1, []))
hold on
plot(Data.u.Time,reshape(Data.u.Data(8,1,:), 1, []))
hold off

figure(5)
for i = 1: 10
    subplot(2,5,i)
    plot(Data.hd.Time,reshape(Data.hd.Data(i,1,:), 1, []))
    hold on
    plot(Data.h0.Time,reshape(Data.h0.Data(i,1,:), 1, []))

    ub1 = max(Data.hd.Data(i,1,:));
    ub2 = max(Data.h0.Data(i,1,:));
    lb1 = min(Data.hd.Data(i,1,:));
    lb2 = min(Data.h0.Data(i,1,:));
    ub = max([ub1 ub2]);
    lb = max([lb1 lb2]);
    
    for j = 1: length(switch_time)
        plot([switch_time(j) switch_time(j)], [ub lb],'k--')
    end
    hold off        
end

figure(6)
for i = 1: 10
    subplot(2,5,i)
    plot(Data.h0.Time,reshape(Data.h0.Data(i,1,:), 1, []))
end

figure(7)
for i = 1: 10
    subplot(2,5,i)
    plot(Data.y.Time,reshape(Data.y.Data(i,1,:), 1, []))
end

figure(8)
for i = 1: 10
    subplot(2,5,i)
    plot(Data.u.Time,reshape(Data.u.Data(i,1,:), 1, []))
end
