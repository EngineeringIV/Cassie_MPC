% RemoteSpoofer
classdef RemoteSpoofer < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
    end % properties
    
    % Private variables
    properties(Access = private)
    end
    
    % Pre-computed constants
    properties(Access = private, Constant)
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
        end % setupImpl
        
        function [cassieOutputs] = stepImpl(obj, cassieOutputs,t,position_input)
            RadioButton = RadioChannelToButton(cassieOutputs.pelvis.radio.channel);
            if t < 5
                RadioButton.SBA = 0;
            end
            if t > 5
                RadioButton.SBA = 1;
            end
%             if t>8
%                 RadioButton.LVA = 0.4;
%                 RadioButton.RHA = 0.2;
%             end
            if t>=8
                if mod(t, 0.01) == 0
                    dlmwrite('position.dat', position_input', '-append')
                end
                if mod(t, 1) == 0 
                    [qyaw, qpitch, qroll, dqyaw, dqpitch, dqroll] = IMU_to_Euler_v2(cassieOutputs.pelvis.vectorNav.orientation, cassieOutputs.pelvis.vectorNav.angularVelocity);
                    x0 = [position_input(1);position_input(2);qyaw];
                    xL = [];
                    xU = [];
                    uL = [0; -0.1];
                    uU = [1; 0.1];
                    xN = [];
                    N = 5;
                    [feas, xOpt, uOpt, JOpt, xD] = solve_cftoc(N, x0, xN, t, xL, xU, uL, uU);
                    if feas
                        u1 = uOpt(1, 1);
                        u2 = uOpt(2, 1)/0.07*(-0.2);
                        dlmwrite('u.dat', [u1;u2], 'precision', 4)
                        RadioButton.LVA = u1;
                        RadioButton.RHA = u2;
                    end
                else
                    u = dlmread('u.dat');
                    RadioButton.LVA = u(1);
                    RadioButton.RHA = u(2);
                end
            end   
            RadioButton.LSA = median([-1,t-0.5-1,1]);
            cassieOutputs.pelvis.radio.channel = RadioButtonToChannel(RadioButton);
%             if t > 163.865
%                 outputs.radio(10) = 1;
%             end[
%             outputs.radio(10) = 1;
        end % stepImpl
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function out = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            out = [1, 1];           
        end % getOutputSizeImpl
        
        function out = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            out = 'CassieOutBus';
        end % getOutputDataTypeImpl
        
        function out = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            out = false;
        end % isOutputComplexImpl
        
        function out= isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variable-size output ports.
            out = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef

