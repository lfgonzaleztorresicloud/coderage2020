object WebModule1: TWebModule1
  OldCreateOrder = False
  Actions = <
    item
      Default = True
      Name = 'DefaultHandler'
      PathInfo = '/'
      OnAction = WebModule1DefaultHandlerAction
    end
    item
      Name = 'employees'
      PathInfo = '/employees'
      OnAction = WebModule1employeesAction
    end>
  Height = 230
  Width = 415
end
