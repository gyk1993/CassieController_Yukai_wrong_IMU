classdef CASSIE < RobotLinks
    
    properties
        ContactPoints = struct;
        OtherPoints = struct;

    end
    
    methods
        
        function obj = CASSIE(urdf)
            
            % Floating base model
            base = get_base_dofs('floating');
            
            % Set base DOF limits (Joint limits are read from URDF)
            limits = [base.Limit];
            
            [limits.lower] = deal(-10, -10, 0.5, -pi/8, -pi/8, -2*pi);
            [limits.upper] = deal(10, 10, 2, pi/8, pi/8, 2*pi);
            [limits.velocity] = deal(20, 20, 20, 20, 20, 20);
            [limits.effort] = deal(0);
            for i=1:length(base)
                base(i).Limit = limits(i);
            end
            
            obj = obj@RobotLinks(urdf,base);
                        
            %% define contact frames
            Rz = @(th) [cos(th), -sin(th), 0; sin(th), cos(th), 0; 0,0,1];
            Ry = @(th) [cos(th), 0, sin(th); 0, 1, 0; -sin(th), 0, cos(th)];
            Rx = @(th) [1,0,0; 0, cos(th), -sin(th); 0, sin(th), cos(th)];
                
            % Bottom of toe
            l_foot_frame = obj.Joints(getJointIndices(obj, 'toe_joint_left'));
            H = double(subs(l_foot_frame.computeForwardKinematics, obj.States.x, zeros(22,1)));
            R = H(1:3,1:3)'*Rz(-pi/2)*Rx(deg2rad(50));
            obj.ContactPoints.LeftToeBottom = CoordinateFrame(...
                'Name','LeftToeBottom',...
                'Reference',l_foot_frame,...
                'Offset',[0.0177, 0.0522, 0],...
                'R',R... % z-axis is the normal axis, so no rotation required
                );
            
            r_foot_frame = obj.Joints(getJointIndices(obj, 'toe_joint_right'));
            obj.ContactPoints.RightToeBottom = CoordinateFrame(...
                'Name','RightToeBottom',...
                'Reference',r_foot_frame,...
                'Offset',[0.0177, 0.0522, 0],...
                'R',R... % z-axis is the normal axis, so no rotation required
                );
            
            
            % Back of toe
            obj.ContactPoints.LeftToeBottomBack = CoordinateFrame(...
                'Name','LeftToeBottomBack',...
                'Reference',l_foot_frame,...
                'Offset',[0.0798867, 0, 0],...
                'R',[pi/2,0,pi/2]... % z-axis is the normal axis, so no rotation required
                );
            
            obj.ContactPoints.RightToeBottomBack = CoordinateFrame(...
                'Name','RightToeBottomBack',...
                'Reference',r_foot_frame,...
                'Offset',[0.0798867, 0, 0],...
                'R',[pi/2,0,pi/2]... % z-axis is the normal axis, so no rotation required
                );
            
            % Front of toe
            obj.ContactPoints.LeftToeBottomFront = CoordinateFrame(...
                'Name','LeftToeBottomFront',...
                'Reference',l_foot_frame,...
                'Offset',[0, 0.0798867, 0],...
                'R',[pi/2,0,pi/2]... % z-axis is the normal axis, so no rotation required
                );
            
            obj.ContactPoints.RightToeBottomFront = CoordinateFrame(...
                'Name','RightToeBottomFront',...
                'Reference',r_foot_frame,...
                'Offset',[0, 0.0798867, 0],...
                'R',[pi/2,0,pi/2]... % z-axis is the normal axis, so no rotation required
                );
            
            %% define other frames
            
        end
        
        function ExportKinematics(obj, export_path)
            % Generates code for forward kinematics 
            
            if ~exist(export_path,'dir')
                mkdir(export_path);
                addpath(export_path);
            end
            
            % Compute positions of all joints
            for i = 1:length(obj.Joints)
                position = obj.Joints(i).computeCartesianPosition;
                H = obj.Joints(i).computeForwardKinematics;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.Joints(i).Name];
                export(position, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(position, 'Vars', vars, 'File', filename, 'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
                filename = [export_path, 'H_', obj.Joints(i).Name];
                export(H, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(H, 'Vars', vars, 'File', filename,'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
            end
            
            % Compute positions of contact points
            cp_fields = fields(obj.ContactPoints);
            for i = 1:length(cp_fields)
                position = obj.ContactPoints.(cp_fields{i}).computeCartesianPosition;
                H = obj.ContactPoints.(cp_fields{i}).computeForwardKinematics;
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.ContactPoints.(cp_fields{i}).Name];
                export(position, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(position, 'Vars', vars, 'File', filename,'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
                filename = [export_path, 'H_', obj.ContactPoints.(cp_fields{i}).Name];
                export(H, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(H, 'Vars', vars, 'File', filename,'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);                
            end
            
            % Compute positions of other points
            op_fields = fields(obj.OtherPoints);
            for i = 1:length(op_fields)
                position = obj.OtherPoints.(op_fields{i}).computeCartesianPosition;
                H = obj.OtherPoints.(op_fields{i}).computeForwardKinematics;                
                vars = obj.States.x;
                filename = [export_path, 'p_', obj.OtherPoints.(op_fields{i}).Name];
                export(position, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(position, 'Vars', vars, 'File', filename,'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);
                filename = [export_path, 'H_', obj.OtherPoints.(op_fields{i}).Name];
                export(H, 'Vars', vars, 'File',filename,'ForceExport',true);
                export(H, 'Vars', vars, 'File', filename,'TemplateHeader', 'res/templateMin.h', 'TemplateFile', 'res/templateMin.c', 'BuildMex', false, 'ForceExport', true);                
            end
            
            
        end
    end
    
    
end