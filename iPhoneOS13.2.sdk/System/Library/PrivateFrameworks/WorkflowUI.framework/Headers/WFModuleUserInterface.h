//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFUIKitUserInterface-Protocol.h>

@class NSString, UIView, UIViewController;

@interface WFModuleUserInterface : NSObject <WFUIKitUserInterface>
{
    UIView *_view;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)presentAlert:(id)arg1;
- (id)initWithView:(id)arg1 inViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

