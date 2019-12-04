//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout
{
    double _leftSplitWidth;
    double _rightSplitWidth;
}

@property(nonatomic) double rightSplitWidth; // @synthesize rightSplitWidth=_rightSplitWidth;
@property(nonatomic) double leftSplitWidth; // @synthesize leftSplitWidth=_leftSplitWidth;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect)arg2 forAssistantView:(id)arg3;
- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (_Bool)usesUnifiedButtonBar;
- (id)init;

@end

