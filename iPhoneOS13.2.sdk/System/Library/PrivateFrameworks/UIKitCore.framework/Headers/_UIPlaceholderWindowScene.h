//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIScreenBasedWindowScene.h>

#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPlaceholderWindowScene : _UIScreenBasedWindowScene <_UIContextBinderContextCreationPolicyHolding>
{
}

+ (_Bool)autoinvalidates;
+ (_Bool)shouldAllowComponents;
+ (_Bool)alwaysKeepContexts;
- (_Bool)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

