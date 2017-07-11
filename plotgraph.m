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
plot(Data.h0.Time,reshape(Data.h0.Data(2,1,:), 1, []))
hold on
plot(Data.h0.Time,reshape(Data.h0.Data(8,1,:), 1, []))
hold off

figure(3)
plot(Data.y.Time,reshape(Data.y.Data(3,1,:), 1, []))
hold on
plot(Data.y.Time,reshape(Data.y.Data(8,1,:), 1, []))
hold off

figure(4)
plot(Data.u.Time,reshape(Data.u.Data(5,1,:), 1, []))
hold on
plot(Data.u.Time,reshape(Data.u.Data(10,1,:), 1, []))
hold off

figure(5)
for i = 1: 10
    subplot(2,5,i)
    plot(Data.hd.Time,reshape(Data.hd.Data(i,1,:), 1, []))   
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

figure(9)
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

figure(9)
plot(Data.torso_velocity.Time,reshape(Data.torso_velocity.Data(2,1,:), 1, []))
plot(Data.torso_position.Time,reshape(Data.torso_position.Data(2,1,:), 1, []))
plot(torso_v.Time,reshape(torso_v.Data(:,2), 1, []))

%% plot the joint valuesfigure(10)
name = {'abduction','rotation','thigh','thigh_knee','knee_shin','thigh_shin','shin_tarsus','toe'};
name_0 = name;

% joint angle q
name = name_0;
for i = 1:length(name)
    name{i}=['q_' name{i}];
end

figure
name_R = name;
for i = 1:length(name)
    name_R{i} = [name{i} '_R'];
    subplot(2,4,i)
    eval(['plot(Data.' name_R{i} ')']);
    title(name_0{i})
end

figure
name_L = name;
for i = 1:length(name)
    name_L{i} = [name{i} '_L'];
    subplot(2,4,i)
    eval(['plot(Data.' name_L{i} ')']);
    title(name_0{i})
end

% dq
name = name_0;
for i = 1:length(name)
    name{i}=['dq_' name{i}];
end

figure
name_R = name;
for i = 1:length(name)
    name_R{i} = [name{i} '_R'];
    subplot(2,4,i)
    eval(['plot(Data.' name_R{i} ')']);
    title(name_0{i})
end

