//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WFAction, WFModuleModel, WFParameter;
@protocol WFParameterState;

@protocol WFModuleDelegate 

@optional
- (unsigned long long)indentationLevelForModule:(WFModuleModel *)arg1 withAction:(WFAction *)arg2;
- (void)removeActionPressedForModule:(WFModuleModel *)arg1 withAction:(WFAction *)arg2;
- (_Bool)module:(WFModuleModel *)arg1 shouldAllowRemovingAction:(WFAction *)arg2;
- (_Bool)module:(WFModuleModel *)arg1 setParameterState:(id <WFParameterState>)arg2 forParameter:(WFParameter *)arg3 action:(WFAction *)arg4;
@end

