function [Data] = parseData(Data)
%% Function to parse Data into a struct

Data_template = flat_ground_walking.controller.util.initializeControllerBusses();

% Convert Data vector into a struct based on the fieldnames in Data
fieldNames = fields(Data_template);
DataVec = Data;

Data = struct;
index = 1;

for i = 1:length(fieldNames)
    len = size(Data_template.(fieldNames{i}),1);
    Data.(fieldNames{i}) = DataVec(index:(index+len-1),:);
    index = index+len;
end

end

