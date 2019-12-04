//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISpringLoadedInteractionContext_Internal-Protocol.h>

@class NSString, UISpringLoadedGestureRecognizer, UIView;
@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface UISpringLoadedInteractionContextImpl : NSObject <UISpringLoadedInteractionContext_Internal>
{
    id targetItem;
    UIView *targetView;
    UIView *overrideTargetView;
    id overrideTargetItem;
    long long _state;
    UISpringLoadedGestureRecognizer *_currentRecognizer;
}

@property(nonatomic) __weak UISpringLoadedGestureRecognizer *currentRecognizer; // @synthesize currentRecognizer=_currentRecognizer;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id overrideTargetItem; // @synthesize overrideTargetItem;
@property(retain, nonatomic) UIView *overrideTargetView; // @synthesize overrideTargetView;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView;
@property(retain, nonatomic) id targetItem; // @synthesize targetItem;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
- (struct CGPoint)locationInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

